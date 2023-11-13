#include <iostream>
using namespace std;
int main() {
    int x;
    int y;
    cin >> x >> y;
    while(x!=y) {
        if (x % 2 == 0 and x/2 >= y)  {
            x= x/2;
            cout << ":2" << '\n';
        }
        else{
            x--;
            cout <<"-1" << '\n';
        }
    }

    return 0;
}

