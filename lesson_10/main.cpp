#include <iostream>
#include <ctime>
#include <map>
#include <math.h>

using namespace std;

void task1() {
    string str;
    int count, tmp;
    string symbol;
    
    cin >> str;
    for (size_t i = 0; i != str.size(); ++i) {
        tmp = 0;
        for (size_t j = 0; j != str.size(); ++j) {
            if (str[i] == str[j]) {
                tmp++;
            }
        }
        if (tmp > count) {
            count = tmp;
            symbol = str[i];
        }
    }
    cout << "Самый частый символ: \"" << symbol << "\""; 
}

void quadraticEquation() {
    double a, b, c, D;
    
    cin >> a >> b >> c;
    
    D = b*b - (4 * a * c);
    
    if (D > 0) {
        cout << "x1 = " << (-b + sqrt(D)) / (2 * a) << endl;
        cout << "x2 = " << (-b - sqrt(D)) / (2 * a) << endl;
    } else if (D == 0) {
        cout << "x = " << -b / (2 * a);
    } else {
        cout << "Решения нет";
    }
}

int main() {
    
    quadraticEquation();

    return 0;
}