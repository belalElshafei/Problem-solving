//Problem link:=> https://codeforces.com/problemset/problem/1174/B

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
    vector<int> v(n);
    int even = 0,odd = 0;

    for(int i = 0; i <n; i++){
        cin>>v[i];
        even|=(v[i]%2 == 0);
        odd|=(v[i]%2 == 1);

    }

    if(even & odd)
        sort(v.begin(),v.end());

    for (int i = 0; i < n ; ++i) cout<<v[i]<<" ";

    cout<<"\n";

}


