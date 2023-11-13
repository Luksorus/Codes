#include <bits/stdc++.h>
using namespace std;

int main() {
    string result;
    cin >> result;

    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        string n_el;
        int count = 1;

        for (int j = 1; j < result.length(); j++) {
            if (result[j] == result[j - 1]) {
                count++;
            }
            else {
                n_el += to_string(count) + result[j - 1];
                count = 1;
            }
        }
        n_el += to_string(count) + result[result.length() - 1];

        result = n_el;
    }
    cout << result;

}
