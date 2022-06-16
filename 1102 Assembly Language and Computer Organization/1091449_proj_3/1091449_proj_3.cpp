#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>

using namespace std;

typedef struct theRS {
	string name;
	char operation;
	string oper1;
	string oper2;
};

typedef struct theBUFFER {
	string where;
	char operation;
	int op1;
	int op2;
};

void RF(int F1_RF, int F2_RF, int F3_RF, int F4_RF, int F5_RF) {
	cout << "     _ RF __" << endl;
	cout << "  F1 |   " << F1_RF << " |" << endl;
	cout << "  F2 |   " << F2_RF << " |" << endl;
	cout << "  F3 |   " << F3_RF << " |" << endl;
	cout << "  F4 |   " << F4_RF << " |" << endl;
	cout << "  F5 |   " << F5_RF << " |" << endl;
	cout << "     -------" << endl;
}

void RAT(string F1_RAT, string F2_RAT, string F3_RAT, string F4_RAT, string F5_RAT) {
	cout << "     _ RAT __" << endl;
	cout << "  F1 |  " << F1_RAT << " |" << endl;
	cout << "  F2 |  " << F2_RAT << " |" << endl;
	cout << "  F3 |  " << F3_RAT << " |" << endl;
	cout << "  F4 |  " << F4_RAT << " |" << endl;
	cout << "  F5 |  " << F5_RAT << " |" << endl;
	cout << "     -------" << endl;
}

void RS(theRS RS1, theRS RS2, theRS RS3, theRS RS4, theRS RS5) {
	cout << "   _ RS _________________" << endl;
	if (RS1.oper1.size() == 0) cout << "RS1 |      |      |      |" << endl;
	else cout << "RS1 |   " << RS1.operation << "  |  ";
	if (RS1.oper1.size() == 1) cout << RS1.oper1 << "   |  ";
	else if (RS1.oper1.size() == 2) cout << RS1.oper1 << "  |  ";
	else if (RS1.oper1.size() == 3) cout << RS1.oper1 << " |  ";
	if (RS1.oper2.size() == 1) cout << RS1.oper2 << "   |" << endl;
	else if (RS1.oper2.size() == 2) cout << RS1.oper2 << "  |" << endl;
	else if (RS1.oper2.size() == 3) cout << RS1.oper2 << "|";
	if (RS2.oper1.size() == 0) cout << "RS2 |      |      |      |" << endl;
	else cout << "RS2 |   " << RS2.operation << "  |  ";
	if (RS2.oper1.size() == 1) cout << RS2.oper1 << "   |  ";
	else if (RS2.oper1.size() == 2) cout << RS2.oper1 << "  |  ";
	else if (RS2.oper1.size() == 3) cout << RS2.oper1 << " |  ";
	if (RS2.oper2.size() == 1) cout << RS2.oper2 << "   |" << endl;
	else if (RS2.oper2.size() == 2) cout << RS2.oper2 << "  |" << endl;
	else if (RS2.oper2.size() == 3) cout << RS2.oper2 << "|";
	if (RS3.oper1.size() == 0) cout << "RS3 |      |      |      |" << endl;
	else cout << "RS3 |   " << RS3.operation << "  |  ";
	if (RS3.oper1.size() == 1) cout << RS3.oper1 << "   |  ";
	else if (RS3.oper1.size() == 2) cout << RS3.oper1 << "  |  ";
	else if (RS3.oper1.size() == 3) cout << RS3.oper1 << " |  ";
	if (RS3.oper2.size() == 1) cout << RS3.oper2 << "   |" << endl;
	else if (RS3.oper2.size() == 2) cout << RS3.oper2 << "  |" << endl;
	else if (RS3.oper2.size() == 3) cout << RS3.oper2 << "|";
	cout << "    ----------------------" << endl;
	
	cout << endl;
	cout << "    ______________________" << endl;
	if (RS4.oper1.size() == 0) cout << "RS4 |      |      |      |" << endl;
	else cout << "RS4 |   " << RS4.operation << "  |  ";
	if (RS4.oper1.size() == 1) cout << RS4.oper1 << "   |  ";
	else if (RS4.oper1.size() == 2) cout << RS4.oper1 << "  |  ";
	else if (RS4.oper1.size() == 3) cout << RS4.oper1 << " |  ";
	if (RS4.oper2.size() == 1) cout << RS4.oper2 << "   |" << endl;
	else if (RS4.oper2.size() == 2) cout << RS4.oper2 << "  |" << endl;
	else if (RS4.oper2.size() == 3) cout << RS4.oper2 << "|";
	if (RS5.oper1.size() == 0) cout << "RS5 |      |      |      |" << endl;
	else cout << "RS5 |   " << RS5.operation << "  |  ";
	if (RS5.oper1.size() == 1) cout << RS5.oper1 << "   |  ";
	else if (RS5.oper1.size() == 2) cout << RS5.oper1 << "  |  ";
	else if (RS5.oper1.size() == 3) cout << RS5.oper1 << " |  ";
	if (RS5.oper2.size() == 1) cout << RS5.oper2 << "   |" << endl;
	else if (RS5.oper2.size() == 2) cout << RS5.oper2 << "  |" << endl;
	else if (RS5.oper2.size() == 3) cout << RS5.oper2 << "|";
	cout << "    ----------------------" << endl;
	
}


