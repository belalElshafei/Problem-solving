// ===>   https://codeforces.com/contest/225/problem/A
#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,z,x,y;cin>>n>>z;
	
	for(int i = 0; i  < n; i++){
		cin>>x>>y;
		
		if(x == z || x == 7-z || y == z || y == 7-z ){
			cout<<"NO"<<"\n";
			return 0;
		}
	}
	
	cout<<"YES"<<"\n";
}
