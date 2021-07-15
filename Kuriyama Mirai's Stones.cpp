//Problem link:=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/I

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;
int main(){
	int n;cin>>n;
	vector<int> v1(n + 1);
	vector<int> v2(n + 1);
	vector<ll> v1Sum(n + 1);
	vector<ll> v2Sum(n + 1);
	v1[0] = 0;
	v2[0] = 0;
	v1Sum[0] = 0;
	v2Sum[0] = 0;

	ll sum1 = 0;
	for(int i = 1; i < n + 1; i++){
		cin>>v1[i];
		sum1+=v1[i];
		v1Sum[i] = sum1;
	}
	
	v2 = v1;
	
	sort(v2.begin(),v2.end());
	
	ll sum2 = 0;
	
	for(int i = 1; i < n + 1; i++){
		sum2+=v2[i];
		v2Sum[i] = sum2;
	}
	
	int m;cin>>m;
	
	for(int i = 0; i < m; i++){
		int chos,l,r;cin>>chos>>l>>r;
		ll res = 0;
		if(chos == 1){
			 res = v1Sum[r] - v1Sum[l - 1];
		}else{
			 res = v2Sum[r] - v2Sum[l - 1];
		}
		
		cout<<res<<"\n";
	}
	
}
