#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	string s;cin>>s;
	map<string,int> mp;

	for(int i = 0;i < n - 1;i++){
		string sub = s.substr(i,2);
		mp[sub]++;
	}	
	
	string mxS = "";
	int mxN = 0;
	for(auto x :mp){
		if(mxN < x.second){
			mxS = x.first;
			mxN = x.second;
		}
		
	}
	
	cout<<mxS<<"\n";
}
