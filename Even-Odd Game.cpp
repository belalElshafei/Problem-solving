//Problem link:=> https://codeforces.com/problemset/problem/1472/D

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

    int t;cin>>t;

    while(t--){
        int n;cin>>n;

        int arr[n + 1];

        for(int i = 1; i <= n; i++){
            cin>>arr[i];
        }

        sort(arr + 1,arr+n+1);
        reverse(arr+1,arr+n+1);

        ll alice = 0, bob = 0;

        for(int i = 1; i <= n; i++){
            if(i%2 == 1){
                if(arr[i]%2 == 0){
                    alice+=arr[i];
                }
            }else{
                if(arr[i]%2 == 1){
                    bob+=arr[i];
                }
            }
        }

        if(alice > bob){
            cout<<"Alice\n";
        }else if(bob > alice){
            cout<<"Bob\n";
        }else{
            cout<<"Tie\n";
        }
    }
}


