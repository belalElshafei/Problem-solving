//Problem link:=> https://codeforces.com/group/uIwyWI1OoG/contest/323496/problem/T

//By Belal Elshafei

#include <bits/stdc++.h>
using namespace  std;
typedef  long  long ll;

const int N = 1e5 + 5;

int arr[N];

void f() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int bs(int k,int n){
    int l = 1,r = n,mid = 1;
    int flag = 0;
    while(l<=r){
        mid = (l+r)/2;

        if(arr[mid] > k){

            r = mid - 1;
            flag = 1;
        }else{
            l = mid + 1;
        }
    }

    if(flag){
        return arr[l];
    }else{
        return -1;

    }
}

int main() {
    f();

    int n,q;cin>>n>>q;
    for(int i = 1; i<= n; i++){
        cin>>arr[i];
    }

    while(q--){
        int k;cin>>k;

        int res = bs(k,n);

        if(res == -1){
            cout<<-1<<"\n";
        }else{
            cout<<res<<"\n";
        }
    }
}


