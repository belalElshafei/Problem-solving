//Problem link :=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/Q
 
//By Belal Elshafei
 
#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
void fastFun(){	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
int main(){
	fastFun();
	
	ll t;cin>>t;
	while(t--){
		ll n,h;cin>>n>>h;
		vector<ll> v(n + 1);
		vector<ll> sums(n + 1);
 
		for(ll i = 1; i <= n; i++){
			ll l,r;cin>>l>>r;
			v[l]++;
			if(r < n){	
				v[r+1]--;
			}
		}
		
		ll sum1 = 0;
		ll sum2 = 0;
		for(ll i = 1; i <= n; i++){
			sum1+=v[i];
			sum2+=n - sum1;
			sums[i] = sum2;
		}
			
		ll mn = (n*h) + 2,subSum = 0;
		for(ll i = n; i >= h; i--){
			subSum = sums[i] - sums[i - h];
			mn = min(mn,subSum);
		}
		
		cout<<mn<<"\n";	
	}
}
