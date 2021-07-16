//Problem link:=> https://codeforces.com/contest/610/problem/B
 
//By Belal Elshafei
 
#include<bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main(){
	int n;cin>>n;
	vector<int> v(n);
	priority_queue<int> pq;	
	
	for(int i =0 ;i < n; i++){
		cin>>v[i];
	}
	
	ll mn = *min_element(v.begin(),v.end());
	
	vector<int> sub;
	 
	int i = 0; ll c = 1;
	while(true){
			
		if(v[i] != mn){
			sub.push_back(v[i]);
		}
		
		if(v[i] == mn){
			pq.push(sub.size());
			sub.clear();
		}
		
		if((c > n && v[i] == mn) || (i == n - 1 && v[i] == mn)){
			break;
		}
		
		i++;
		c++;
		
		if( i ==  n){
			i = 0;
		}
	}
	
	int mxSubSize = pq.top();	
	ll res = (mn*n) + mxSubSize; 
	
	cout<<res<<"\n";	
}
