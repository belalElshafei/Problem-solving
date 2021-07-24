//Problem link :=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/F
 
//By Belal Elshafei
 
#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main(){
	
	string s1,s2;
	map<char,int> mp;
	getline(cin,s1);
	getline(cin,s2);	
	
	for(int i = 0; i < s1.size(); i++){
		mp[s1[i]]++;
	}
	
	int check = 1;
	for(int i = 0; i < s2.size(); i++){
		
		if(mp[s2[i]] > 0 || s2[i] == ' '){
			mp[s2[i]]--;
		}else{
			check = 0;
			break;
		}
	}
	
	if(check){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
	}
}
