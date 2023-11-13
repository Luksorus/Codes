#include <iostream>
using namespace std;
int main() {
    long double a;
    long double b;
    string  d;
    cin >> a >> d >> b;
    if(d == "+"){
        cout<< a+b;
    }
    if(d == "-"){
        cout<< a-b;
    }
    if(d == "*"){
        cout<< a*b;
    }
    if(d == "/"){
        cout<< a/b;
    }
    return 0;
}

