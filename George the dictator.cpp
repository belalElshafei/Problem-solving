//Problem link :=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/P

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int	n,k;cin>>n>>k;
	vector<int>v(n);
	map<int,int> mp;
	 
	for(int i = 0; i < n; i++){
		cin>>v[i];
		mp[v[i]]++;
	}
	
	ll res = 0;
	for(int i = 0; i < n; i++){
		
		int need = k - v[i];
		
		if(mp[need] > 0){
			mp[v[i]]--;
			res+=mp[need];
		}
	}
		
	cout<<res<<"\n";
}
