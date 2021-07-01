
//https://codeforces.com/contest/567/problem/A

//BY BELAL ELSHAFEI

#include<bits/stdc++.h>
#include<cmath>

using namespace std;

typedef long long ll;

void fastFun(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
	
	fastFun();
	int n;cin>>n;
	vector<ll> v(n);
	
	for(int i = 0; i < n ; i++){
		cin>>v[i];
	}
	
	for(int i = 0; i  < n; i++){
		
		ll max_el;
		ll min_el;
		
		if(i ==  0){
			 max_el = abs(v[i] -v[n-1]);
			 min_el = abs(v[i] - v[i+1]);
		}else if(i == n - 1){
			max_el = abs(v[i] -v[0] );
		 	min_el = abs(v[i] - v[i-1]);
		}else{
			max_el = max(abs(v[i] -v[n-1]),abs(v[i] - v[0]));
			min_el = min(abs(v[i] - v[i-1]),abs(v[i] - v[i+1]));
		}
	
		cout<<min_el<<" "<<max_el<<"\n";

	}
		
}
