#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a, b, c;
	cin >> a >> b >> c;
	m = max(max(a, b), c);
	if (a >= b + c || b >= a + c || c >= a + b) {
		cout << "UNDEFINED";
	} else if (a*a == b*b + c*c || b*b == a*a + c*c || c*c == a*a + b*b) {
		cout << "YES";
	} else {
		cout << "NO";
	}; 
	
	return 0;
}
