#include <iostream>
using namespace std;

int main21() {
	int ar[3][3];
	//�������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cin>>ar[i][j];
		}
	}
	//ת��
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 3; j++) {
			int t = ar[i][j];
			ar[i][j] = ar[j][i];
			ar[j][i] = t;
		}
	}
	//�������
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << ar[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}