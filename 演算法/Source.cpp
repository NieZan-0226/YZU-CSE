#include <iostream>
#include <string>

using namespace std;

int main() {
	string str1, str2;
	while (1) {
		int array[100][100]{0};
		getline(cin, str1);
		getline(cin, str2);
		int a = str1.size();
		int b = str2.size();
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				if (str1[i - 1] == str2[j - 1]) array[i][j] = array[i-1][j-1] + 1;
				else {
					if (array[i][j - 1] >= array[i - 1][j]) array[i][j] = array[i][j - 1];
					else array[i][j] = array[i - 1][j];
				}
			}
		}
		cout << array[a][b] << endl;
	}
}