//https://codeforces.com/group/uIwyWI1OoG/contest/324680/problem/C
 
//By Belal Elshafei
 
#include<bits/stdc++.h>
 
using namespace std;
 
void fastFun(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}
 
int main(){
	fastFun();
	
	int t;cin>>t;
	
	while(t--){
		int n;
		map<int, pair< vector<char> , vector<char> > >m;
		vector<int> ids;
		string s_str,t_str;
		cin>>n;
		cin>>s_str>>t_str;
	
		for(int i = 0 ;i < n; i++){
			int num;cin>>num;
			ids.push_back(num);
		}
		
		for(int i = 0 ;i < n; i++){
			m[ids[i]].first.push_back(s_str[i]);
			m[ids[i]].second.push_back(t_str[i]);
		}
		
		int check = 1;
 
		for(auto x : m){
			vector<char> v1;
			vector<char> v2;
			
			v1 = x.second.first;
			v2 = x.second.second;
			
			sort(v1.begin(),v1.end());
			sort(v2.begin(),v2.end());
			
			if(v1!=v2){
				check = 0;
				break;
			}
		}
				
	   
		if(check == 1){
			cout<<"YES"<<"\n";
		}else{
			cout<<"NO"<<"\n";
		}
	
			
	}
}
