#include <iostream>
#include <string>
#include <map>

using namespace std;

map<string, int> histroyMap = {
	{"000", 0},{"001",1},{"010",2},{"011",3},{"100",4},{"101",5},{"110",6},{"111",7}
};

map<string, char> predictMap = {
	{"SN",'N'},{"WN",'N'},{"WT",'T'},{"ST",'T'}
};

int main() {
	string histroy;
	string predictor[8] = { "SN","SN","SN","SN","SN","SN","SN","SN" };
	string str_in;
	int misprediction = 0;
	getline(cin, str_in);
	for (int i = 0; i < str_in.size(); i++) {
		histroy = { "" };
		if (i == 0) histroy = { "000" };
		else if (i == 1) histroy = { "001" };
		else if (i == 2) histroy = { "011" };
		else {
			if (str_in[i - 3] == 'T') histroy.push_back('1');
			else histroy.push_back('0');
			if (str_in[i - 2] == 'T') histroy.push_back('1');
			else histroy.push_back('0');
			if (str_in[i - 1] == 'T') histroy.push_back('1');
			else histroy.push_back('0');
		}
		int pos = histroyMap[histroy];
		cout << "(" << histroy;
		for (int i = 0; i < 8; i++) cout << ", " << predictor[i];
		if (predictMap[predictor[pos]] != str_in[i]) misprediction++;
		if (str_in[i] == 'T') {
			if (predictor[pos] == "SN") predictor[pos] = "WN";
			if (predictor[pos] == "WN") predictor[pos] = "WT";
			if (predictor[pos] == "WT") predictor[pos] = "ST";
		}
		else {
			if (predictor[pos] == "WN") predictor[pos] = "SN";
			if (predictor[pos] == "WT") predictor[pos] = "WN";
			if (predictor[pos] == "ST") predictor[pos] = "WT";
		}
		cout << ") " << predictMap[predictor[pos]] << " " << str_in[i] << "    misprediction: " << misprediction << endl;
	}
}