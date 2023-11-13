#include <bits/stdc++.h>

using namespace std;
struct Person{
    string n,surn,classr,birth;
    void output(string n, string surn, string classr, string birth){
        printf("%s %s %s %s", classr.c_str(), surn.c_str(), n.c_str(), birth.c_str());
    }

};

int main(){
    int n;
    cin >> n;
    Person *p = new Person[n];
    for (int i = 0; i < n; i++){
        cin >> p[i].surn >> p[i].n >> p[i].classr >> p[i].birth;
    }
    auto Sorting = [](const Person& a, const Person& b){
        return a.classr < b.classr || (a.classr == b.classr && a.surn < b.surn);
    };
    sort(p, p + n, Sorting);
    for (int i = 0; i < n; i++){
        cout << p[i].classr << " " << p[i].surn << " " << p[i].n << " " << p[i].birth << endl;

    }
    return 0;
}
