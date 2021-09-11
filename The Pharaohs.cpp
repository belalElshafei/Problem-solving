//Problem link:=> https://codeforces.com/group/uIwyWI1OoG/contest/323496/problem/Q

//By Belal Elshafei

#include <bits/stdc++.h>
using namespace  std;
typedef  long  long ll;

void f() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

ll bs(ll n){
    ll l = 1,r = INT_MAX ,mid = 0,res = 0;
    while(l<=r){
        mid = (l+r) / 2;
        ll end = (mid * (mid + 1)) / 2;
        ll start = ((mid - 1)* (mid)) / 2;
        start++;

        if(n >= start && n <= end){
            res = mid;
            break;
        }else if( n < start){
            r = mid - 1;
        }else if(n > end){
            l = mid + 1;
        }
    }

    return res;
}

int main() {
    f();

    int t;cin>>t;

    while(t--){
        ll n;cin>>n;
        ll res = bs(n);

        cout<<res<<"\n";
    }

}


