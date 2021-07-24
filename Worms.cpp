//Problem link :=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/T

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int	n;cin>>n;
	map<ll,int> mp;
	
	ll sum = 0;
	for(int i = 1; i <= n; i++){
		ll num;cin>>num;
		sum+=num;
		mp[sum] = i;
	}
	
	auto it = mp.begin();	
	int m;cin>>m;
	 
	while(m--){
		ll num;cin>>num;

		it = mp.lower_bound(num);
	 
		cout<<(*it).second<<"\n";
	}
		 
}
