//Problem link:=> https://codeforces.com/problemset/problem/152/A

//By Belal Elsafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,m;cin>>n>>m;
	
	multimap<string ,char>mulp;
	
	
	for(int i = 0; i < n; i++){
		string s;cin>>s;
		mulp.insert(pair<string,char>(s,'f'));
	}

	
	for(int i = 0; i < m; i++){
		
		vector <int>marks;
		
		for(auto x: mulp){
			marks.push_back((int)x.first[i] - 48 );
		}

	int mx = *max_element(marks.begin(),marks.end());
	auto it = mulp.begin();
	
	for(; it!=mulp.end(); it++){
		
		if(((int)it->first[i] - 48) == mx){
			it->second = 's';
		}
	}
	
}

	int suc = 0;

	for(auto x :mulp){
		
		if(x.second == 's'){
			suc++;
		}
	}

	cout<<suc<<"\n";
	
	
}
