//Problem link :=>  https://codeforces.com/problemset/problem/672/B

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	map<char,int> mp;
	string s;cin>>s;
	
	for(int i = 0 ; i < n; i++){
		mp[s[i]]++;
	}
	
	int overChars = 0;
	int distChars = 0;
	
	for(auto x : mp){
		if(x.second > 1){
			overChars+=(x.second - 1);
		}
		
		distChars++;
	}
	
	int otherChars = 26 - distChars;
	
	if(otherChars >= overChars){
		cout<<overChars<<"\n";
	}else{
		cout<<-1<<"\n";
	}
	
}
