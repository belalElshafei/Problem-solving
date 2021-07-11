//Problem link:=> https://codeforces.com/problemset/problem/432/A

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,k;cin>>n>>k;
	
	vector<int> v(n);
	
	int totalP = 0;
	
	for(int i = 0; i < n; i++){
		cin>>v[i];
		
		if((v[i] + k) <= 5){
			totalP++;
		}
	}
	
	int teams = totalP / 3;
	
	cout<<teams<<"\n";	
}
