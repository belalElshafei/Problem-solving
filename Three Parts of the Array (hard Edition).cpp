//https://codeforces.com/group/uIwyWI1OoG/contest/324680/problem/S

//By BELAL ELSHAFEI

#include<bits/stdc++.h>

using namespace std;
 
typedef long long ll;

void fastFun(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int main(){
	fastFun();
	 
	int n;cin>>n;
	
	map<ll,int> mp1;
	map<ll,int> mp1_pos;
	map<ll,int> mp2;
	map<ll,int> mp2_pos;
	
	vector<ll> v(n);
	
	
	for(int i = 0; i < n ; i++){
		cin>>v[i];
	}	
	
	ll sum1 = 0;
		
	for(int i = 0 ; i <n ; i++){
		
		sum1+=v[i];	
					
		if(mp1[sum1] == 0){

			mp1[sum1]++;
			
			mp1_pos[sum1] = i;
		}
	}	
	
	ll sum3 = 0;
	
	for(int i = n - 1 ; i >= 0 ;i--){
		
		sum3+=v[i];
				
		if(mp2[sum3] == 0){
			
			mp2[sum3]++;
			
			mp2_pos[sum3] = i;
		}
	}	
			
	ll max_sum = -1*1e18;
	
	for(auto i : mp1){
		
		if(mp2[i.first] > 0 && mp2_pos[i.first] > mp1_pos[i.first]){

			max_sum = max(max_sum,i.first);
		
		}
	}	
 
	cout<<max_sum<<"\n";
}

