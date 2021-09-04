//Problem link:=> https://codeforces.com/problemset/problem/363/B

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

    int n,k;cin>>n>>k;
    ll arr[n+1] = {0};
    ll preSum[n+1] = {0};

    for(int i = 1; i <= n; i++){
        cin>>arr[i];
        preSum[i] = preSum[i - 1] + arr[i];
    }

    int mn = 1e9,l = 1, r = k,ind = -1;

    while(r <= n){

        int res = preSum[r] - preSum[l - 1];

        if(res < mn){
            mn = res;
            ind = l;
        }

        l++;r++;
    }

    cout<<ind<<"\n";
}

