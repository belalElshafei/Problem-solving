//Problem link:=> https://codeforces.com/problemset/problem/155/A

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	
	vector<int> v(n);
	
	for(int i = 0; i < n; i++){
		cin>>v[i];
	}
		
	int mx = v[0];
	int mn = v[0];
	int c = 0;
	for(int i = 1; i < n; i++){
		if(v[i] > v[i - 1]){
			if(v[i] > mx){
				mx = v[i];
				c++;	
			}
		}else{
			if(v[i] < mn){
				mn = v[i];
				c++;
			}
							
		}
	}
	
	cout<<c<<"\n";
	
}
