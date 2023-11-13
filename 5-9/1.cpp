#include <iostream>
#include <iomanip>
using namespace std;

struct Person{
    string n,surn;
    int a,b,c;
};

int main(){
    int n;
    cin >>n;
    Person *p = new Person[n];
    for (int i = 0; i < n; i++){
        cin >> p[i].surn >> p[i].n >> p[i].a >> p[i].b >> p[i].c;
    }
    double one = 0,two = 0,three = 0;
    for (int i = 0; i < n; i++){
        one += p[i].a;
        two += p[i].b;
        three += p[i].c;
    }
    cout << fixed << setprecision(1) << one / n << ' ' << two / n << ' ' << three / n;
}
