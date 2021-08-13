//Problem link:=> https://codeforces.com/group/uIwyWI1OoG/contest/323496/problem/C

//BY Belal Elshafei

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
	int n,d;
	cin>>n>>d;

	map<int,ll>mp;
	vector<int>v;
	priority_queue<ll> pq;

	for(int i = 0; i < n; i++) {
		int mon,frel;
		cin>>mon>>frel;

		mp[mon]+=frel;
	}

	for(auto x: mp) {
		v.push_back(x.first);
	}

	int l = 0,r = 1;
	ll x = mp[v[0]];
	pq.push(x);

	while(r<v.size()) {

		if((v[r] - v[l]) < d) {
			x+=mp[v[r]];
			pq.push(x);
			r++;
		} else {
			x-=mp[v[l]];
			pq.push(x);
			l++;
		}
	}		

	cout<<pq.top()<<"\n";
}
