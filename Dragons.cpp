//Problem link:=> https://codeforces.com/problemset/problem/230/A

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
	ll s; int n;cin>>s>>n;
	multimap<int ,int>mulp;
	
	for(int i = 0; i < n; i++){
		int st,boun;cin>>st>>boun;
		
		mulp.insert(pair<int,int>(st,boun));
		
	} 
	
	int win = 1;
	
	for(auto x : mulp){
		if(s > x.first){
			s+=x.second;
		}else{
			win = 0;
			break;
		}
	}

	if(win == 1){
		cout<<"YES"<<"\n";
	}else{
		cout<<"NO"<<"\n";
	}
}
