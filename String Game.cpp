//Problem link:=> https://codeforces.com/problemset/problem/778/A

//By Belal Elshafei

#include <bits/stdc++.h>
using namespace  std;
typedef  long  long ll;

void f() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

const int N = 1e7;
ll arr[N];
string t,p;

int isOk(int mid){
    string s = t;

    for(int i = 1; i<= mid; i++){
        s[arr[i]] = '?';
    }

    int p1 = 1,p2 = 1;
    int cnt = 0;

    while(p1 < s.size()  && p2 < p.size()){
        if(s[p1] == p[p2]){
            p1++;p2++;cnt++;
        }else{
            p1++;
        }
    }

    if(cnt == p.size() - 1)
        return 1;
    else
        return 0;

}

int bs(){
    int l =  1,r = t.size() - 1,mid = 0;
    int res = 0;

    while(l<=r){
        mid = (l+r)/2;

        if(isOk(mid)){
            res = mid;
            l = mid + 1;

        }else{
            r = mid - 1;
        }
    }

    return res;

}

int main() {
    f();

    t +='?',p+='?';
    string t2,p2;cin>>t2>>p2;
    t+=t2;p+=p2;

    for (int i = 1; i <= t2.size(); ++i) {
        cin>>arr[i];
    }

    int res = bs();

    cout<<res<<"\n";
}


