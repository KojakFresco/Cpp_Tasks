#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void prog1() {
	int uNum;
	int tries = 0;
	int num = rand() % 10 + 1;
	num = 1;
	do {
		cout << "������� ���� �����: ";
		cin >> uNum;
		if (num < uNum) {
			cout << "��� ����� ������" << endl;
		} else if (num > uNum){
			cout << "��� ����� ������" << endl;
		}
		tries++;
	} while (uNum != num);
	cout << "�� ������� �� " << tries << " ������������!";
}

void prog2() {
	int i = 0;
	do {
		i++;
		cout << i*i << endl;
	} while (i != 40);
}

void prog3() {
	int n = 12;
	int ints[n] = {1, 2, 4, 4, 5, 6, 7, 2, 1, 1, 1, 2};
	if (n % 2 == 0) {
		cout << ints[n / 2 - 1] << ints[n / 2];
	} else {
		cout << ints[n / 2];
	}
}
int main(int argc, char** argv) {
	srand(time(0));
	setlocale(LC_ALL, "rus");
	
	prog3();
	return 0;
}
