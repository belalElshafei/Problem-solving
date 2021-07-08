//Problem link :=>  https://codeforces.com/problemset/problem/339/B

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void fastFun(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
	fastFun();
	
	int n,q;cin>>n>>q;
	vector<int>t(q);
	
	for(int i = 0; i < q; i++){
		cin>>t[i];
	}
	
	int t_in = 0;
	ll c = 0;
	
	while(q){
		
		if(t_in == 0){
			c+=(t[t_in] - 1);
		}else if(t[t_in] > t[t_in - 1]){
			c+=(t[t_in] - t[t_in - 1]);
		}else if(t[t_in] < t[t_in - 1]){
			c+=(n - t[t_in - 1] + 1);
			c+=(t[t_in] - 1);
		}
		
		q--; 
		t_in++; 
	}
	
	cout<<c<<"\n";
	
}
