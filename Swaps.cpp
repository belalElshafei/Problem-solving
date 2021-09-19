//Problem link:=> https://codeforces.com/contest/1573/problem/B

//By Belal Elshafei

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void f() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}

int main() {
	f();

	int t;
	cin>>t;

	while(t--) {
		int n;
		cin>>n;
		vector<int>a(n);
		vector<int>b;
		int pos[2*n + 5];

		for(int i = 0; i <n; i++) {
			cin>>a[i];
		}

		int pre = -1;

		for(int i = 0; i <n; i++) {
			int num;
			cin>>num;
			if(num>pre) {
				b.push_back(num);
				pre = num;
				pos[num] = i;
			}

		}

		int res = 21e5 + 5;

		for(int i = 0; i <n; i++) {
			int up = upper_bound(b.begin(),b.end(),a[i]) - b.begin();
			if(up != n) {
				res = min(res,i+pos[b[up]]);
			}
		}

		cout<<res<<"\n";
	}
}
