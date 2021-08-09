//Problem link :=> https://codeforces.com/contest/1324/problem/B

//By Belal Elshafei

#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		vector<int> v(n);
		map<int,int> mpRep;
		map<int,int> mpInd;

		for(int i = 0 ; i < n; i++) {
			int num;
			cin>>v[i];
		}

		int flag = 0;
		for(int i = 0 ; i < n; i++) {
			mpRep[v[i]]++;

			if(mpRep[v[i]] == 1) mpInd[v[i]] = i;

			if(mpRep[v[i]] > 1) {

				if(mpInd[v[i]] + 1 < i) {
					flag = 1;
					break;
				}
			}

		}

		if(flag) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
}
