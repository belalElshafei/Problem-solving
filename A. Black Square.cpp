//https://codeforces.com/problemset/problem/431/A

//By BELAL ELSHAFEI 

#include<bits/stdc++.h>

using namespace std;

int main(){
	map<int,int> mp;
	
	for(int i =1 ; i <= 4; i++){
		int num;cin>>num;
		mp[i] = num;
	}
	
	string s;cin>>s;
	long long c = 0;
	
	for(int i = 0; i < s.size(); i++){
		c+= mp[s[i] - 48];
	}
	
	cout<<c<<"\n";
}
