//Problem link :=> https://codeforces.com/problemset/problem/279/B

//By Belal Elshafei

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ll n;cin>>n;
	ll t;cin>>t;
	vector<ll> v(n);
	priority_queue<int> pq;
	
	for(ll i = 0; i < n; i++){
		cin>>v[i];
	}
	
	ll l = 0,r = 0,res = 0,org = t;
	
	while(r < n){
		
		if(v[r] <= t){
			res++;
			t-=v[r];
			r++;
		}else{
			t+=v[l];
			l++;
			res--;
		}
		
		if(l > r ){
			r++;
			t = org;
			res = 0;
		}
		
		pq.push(res);
	}
	
	cout<<pq.top()<<"\n";
}
