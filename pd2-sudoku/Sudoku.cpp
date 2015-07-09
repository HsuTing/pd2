#include "Sudoku.h"

Data::Data() {
	position_i = -1;
	position_j = -1;
	memset(check_number, 0, sizeof(check_number));
}

void Data::SetPosition(int i, int j) {
	position_i = i;
	position_j = j;
}

void Data::SetCheckNumber(int temp_map[max][max]) {
	CheckRow(temp_map);
	CheckCol(temp_map);
	CheckBlock(temp_map);

	check_number[0] = 9;
	for(int i = 1; i < 10; i++) {
		check_number[0] = check_number[0] - check_number[i];
	}
}

int Data::GetPositionI() {
	return position_i;
}

int Data::GetPositionJ() {
	return position_j;
}

int Data::GetCheckNumber(int num) {
	return check_number[num];
}

void Data::CheckRow(int temp_map[max][max]) {
	for(int i = 0; i < max; i++) {
		if(temp_map[i][position_j] != -1) {
			int temp = temp_map[i][position_j];
			check_number[temp] = 1;
		}
	}
}

void Data::CheckCol(int temp_map[max][max]) {
	for(int j = 0; j < max; j++) {
		if(temp_map[position_i][j] != -1) {
			int temp = temp_map[position_i][j];
			check_number[temp] = 1;
		}
	}
}

void Data::CheckBlock(int temp_map[max][max]) {
	int temp_i = position_i / 3 * 3, temp_j = position_j / 3 * 3;

	for(int i = temp_i; i < temp_i + 3; i++) {
		for(int j = temp_j; j < temp_j + 3; j++) {
			if(temp_map[i][j] != -1) {
				int temp = temp_map[i][j];
				check_number[temp] = 1;
			}
		}
	}
}

Sudoku::Sudoku() {
	memset(map, 0, sizeof(map));
	memset(final, 0, sizeof(final));
	solvable = false;
	count_solvable = 0;
}

void Sudoku::GenerateBlock() {
	int block_row[4], block_col[4], temp_row = 0, temp_col = 0, count = 0;
	memset(block_row, 0, sizeof(block_row));
	memset(block_col, 0, sizeof(block_col));
	srand(time(NULL));

	while(count < 4) {
		temp_row = ( rand() % 4 ) + 0;
		temp_col = ( rand() % 4 ) + 0;

		if(block_row[temp_row] == 1 || block_col[temp_col] == 1 || (temp_row == 0 && temp_col == 0)) {
			continue;
		}
		else {
			block_row[temp_row] = 1;
			block_col[temp_col] = 1;

			for(int i = temp_row * 3; i < temp_row * 3 + 3; i++) {
				for(int j = temp_col * 3; j < temp_col * 3 + 3; j++) {
					map[i][j] = -1;
				}
			}

			count = count + 1;
		}
	}
}

void Sudoku::GenerateNumber() {
	CheckNumber();
	srand(time(NULL));
	int row = 0, col = 0, temp[9];
	memset(temp, 0, sizeof(temp));

	while(row < 3) {
		col = 0;
		while(col < 3) {
			int num = rand() % 9;

			if(temp[num] == 1) {
				continue;
			}
			else {
				temp[num] = 1;

				map[row][col] = num + 1;
				col++;
			}
		}
		row++;
	}

	int count = 1, temp_row = 0, temp_col = 0;
	for(int i = 1; i < 4; i++) {
		row = 0;
		col = i * 3;

		if(map[row][col] == -1) {
			continue;
		}

		for(int k = row; k < row + 3; k++) {
			for(int l = col; l < col + 3; l++) {
				map[k][l] = map[row + count][l - col + temp_col];
			}

			count = count + 1;
			if(count == 3) {
				count = 0;
			}
		}
		temp_col = col;
	}

	for(int i = 1; i < 3; i++) {
		count = i;
		for(int j = 0; j < 4; j++) {
			row = i * 3;
			col = j * 3;

			if(map[row][col] == -1) {
				continue;	
			}

			for(int k = row; k < row + 3; k++) {
				for(int l = col; l < col + 3; l++) {
					if(map[k - i * 3][col + count] == -1) {
						continue;
					}

					map[k][l] = map[k - i * 3][col + count];

					count = count + 1;
					if(count == 3) {
						count = 0;
					}
				}
			}
		}
	}

	for(int i = 0; i < 4; i++) {
		if(map[0][i * 3] == -1) {
			col = i;
		}
	}

	for(int i = 1; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(i == 3 && j == col) {
				continue;
			}

			if(map[i * 3][j * 3] == 0) {
				for(int num = 1; num <= 9; num++) {
					int temp_i = SearchI(i * 3, j * 3, num), temp_j = SearchJ(i * 3, j * 3, num);
					map[temp_i][temp_j] = num;
				}
			}
		}
	}

	for(int num = 1; num <= 9; num++) {
		int temp_i = SearchI(9, col * 3, num), temp_j = SearchJ(9, col * 3, num);
		map[temp_i][temp_j] = num;
	}
}

