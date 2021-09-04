//Problem link:=> https://codeforces.com/problemset/problem/295/A/

//By Belal Elshafei

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 1e5 + 5;

void fastFun() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}

int main() {
	fastFun();
	int n,m,k;
	cin>>n>>m>>k;

	vector<ll> orgArr(N);
	vector<ll> arrIncr(N);
	vector<ll> arrOpt(N);
	map<int,pair<pair<int,int>,ll>>mp;

	for(int i = 1; i < n + 1; i++) {
		cin>>orgArr[i];
	}

	int i = 1;
	int mS = m + 1;
	while(m--) {
		int l,r,d;
		cin>>l>>r>>d;
		mp[i] = {{l,r},d};
		i++;
	}

	while(k--) {
		int x,y;
		cin>>x>>y;
		arrOpt[x]++;
		arrOpt[y + 1]--;
	}

	for(int i = 1; i < mS; i++ ) {
		arrOpt[i]+=arrOpt[i - 1];
	}

	for(int i = 1; i < mS; i++ ) {
		arrIncr[mp[i].first.first]+=mp[i].second*arrOpt[i];
		arrIncr[mp[i].first.second + 1]-=mp[i].second*arrOpt[i];
	}

	for(int i = 1; i < n + 1; i++ ) {
		arrIncr[i]+=arrIncr[i - 1];
	}

	for(int i = 1; i < n + 1; i++) {
		orgArr[i]+=arrIncr[i];
	}

	for(int i = 1; i < n + 1; i++) {
		cout<<orgArr[i]<<" ";
	}

	cout<<"\n";

}
