#include <cstdlib>
#include <iostream>
#include <cstring>
#include <fstream>
#include <sstream>
#include <ctime>
#define max 12
using namespace std;

class Data {
	public:
		Data();
		void SetPosition(int i, int j);
		void SetCheckNumber(int temp_num[max][max]);
		int GetPositionI();
		int GetPositionJ();
		int GetCheckNumber(int num);
		void CheckRow(int temp_map[max][max]);
		void CheckCol(int temp_map[max][max]);
		void CheckBlock(int temp_map[max][max]);
	private:
		int position_i;
		int position_j;
		int check_number[10];
};

class Sudoku {
	public:
		Sudoku();
		void GenerateBlock();
		void GenerateNumber();
		int SearchI(int i, int j, int num);
		int SearchJ(int i, int j, int num);
		void PrintMap();
		void PrintNumber();
		void GiveQuestion();
		void ReadIn();
		void Solve();
		void SolveFunction();
		void CheckNumber();
		int CheckZero(Data zero[], int amount);
		bool Check();
	private:
		int map[max][max];
		int final[max][max];
		int number[10];
		bool solvable;
		int count_solvable;
};
