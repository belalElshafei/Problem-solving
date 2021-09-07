//Problem link:=> https://codeforces.com/problemset/problem/456/A

//By Belal Elshafei

#include <bits/stdc++.h>
using namespace  std;
typedef  long  long ll;

void f() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main() {
    f();

    int n;cin>>n;
    vector<pair<int,int>> v(n);

    for (int i = 0; i < n; ++i) {
        cin>>v[i].first>>v[i].second;
    }

    sort(v.begin(),v.end());
    int fl = 0;

    for (int i = 0; i < n - 1; ++i) {
        if(v[i].second > v[i + 1].second){
            fl = 1;
            break;
        }
    }

    if(fl)
        cout<<"Happy Alex\n";
    else
        cout<<"Poor Alex\n";
}


