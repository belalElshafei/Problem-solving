//Problem link :=>https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/M

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int	t;cin>>t;
	vector<string> v{"Hussien", "Atef", "Karemo", "Ezzat"};
	map<int,int ,greater <int>> mp;
	
	while(t--){
		int a,k,m,n;cin>>a>>k>>m>>n;
		mp.clear();
		int c = 1;

		mp[a] = 0;
		mp[k] = 1;
		mp[m] = 2;
		mp[n] = 3;
	
		for(auto x : mp){
			if(c == 1 || c == 2){
				cout<<v[x.second]<<" ";
			}
			
			c++;
			if(c > 2){
				break;
			}	
		}
		
		cout<<"\n";
	}
	
}
