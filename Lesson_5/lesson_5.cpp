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
		cout << "»ди покупай! Ѕыстро!";
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
		cout << "“ыс€ча ";
	} else if (tho == 2) {
		cout << "ƒве тыс€чи ";
	} else if (tho == 3) {
		cout << "“ри тыс€чи ";
	} else if (tho == 4) {
		cout << "„етыре тыс€чи ";
	} else if (tho == 5) {
		cout << "ѕ€ть тыс€ч ";
	} else if (tho == 6) {
		cout << "Ўесть тыс€ч ";
	} else if (tho == 7) {
		cout << "—емь тыс€ч ";
	} else if (tho == 8) {
		cout << "¬осемь тыс€ч ";
	} else if (tho == 9) {
		cout << "ƒев€ть тыс€ч ";
	};
	
	if (hun == 1) {
		cout << "сто ";
	} else if (hun == 2) {
		cout << "двести ";
	} else if (hun == 3) {
		cout << "триста ";
	} else if (hun == 4) {
		cout << "четыреста ";
	} else if (hun == 5) {
		cout << "п€тьсот ";
	} else if (hun == 6) {
		cout << "шестьсот ";
	} else if (hun == 7) {
		cout << "семьсот ";
	} else if (hun == 8) {
		cout << "восемьсот ";
	} else if (hun == 9) {
		cout << "дев€тьсот ";
	};
	
	if (ten == 1) {
		if (one == 0) {
			cout << "дес€ть ";
		} else if (one == 1) {
			cout << "одиннадцать ";
		} else if (one == 2) {
			cout << "двенадцать ";
		} else if (one == 3) {
			cout << "тринадцать ";
		} else if (one == 4) {
			cout << "четырнадцать ";
		} else if (one == 5) {
			cout << "п€тнадцать ";
		} else if (one == 6) {
			cout << "шестнадцать ";
		} else if (one == 7) {
			cout << "семнадцать ";
		} else if (one == 8) {
			cout << "восемнадцать ";
		} else if (one == 0) {
			cout << "дев€тнадцать ";
		};
	} else if (ten == 2) {
		cout << "двадцать ";
	} else if (ten == 3) {
		cout << "тридцать ";
	} else if (ten == 4) {
		cout << "сорок ";
	} else if (ten == 5) {
		cout << "п€тьдес€т ";
	} else if (ten == 6) {
		cout << "шестьдес€т ";
	} else if (ten == 7) {
		cout << "семьдес€т ";
	} else if (ten == 8) {
		cout << "восемдес€т ";
	} else if (ten == 9) {
		cout << "дев€носто ";
	};
	
	if (ten != 1) {
		if (one == 1) {
			cout << "один ";
		} else if (one == 2) {
			cout << "два ";
		} else if (one == 3) {
			cout << "три ";
		} else if (one == 4) {
			cout << "четыре ";
		} else if (one == 5) {
			cout << "п€ть ";
		} else if (one == 6) {
			cout << "шесть ";
		} else if (one == 7) {
			cout << "семь ";
		} else if (one == 8) {
			cout << "восемь ";
		} else if (one == 9) {
			cout << "дев€ть ";
		};
	}
}	
int main(int argc, char** argv) {
	setlocale(LC_ALL, "rus");
	
	prog3();

	return 0;
}


