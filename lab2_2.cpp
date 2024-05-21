#include <iostream>
using namespace std;

int main22() {
	int row = 3;
	int col = 3;
	int** ar = new int* [row];
	for (int i = 0; i < row; i++)
	{
		ar[i] = new int[col];
	}
	//ÊäÈë¾ØÕó
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin >> ar[i][j];
		}
	}
	//×ªÖÃ
	for (int i = 0; i < 3; i++) {
		for (int j = i + 1; j < 3; j++) {
			int t = ar[i][j];
			ar[i][j] = ar[j][i];
			ar[j][i] = t;
		}
	}
	//Êä³ö¾ØÕó
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < 3; i++)
	{
		delete[] ar[i];
	}
	delete[] ar;
	return 0;
}