int Sudoku::SearchI(int i, int j, int num) {
	int temp[3], count = 0;
	memset(temp, 0, sizeof(temp));

	for(int k = i; k < i + 3; k++) {
		for(int l = 0; l < max; l++) {
			if(map[k][l] == num) {
				temp[k - i] = 1;
				count++;
			}
		}
	}

	if(count != 2) {
		for(int k = 0; k < max; k++) {
			for(int l = j; l < j + 3; l++) {
				if(map[k][l] == num) {
					temp[0] = k;
				}
			}
		}

		return temp[0] % 3 + i;
	}
	else {
		for(int k = 0; k < 3; k++) {
			if(temp[k] == 0) {
				return k % 3 + i;
			}
		}
	}
}

int Sudoku::SearchJ(int i, int j, int num) {
	int temp[3], count = 0;
	memset(temp, 0, sizeof(temp));

	for(int k = 0; k < max; k++) {
		for(int l = j; l < j + 3; l++) {
			if(map[k][l] == num) {
				temp[l - j] = 1;
				count++;
			}
		}
	}

	if(count != 2) {
		for(int k = i; k < i + 3; k++) {
			for(int l = 0; l < max; l++) {
				if(map[k][l] == num) {
					temp[0] = l;
				}
			}
		}

		return temp[0] % 3 + j;
	}
	else {
		for(int k = 0; k < 3; k++) {
			if(temp[k] == 0) {
				return k % 3 + j;
			}
		}
	}
}

void Sudoku::PrintMap() {
	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			cout << map[i][j] << " ";
		}
		cout << endl;
	}
}

void Sudoku::PrintNumber() {
	for(int i = 0; i < 10; i++) {
		cout << number[i] << " ";
	}
	cout << endl;
}

void Sudoku::GiveQuestion() {
	memset(map, 0, sizeof(map));
	memset(number, 0, sizeof(number));
	GenerateBlock();
	GenerateNumber();

	for(int i = 0; i < 30; i++) {
	int temp_i = rand() % 12, temp_j = rand() % 12;
	int temp_num = map[temp_i][temp_j];

		if(temp_num == -1) {
			continue;
		}
		map[temp_i][temp_j] = 0;

		Data temp;
		temp.SetPosition(temp_i, temp_j);
		temp.SetCheckNumber(map);

		if(temp.GetCheckNumber(0) > 2) {
			map[temp_i][temp_j] = temp_num;
			i = i - 1;
		}
	}

	cout << endl;
	PrintMap();
	cout << endl;
}

void Sudoku::ReadIn() {
	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			cin >> map[i][j];
		}
	}
}

void Sudoku::Solve() {
	if(Check() == true) {
		CheckNumber();
		SolveFunction();

		if(count_solvable == 1) {
			cout << "1" << endl;

			for(int i = 0; i < max; i++) {
				for(int j = 0; j < max; j++) {
					cout << final[i][j] << " ";
				}
				cout << endl;
			}
		}
		else if(count_solvable > 1) {
			cout << "2" << endl;
		}
		else {
			cout << "0" << endl;
		}
	}
	else {
		cout << "0" << endl;
	}
	cout << endl;
}

