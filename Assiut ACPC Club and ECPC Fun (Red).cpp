//Problem link :=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/K

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
	int n;cin>>n;
	vector<int> v(n + 1);
	vector<int> ind(n + 1);
	vector<int> sum(n + 1);
	
	for(int i = 1; i < n + 1; i++){
		cin>>v[i];
	}
	
	int q;cin>>q;
	
	while(q--){
		int l,r;cin>>l>>r;
			ind[l]--;
			
			if(r + 1 < n + 1){
				ind[r + 1]++;
			}else{
				ind[r] = -1;
			}
	}
	
	int s = 0;
	for(int i = 1; i < n + 1; i++){
		s+=ind[i];
		sum[i] = s;	
	}

	vector<int> lev;
	
	for(int i = 1; i < n + 1; i++){
			
		if(sum[i] == 0){
			lev.push_back(v[i]);
		}
	}
	
	cout<<lev.size()<<"\n";
	
	for(int i = 0; i < lev.size(); i++){
		cout<<lev[i]<<" ";
	}
	
	cout<<"\n";
	
}
