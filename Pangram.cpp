//Problem link:=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/C

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	
	string s;cin>>s;
	
	map<char,int> mp;
	
	for(int i = 0;i < n;i++){
		s[i] = toupper(s[i]);
		mp[s[i]]++;
	}
	
	int mpSize = mp.size();
	
	if(mpSize == 26){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";	
	}
	
}
