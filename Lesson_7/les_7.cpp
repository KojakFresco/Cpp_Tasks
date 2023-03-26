#include <iostream>
#include <math.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void prog1() {
	int m, year;
	
	cin >> m >> year;
	
	if ((m % 2 == 1 && m <= 7) or (m % 2 == 0 && m > 7)) {
		cout << 31;
	} else if (m == 2) {
		if (year % 400 == 0) {
			cout << 29;
		} else if (year % 100 == 0) {
			cout << 28;
		} else if (year % 4 == 0) {
			cout << 29;
		} else {
			cout << 28;
		}
	} else {
		cout << 30;
	}
}

void prog2() {
	int n, k;
	
	cin >> n >> k;
	n = n - 1;
	
	for (int i = 1 - n; i <= k; i++) {
		if (i <= 0) {
			cout << "   ";
		} else {
			if (i < 10) {
				cout << " ";
			}
			cout << i << " ";
			
			if ((i + n) % 7 == 0) {
			cout << "\n";
			}
		}
	}
}
void prog3() {
	int i;
	float sum = 0;
	
	cin >> i;
	
	for (int n = 1; n <= i; n++) {
		sum += pow(-1, n + 1) / n;
	}
	cout << sum;
}
int main(int argc, char** argv) {
	
	prog3();
	
	return 0;
}
