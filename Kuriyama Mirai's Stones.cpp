//Problem link :=> https://codeforces.com/problemset/problem/433/B

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
    ll ordPre[n+1] = {0};
    ll unordPre[n+1] = {0};
    ll arr[n+1] = {0};

    for(int i = 1; i <= n; i++){
        cin>>arr[i];
    }

    for(int i = 1; i <= n; i++){
        unordPre[i]+=unordPre[i - 1] + arr[i];
    }

    sort(arr+1,arr+n+1);

    for(int i = 1; i <= n; i++){
        ordPre[i]+=ordPre[i - 1] + arr[i];
    }

    int m;cin>>m;

    while(m--){
        int type,l,r;cin>>type>>l>>r;

        if(type == 1){
            ll res = unordPre[r] - unordPre[l - 1];

            cout<<res<<"\n";
        }else{
            ll res = ordPre[r] - ordPre[l - 1];

            cout<<res<<"\n";
        }
    }
}

