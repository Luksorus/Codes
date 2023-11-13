#include <iostream>
using namespace std;
int main() {
    double x;
    double y;
    int c = 1;
    cin >> x >> y;
    while(x<y){
        x=x*1.1;

        ++c;
        }


    cout << c;

    return 0;
}


