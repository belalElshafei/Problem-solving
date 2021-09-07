//Problem link:=> https://codeforces.com/problemset/problem/1133/C

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

    vector<ll> v(n);
    for (int i = 0; i < n; ++i) {
        cin>>v[i];
    }

    sort(v.begin(),v.end());
    int mx = 1;
    for (int i = 0; i < n; ++i) {
        int ind = upper_bound(v.begin(),v.end(),v[i] + 5) - v.begin();
        mx = max(mx,ind - i);
    }

    cout<<mx<<"\n";
}


