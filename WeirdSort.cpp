//Problem link:=> https://codeforces.com/contest/1311/problem/B

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
        int n,m;cin>>n>>m;
        vector<int> arr(n);
        vector<int> arr_sorted(n);
        vector<bool> pos(n);

        for(int i = 0; i < n ; i++){
            cin>>arr[i];
        }

        arr_sorted = arr;
        sort(arr_sorted.begin(),arr_sorted.end());

        for (int i = 0; i < m; ++i) {
            int p;cin>>p;
            pos[p - 1] = true;
        }

        for (int i = 0; i < n; ++i) {
            int j = i;

            while(pos[j] == true && j < n){
                j++;
            }

            sort(arr.begin()+i,arr.begin()+j+1);

            i = j;
        }

        if(arr == arr_sorted)
            cout<<"YES\n";
        else
            cout<<"NO\n";

    }
}


