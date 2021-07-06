//Problem Link  :=>   https://codeforces.com/problemset/problem/483/A

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	ll l,r;cin>>l>>r;
	
	if(l%2!=0){
		l++;
	}
	
	if(r - l < 2){
		cout<<-1<<"\n";
	}else{
		cout<<l<<" "<<(l+1)<<" "<<(l+2)<<"\n";
	}
}
