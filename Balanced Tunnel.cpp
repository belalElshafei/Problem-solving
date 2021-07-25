//Problem link :=> https://codeforces.com/contest/1237/problem/B
 
//By Belal Elshafei

#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int n;cin>>n;
	vector<int> enter(n);
	vector<int> exit(n);
	map<int,int> mp;
	
	for(int i = 0; i < n; i++){
		cin>>enter[i];
	}
	
	for(int i = 0; i < n; i++){
		cin>>exit[i];
	}
	
	auto it = enter.begin();
	
	int fined = 0;
	for(int i = 0; i < n; i++){
		if(*it == exit[i]){
			it++;
			mp[exit[i]] = 1;
		}else if(mp[*it]!=1){
			mp[exit[i]] = 1;
			fined++;
		}else{
			it++;
			i--;
		}
	}
	
	cout<<fined<<"\n";
}
