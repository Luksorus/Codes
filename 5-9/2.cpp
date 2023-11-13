#include <bits/stdc++.h>

using namespace std;

struct Person{
    string n,surn;
    int a,b,c;
    double d;
};

int main(){
    int n;
    cin >>n;
    Person *p = new Person[n];
    for (int i = 0; i < n; i++){
        cin >> p[i].surn >> p[i].n >> p[i].a >> p[i].b >> p[i].c;
        p[i].d = (p[i].a + p[i].b + p[i].c)/3.0;
    }
    auto Sorting = [](const Person a, const Person b){
        return  a.d<=b.d;
    };
    sort(p,p+n,Sorting);
    for (int left = 0, right = n - 1; left < right; left++, right--) {
        swap(p[left], p[right]);
    }

    for (int i = 0; i < n; i++) {
        cout << p[i].surn << " " << p[i].n << endl;
    }

    delete[] p;
}
