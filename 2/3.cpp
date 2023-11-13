#include <iostream>

using namespace std;

int a[101];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
        {
            if (a[i] > a[i + 1])
            {
                cnt++;
            }
        }
        else if (i == n - 1)
        {
            if (a[i] > a[i - 1])
            {
                cnt++;
            }
        }
        else 
        {
            if (a[i] > a[i - 1] and a[i] > a[i + 1])
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
