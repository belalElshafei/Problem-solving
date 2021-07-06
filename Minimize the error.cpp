//Problem Link :=>  https://codeforces.com/group/uIwyWI1OoG/contest/324680/problem/M

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int main(){
	int n,k1,k2;cin>>n>>k1>>k2;
	int k = k1 + k2;
	vector<int> v1(n);
	vector<int> v2(n);
	priority_queue<ll> pq;


	for(int i = 0 ; i < n; i++){
		cin>>v1[i];
	}
	
	for(int i = 0 ; i < n; i++){
		cin>>v2[i];
	}
	
	for(int i = 0 ; i < n; i++){
		int f = v1[i],s = v2[i];
		pq.push(abs(f-s));
	}
	
		
	for(int i = 1 ; i <= k; i++){
		ll num = pq.top();
		if(num <= 0){
			num++;
		}else{
			num--;
		}
		pq.pop();
		pq.push(num);
	}
	
	ll sum = 0;
	for(int i = 0; i < n; i++){
		sum+=(pq.top()*pq.top());
		pq.pop();
	}
	
	cout<<sum<<"\n";
	
}
