//Problem link :=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/O

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int	n;cin>>n;

	map<int,int> mp;
	
	for(int i = 0; i < n; i++){
		int num;cin>>num;
		mp[num]++;
	}
	
	while(true){
		int c = 0;
		for(auto x: mp){
			if(x.second > 0){
				cout<<x.first<<" ";
				mp[x.first]--;
				c = 1;
			}
		}
		
		if(c == 0){
			break;
		}else{
			cout<<"\n";
		}
	}
	
}
