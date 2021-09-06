//Problem link:=> https://codeforces.com/problemset/problem/451/B

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

    vector<int> v1(n);
    vector<int> v2(n);

    for(int i = 0; i < n; i++){
        cin>>v1[i];
    }

    v2 = v1;

    sort(v2.begin(),v2.end());

    int l  = -1, r = -1;

    for(int i = 0; i < n; i++){
        if(v1[i] != v2[i]){
            if(l == -1){
                l = i + 1;
            }else{
                r = i + 1;
            }

        }
    }

    if(l == -1){
        cout<<"yes\n";
        cout<<1<<" "<<1<<"\n";
    }else{
        reverse(v1.begin()+l - 1 ,v1.begin()+r);

        if(v1 == v2){
            cout<<"yes\n";
            cout<<l<<" "<<r<<"\n";
        }else{
            cout<<"no\n";
        }
    }
}


