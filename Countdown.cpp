//Problem link:=> https://codeforces.com/contest/1573/problem/A

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
		string s;
		cin>>s;

		int res = s[n - 1] - '0';

		for(int i = n - 2; i >= 0; i--) {
			if(s[i]!='0') {
				res+=(s[i] - '0') + 1;
			}
		}

		cout<<res<<"\n";
	}
}
