#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void prog1() {
	int user_age;
	int need_age;
	cin >> user_age >> need_age;
	
	if (user_age < need_age) {
		cout << need_age - user_age;
	} else {
		cout << "��� �������! ������!";
	};
}

void prog2() {
	float x;
	float t;
	float b;
	float remain;
	int friends;
	cin >> x >> t >> b;
	remain = x - t;
	if (remain < 0) {
		friends = x / b;
		cout << friends << endl;
		cout << x - friends * b;
	} else {
		friends = remain / b;
		cout << friends << endl;
		cout << remain - friends * b;
	};
}
void prog3() {
	unsigned short num;
	int tho;
	int hun;
	int ten;
	int one;
	cin >> num;
	one = num % 10;
	ten = num % 100 / 10;
	hun = num % 1000 / 100;
	tho = num / 1000;
	if (tho == 1) {
		cout << "������ ";
	} else if (tho == 2) {
		cout << "��� ������ ";
	} else if (tho == 3) {
		cout << "��� ������ ";
	} else if (tho == 4) {
		cout << "������ ������ ";
	} else if (tho == 5) {
		cout << "���� ����� ";
	} else if (tho == 6) {
		cout << "����� ����� ";
	} else if (tho == 7) {
		cout << "���� ����� ";
	} else if (tho == 8) {
		cout << "������ ����� ";
	} else if (tho == 9) {
		cout << "������ ����� ";
	};
	
	if (hun == 1) {
		cout << "��� ";
	} else if (hun == 2) {
		cout << "������ ";
	} else if (hun == 3) {
		cout << "������ ";
	} else if (hun == 4) {
		cout << "��������� ";
	} else if (hun == 5) {
		cout << "������� ";
	} else if (hun == 6) {
		cout << "�������� ";
	} else if (hun == 7) {
		cout << "������� ";
	} else if (hun == 8) {
		cout << "��������� ";
	} else if (hun == 9) {
		cout << "��������� ";
	};
	
	if (ten == 1) {
		if (one == 0) {
			cout << "������ ";
		} else if (one == 1) {
			cout << "����������� ";
		} else if (one == 2) {
			cout << "���������� ";
		} else if (one == 3) {
			cout << "���������� ";
		} else if (one == 4) {
			cout << "������������ ";
		} else if (one == 5) {
			cout << "���������� ";
		} else if (one == 6) {
			cout << "����������� ";
		} else if (one == 7) {
			cout << "���������� ";
		} else if (one == 8) {
			cout << "������������ ";
		} else if (one == 0) {
			cout << "������������ ";
		};
	} else if (ten == 2) {
		cout << "�������� ";
	} else if (ten == 3) {
		cout << "�������� ";
	} else if (ten == 4) {
		cout << "����� ";
	} else if (ten == 5) {
		cout << "��������� ";
	} else if (ten == 6) {
		cout << "���������� ";
	} else if (ten == 7) {
		cout << "��������� ";
	} else if (ten == 8) {
		cout << "���������� ";
	} else if (ten == 9) {
		cout << "��������� ";
	};
	
	if (ten != 1) {
		if (one == 1) {
			cout << "���� ";
		} else if (one == 2) {
			cout << "��� ";
		} else if (one == 3) {
			cout << "��� ";
		} else if (one == 4) {
			cout << "������ ";
		} else if (one == 5) {
			cout << "���� ";
		} else if (one == 6) {
			cout << "����� ";
		} else if (one == 7) {
			cout << "���� ";
		} else if (one == 8) {
			cout << "������ ";
		} else if (one == 9) {
			cout << "������ ";
		};
	}
}	
int main(int argc, char** argv) {
	setlocale(LC_ALL, "rus");
	
	prog3();

	return 0;
}