void Sudoku::SolveFunction() {
	int amount_zero = number[0], count = 0, temp_map[max][max];
	Data zero[amount_zero];
	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			if(map[i][j] == 0) {
				zero[count].SetPosition(i, j);
				zero[count].SetCheckNumber(map);
				count = count + 1;
			}
		}
	}

	while(CheckZero(zero, amount_zero) == 1) {
		for(int i = 0; i < amount_zero; i++) {
			if(zero[i].GetCheckNumber(0) == 1) {
				int temp_i = zero[i].GetPositionI(), temp_j = zero[i].GetPositionJ(), temp_num = 0;

				for(int j = 1; j < 10; j++) {
					if(zero[i].GetCheckNumber(j) == 0) {
						temp_num = j;
					}
				}
				map[temp_i][temp_j] = temp_num;
			}
		}

		for(int i = 0; i < amount_zero; i++) {
			zero[i].SetCheckNumber(map);
		}
		CheckNumber();
	}

	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			temp_map[i][j] = map[i][j];
		}
	}

	if(number[0] != 0) {
		for(int i = 0; i < amount_zero; i++) {
			if(zero[i].GetCheckNumber(0) != 0) {
				int temp_i = zero[i].GetPositionI(), temp_j = zero[i].GetPositionJ(), temp_num = 0;

				for(int j = 1; j < 10; j++) {
					if(zero[i].GetCheckNumber(j) == 0) {
						temp_num = j;
						map[temp_i][temp_j] = temp_num;
						CheckNumber();
						SolveFunction();

						for(int k = 0; k < max; k++) {
							for(int l = 0; l < max; l++) {
								map[k][l] = temp_map[k][l];
							}
						}
					}
				}
			}

			for(int j = 0; j < amount_zero; j++) {
				zero[j].SetCheckNumber(map);
			}
			CheckNumber();
		}
	}
	else {
		solvable = true;
		count_solvable = count_solvable + 1;

		for(int i = 0; i < max; i++) {
			for(int j = 0; j < max; j++) {
				final[i][j] = map[i][j];
			}
		}
	}
}

void Sudoku::CheckNumber() {
	memset(number, 0, sizeof(number));
	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			if(map[i][j] != -1) {
				int temp = map[i][j];
				number[temp] = number[temp] + 1;
			}
		}
	}
}

int Sudoku::CheckZero(Data zero[], int amount) {
	for(int i = 0; i < amount; i++) {
		if(zero[i].GetCheckNumber(0) == 1) {
			return 1;
		}
	}

	return 0;
}

bool Sudoku::Check() {
	int temp = 0;

	for(int i = 0; i < max; i++) {
		for(int j = 0; j < max; j++) {
			if(map[i][j] == -1) {
				temp = temp + 1;
			}
		}
	}

	if(temp != 36) {
		return false;
	}

	for(int i = 0; i < max; i++) {
		int temp_number[10];
		memset(temp_number, 0, sizeof(temp_number));

		for(int j = 0; j < max; j++) {
			temp = map[i][j];
			if(temp != -1) {
				temp_number[temp] = temp_number[temp] + 1;
			}
		}

		for(int j = 1; j < 10; j++) {
			if(temp_number[j] > 1) {
				return false;
			}
		}

		memset(temp_number, 0, sizeof(temp_number));
		for(int j = 0; j < max; j++) {
			temp = map[j][i];
			if(temp != -1) {
				temp_number[temp] = temp_number[temp] + 1;
			}
		}

		for(int j = 1; j < 10; j++) {
			if(temp_number[j] > 1) {
				return false;
			}
		}
	}

	for(int i = 0; i < 3; i++) {
		for(int j = 0; j < 3; j++) {
			int temp_number[10];
			memset(temp_number, 0, sizeof(temp_number));

			for(int k = i * 3; k < i * 3 + 3; k++) {
				for(int l = j * 3; l < j * 3 + 3; l++) {
					temp = map[k][l];
					if(temp != -1) {
						temp_number[temp] = temp_number[temp] + 1;
					}
				}
			}

			for(int k = 1; k < 10; k++) {
				if(temp_number[k] > 1) {
					return false;
				}
			}
		}
	}

	return true;
}
