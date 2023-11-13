#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int f = n;
    int  mas [n][n];
        for (int y = 0; y < n; y++) {
            for (int x = 0; x < n; x++) {
                if (x > f) {
                    mas[y][x] = 2;
                    cout << mas[y][x] << " ";
                    // printf("%4d", mas[y][x]);
                } else {
                    if (x == f - 1) {
                        f--;
                        mas[y][x] = 1;
                        cout << mas[y][x] << " ";
                     //   printf("%4d", mas[y][x]);
                    } else {
                        mas[y][x] = 0;
                        cout << mas[y][x] << " ";
                       // printf("%4d", mas[y][x]);
                    }
                }
            }
            printf("\n");
    }


}