int main() {
	ifstream ifs;
	ifs.open("project_input.txt");
	if (!ifs.is_open()) cout << "Failed to open file." << endl;
	else {
		stringstream ss;
		ss.str("");
		ss.clear();
		string str_in;
		int F1_RF = 0, F2_RF = 2, F3_RF = 4, F4_RF = 6, F5_RF = 8;
		vector<string>F1_RAT;
		vector<string>F2_RAT;
		vector<string>F3_RAT;
		vector<string>F4_RAT;
		vector<string>F5_RAT;
		F1_RAT.push_back("   ");
		F2_RAT.push_back("   ");
		F3_RAT.push_back("   ");
		F4_RAT.push_back("   ");
		F5_RAT.push_back("   ");
		int cycle = 0;
		string op0, op1, op2, op3;
		theRS RS1;
		RS1.name = "RS1";
		theRS RS2;
		RS2.name = "RS2";
		theRS RS3;
		RS3.name = "RS3";
		theRS RS4;
		RS4.name = "RS4";
		theRS RS5;
		RS5.name = "RS5";
		theRS non;
		non.name = "empty";
		theBUFFER BUFFER1, BUFFER2;
		int in;
		while (cin >> in) {
			getline(cin, str_in);
			while (getline(ifs, str_in)) {
				cycle++;
				ss << str_in;
				ss >> op0;
				ss >> op1;
				ss >> op2;
				ss >> op3;
				ss.str("");
				ss.clear();
				if (op0== "ADDI" || op0 == "ADD" || op0 == "SUB") {
					if (RS1.oper1.size() == 0) { //當RS1為空時
						if (op1 == "F1,") F1_RAT.push_back("RS1");
						else if (op1 == "F2,") F2_RAT.push_back("RS1");
						else if (op1 == "F3,") F3_RAT.push_back("RS1");
						else if (op1 == "F4,") F4_RAT.push_back("RS1");
						else  F5_RAT.push_back("RS1");
						//在RAT紀錄RS1
						if (op0 == "SUB") RS1.operation = '-';
						else RS1.operation = '+';
					
						if (op2 == "F1,") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS1.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F2,") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS1.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F3,") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS1.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F4,") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS1.oper1;
							ss.str("");
							ss.clear();
						}
						else {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS1.oper1;
							ss.str("");
							ss.clear();
						}

						if (op3 == "F1") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS1.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F2") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS1.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F3") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS1.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F4") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS1.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F5") {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS1.oper2;
							ss.str("");
							ss.clear();
						}
						else RS1.oper2 = op3;
						//將值丟入RS1裡
					}
					else if (RS2.oper1.size() == 0) {//當RS2為空時
						if (op1 == "F1,") F1_RAT.push_back("RS2");
						else if (op1 == "F2,") F2_RAT.push_back("RS2");
						else if (op1 == "F3,") F3_RAT.push_back("RS2");
						else if (op1 == "F4,") F4_RAT.push_back("RS2");
						else  F5_RAT.push_back("RS2");
						//在RAT紀錄RS2
						if (op0 == "SUB") RS2.operation = '-';
						else RS2.operation = '+';
					
						if (op2 == "F1,") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS2.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F2,") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS2.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F3,") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS2.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F4,") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS2.oper1;
							ss.str("");
							ss.clear();
						}
						else {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS2.oper1;
							ss.str("");
							ss.clear();
						}

						if (op3 == "F1") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS2.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F2") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS2.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F3") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS2.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F4") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS2.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F5") {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS2.oper2;
							ss.str("");
							ss.clear();
						}
						else RS2.oper2 = op3;
						//將值丟入RS2裡
					}
					else {//當RS3為空時
						if (op1 == "F1,") F1_RAT.push_back("RS3");
						else if (op1 == "F2,") F2_RAT.push_back("RS3");
						else if (op1 == "F3,") F3_RAT.push_back("RS3");
						else if (op1 == "F4,") F4_RAT.push_back("RS3");
						else  F5_RAT.push_back("RS3");
						//在RAT紀錄RS3
						if (op0 == "SUB") RS3.operation = '-';
						else RS3.operation = '+';
					
						if (op2 == "F1,") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS3.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F2,") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS3.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F3,") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS3.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F4,") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS3.oper1;
							ss.str("");
							ss.clear();
						}
						else {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS3.oper1;
							ss.str("");
							ss.clear();
						}

						if (op3 == "F1") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS3.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F2") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS3.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F3") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS3.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F4") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS3.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F5") {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS3.oper2;
							ss.str("");
							ss.clear();
						}
						else RS3.oper2 = op3;
						//將值丟入RS3裡
					}
				}
				else {
					if (RS4.oper1.size() == 0) {//當RS4為空時
						if (op1 == "F1,") F1_RAT.push_back("RS4");
						else if (op1 == "F2,") F2_RAT.push_back("RS4");
						else if (op1 == "F3,") F3_RAT.push_back("RS4");
						else if (op1 == "F4,") F4_RAT.push_back("RS4");
						else  F5_RAT.push_back("RS4");
						//在RAT紀錄RS4
						if (op0 == "DIV") RS4.operation = '/';
						else RS4.operation = '*';
					
						if (op2 == "F1,") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS4.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F2,") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS4.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F3,") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS4.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F4,") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS4.oper1;
							ss.str("");
							ss.clear();
						}
						else {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS4.oper1;
							ss.str("");
							ss.clear();
						}

						if (op3 == "F1") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS4.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F2") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS4.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F3") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   " && F1_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS4.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F4") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS4.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F5") {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS4.oper2;
							ss.str("");
							ss.clear();
						}
						else RS4.oper2 = op3;
						//將值丟入RS4裡
					}
					else {//當RS5為空時
						if (op1 == "F1,") F1_RAT.push_back("RS5");
						else if (op1 == "F2,") F2_RAT.push_back("RS5");
						else if (op1 == "F3,") F3_RAT.push_back("RS5");
						else if (op1 == "F4,") F4_RAT.push_back("RS5");
						else  F5_RAT.push_back("RS5");
						//在RAT紀錄RS5
						if (op0 == "DIV") RS5.operation = '/';
						else RS5.operation = '*';
					
						if (op2 == "F1,") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS5.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F2,") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS5.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F3,") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS5.oper1;
							ss.str("");
							ss.clear();
						}
						else if (op2 == "F4,") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS5.oper1;
							ss.str("");
							ss.clear();
						}
						else {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS5.oper1;
							ss.str("");
							ss.clear();
						}

						if (op3 == "F1") {
							if (F1_RAT.size() != 0 && F1_RAT[0] != "   ") ss << F1_RAT[0];
							else ss << F1_RF;
							ss >> RS5.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F2") {
							if (F2_RAT.size() != 0 && F2_RAT[0] != "   ") ss << F2_RAT[0];
							else ss << F2_RF;
							ss >> RS5.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F3") {
							if (F3_RAT.size() != 0 && F3_RAT[0] != "   ") ss << F3_RAT[0];
							else ss << F3_RF;
							ss >> RS5.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F4") {
							if (F4_RAT.size() != 0 && F4_RAT[0] != "   ") ss << F4_RAT[0];
							else ss << F4_RF;
							ss >> RS5.oper2;
							ss.str("");
							ss.clear();
						}
						else if (op3 == "F5") {
							if (F5_RAT.size() != 0 && F5_RAT[0] != "   ") ss << F5_RAT[0];
							else ss << F5_RF;
							ss >> RS5.oper2;
							ss.str("");
							ss.clear();
						}
						else RS5.oper2 = op3;
						//將值丟入RS5裡
					}
				}

				//BUFFER
				int t = 0;
				string T;
				if (op0 == "ADDI" || op0 == "ADD" || op0 == "SUB") {
					if (BUFFER1.where.size() != 0) {//BUFFER1不是空的
						if (BUFFER1.operation == '+') t = BUFFER1.op1 + BUFFER1.op2;
						else t = BUFFER1.op1 - BUFFER1.op2;
						//將RF值改掉，並且將RAT裡的空間縮減
						if (BUFFER1.where == F1_RAT[0]) {
							F1_RF = t;
							if (F1_RAT.size() > 1) {
								for (int i = 0; i < F1_RAT.size() - 1; i++) F1_RAT[i] = F1_RAT[i + 1];
							}
							F1_RAT.pop_back();
						}
						else if (BUFFER1.where == F2_RAT[0]) {
							F2_RF = t;
							if (F2_RAT.size() > 1) {
								for (int i = 0; i < F2_RAT.size() - 1; i++) F2_RAT[i] = F2_RAT[i + 1];
							}
							F2_RAT.pop_back();
						}
						else if (BUFFER1.where == F3_RAT[0]) {
							F3_RF = t;
							if (F3_RAT.size() > 1) {
								for (int i = 0; i < F3_RAT.size() - 1; i++) F3_RAT[i] = F3_RAT[i + 1];
							}
							F3_RAT.pop_back();
						}
						else if (BUFFER1.where == F4_RAT[0]) {
							F4_RF = t;
							if (F4_RAT.size() > 1) {
								for (int i = 0; i < F4_RAT.size() - 1; i++) F4_RAT[i] = F4_RAT[i + 1];
							}
							F4_RAT.pop_back();
						}
						else {
							F5_RF = t;
							if (F5_RAT.size() > 1) {
								for (int i = 0; i < F5_RAT.size() - 1; i++) F5_RAT[i] = F5_RAT[i + 1];
							}
							F5_RAT.pop_back();
						}
						//write back到RS裡
						//判斷RS的oper是否等於BUFFER1要write back的地方
						ss << to_string(t);
						T =	ss.str();
						ss.str("");
						ss.clear();
						if (BUFFER1.where == RS1.oper1) RS1.oper1 = T;
						if (BUFFER1.where == RS1.oper2) RS1.oper2 = T;
						if (BUFFER1.where == RS2.oper1) RS2.oper1 = T;
						if (BUFFER1.where == RS2.oper2) RS2.oper2 = T;
						if (BUFFER1.where == RS3.oper1) RS3.oper1 = T;
						if (BUFFER1.where == RS3.oper2) RS3.oper2 = T;
						if (BUFFER1.where == RS4.oper1) RS4.oper1 = T;
						if (BUFFER1.where == RS4.oper2) RS4.oper2 = T;
						if (BUFFER1.where == RS5.oper1) RS5.oper1 = T;
						if (BUFFER1.where == RS5.oper2) RS5.oper2 = T;

						//將BUFFER1跟RS清空
						if (BUFFER1.where == "RS1") RS1.operation = '\0';
						if (BUFFER1.where == "RS2") RS2.operation = '\0';
						if (BUFFER1.where == "RS3") RS3.operation = '\0';
						if (BUFFER1.where == "RS4") RS4.operation = '\0';
						if (BUFFER1.where == "RS5") RS5.operation = '\0';
						BUFFER1.where.clear();
					}
					else if(cycle != 1){//BUFFER1空的
						if (RS1.oper1.size() != 0) {//RS1有值
							BUFFER1.where = "RS1";
							ss << RS1.oper1;
							ss >> t;
							ss.str("");
							ss.clear();
							BUFFER1.op1 = t;
							BUFFER1.operation = RS1.operation;
							ss << RS1.oper2;
							ss >> t;
							ss.str("");
							ss.clear();
							BUFFER1.op2 = t;
						}
						else if (RS2.oper1.size() != 0) {//R2有值
							BUFFER1.where = "RS2";
							ss << RS2.oper1;
							ss >> t;
							ss.str("");
							ss.clear();
							BUFFER1.op1 = t;
							BUFFER1.operation = RS2.operation;
							ss << RS2.oper2;
							ss >> t;
							ss.str("");
							ss.clear();
							BUFFER1.op2 = t;
						}
						else if (RS3.oper1.size() != 0) {//R3有值
							BUFFER1.where = "RS3";
							ss << RS3.oper1;
							ss >> t;
							ss.str("");
							ss.clear();
							BUFFER1.op1 = t;
							BUFFER1.operation = RS3.operation;
							ss << RS3.oper2;
							ss >> t;
							ss.str("");
							ss.clear();
							BUFFER1.op2 = t;
						}
					}
				}
				else {
					//BUFFER2
					int x = 0;
					string X;
					if (BUFFER2.where.size() != 0) {//BUFFER2不是空的
						if (BUFFER2.operation == '*') x = BUFFER2.op1 * BUFFER2.op2;
						else if (BUFFER2.operation == '/' && BUFFER2.op2 != 0) x = BUFFER2.op1 / BUFFER2.op2;
						else {
							cout << "can't div 0" << endl;
							break;
						};
						//將RF值改掉，並且將RAT裡的空間縮減
						if (BUFFER2.where == F1_RAT[0]) {
							F1_RF = x;
							if (F1_RAT.size() > 1) {
								for (int i = 0; i < F1_RAT.size() - 1; i++) F1_RAT[i] = F1_RAT[i + 1];
							}
							F1_RAT.pop_back();
						}
						else if (BUFFER2.where == F2_RAT[0]) {
							F2_RF = x;
							if (F2_RAT.size() > 1) {
								for (int i = 0; i < F2_RAT.size() - 1; i++) F2_RAT[i] = F2_RAT[i + 1];
							}
							F2_RAT.pop_back();
						}
						else if (BUFFER2.where == F3_RAT[0]) {
							F3_RF = x;
							if (F3_RAT.size() > 1) {
								for (int i = 0; i < F3_RAT.size() - 1; i++) F3_RAT[i] = F3_RAT[i + 1];
							}
							F3_RAT.pop_back();
						}
						else if (BUFFER2.where == F4_RAT[0]) {
							F4_RF = x;
							if (F4_RAT.size() > 1) {
								for (int i = 0; i < F4_RAT.size() - 1; i++) F4_RAT[i] = F4_RAT[i + 1];
							}
							F4_RAT.pop_back();
						}
						else {
							F5_RF = x;
							if (F5_RAT.size() > 1) {
								for (int i = 0; i < F5_RAT.size() - 1; i++) F5_RAT[i] = F5_RAT[i + 1];
							}
							F5_RAT.pop_back();
						}
						//write back到RS裡
						//判斷RS的oper是否等於BUFFER22要write back的地方
						ss << to_string(x);
						X = ss.str();
						ss.str("");
						ss.clear();
						if (BUFFER2.where == RS1.oper1) RS1.oper1 = X;
						if (BUFFER2.where == RS1.oper2) RS1.oper2 = X;
						if (BUFFER2.where == RS2.oper1) RS2.oper1 = X;
						if (BUFFER2.where == RS2.oper2) RS2.oper2 = X;
						if (BUFFER2.where == RS3.oper1) RS3.oper1 = X;
						if (BUFFER2.where == RS3.oper2) RS3.oper2 = X;
						if (BUFFER2.where == RS4.oper1) RS4.oper1 = X;
						if (BUFFER2.where == RS4.oper2) RS4.oper2 = X;
						if (BUFFER2.where == RS5.oper1) RS5.oper1 = X;
						if (BUFFER2.where == RS5.oper2) RS5.oper2 = X;
						//將BUFFER2跟RS清空
						if (BUFFER2.where == "RS1") RS1.operation = '\0';
						if (BUFFER2.where == "RS2") RS2.operation = '\0';
						if (BUFFER2.where == "RS3") RS3.operation = '\0';
						if (BUFFER2.where == "RS4") RS4.operation = '\0';
						if (BUFFER2.where == "RS5") RS5.operation = '\0';
						BUFFER2.where.clear();
					}
					else if (cycle != 1) {//BUFFER2空的
						if (RS4.oper1.size() != 0) {//RS4有值
							BUFFER2.where = "RS4";
							ss << RS4.oper1;
							ss >> x;
							ss.str("");
							ss.clear();
							BUFFER2.op1 = x;
							BUFFER2.operation = RS4.operation;
							ss << RS4.oper2;
							ss >> x;
							ss.str("");
							ss.clear();
							BUFFER2.op2 = x;
						}
						else if (RS5.oper1.size() != 0) {//R5有值
							BUFFER2.where = "RS5";
							ss << RS5.oper1;
							ss >> x;
							ss.str("");
							ss.clear();
							BUFFER2.op1 = x;
							BUFFER2.operation = RS5.operation;
							ss << RS5.oper2;
							ss >> x;
							ss.str("");
							ss.clear();
							BUFFER2.op2 = x;
						}
					}
				}

				if (in == cycle) {
					RF(F1_RF, F2_RF, F3_RF, F4_RF, F5_RF);
					int a, b, c, d, e;
					if (F1_RAT.size() > 1) a = 1;
					else a = 0;
					if (F2_RAT.size() > 1) b = 1;
					else b = 0;
					if (F3_RAT.size() > 1) c = 1;
					else c = 0;
					if (F4_RAT.size() > 1) d = 1;
					else d = 0;
					if (F5_RAT.size() > 1) e = 1;
					else e = 0;
					RAT(F1_RAT[a], F2_RAT[b], F3_RAT[c], F4_RAT[d], F5_RAT[e]);
					RS(RS1, RS2, RS3, RS4, RS5);
					break;
				}
			}
		}
		
	}
}