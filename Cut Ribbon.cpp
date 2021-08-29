
// Problem link :=> https://codeforces.com/problemset/problem/189/A

//By Belal Elshafei

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void fastFun() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}


int main() {

	fastFun();
	int n,a,b,c;
	cin>>n>>a>>b>>c;

	int v1 = max({a,b,c}),v3 = min({a,b,c});
	int v2;
	if(a!=v1&& a!= v3) {
		v2 = a;
	} else if(b!=v1&& b!= v3) {
		v2 = b;
	} else {
		v2 = c;
	}


	ll x = -1,y = -1, z = -1, mx = -1;
	int diff = 0;

	for(int A = 0; A<=4000; A+=v1) {
		x++;
		y = -1;
		for(int B = 0; B<=4000; B+=v2) {
			y++;
			diff = n -(A+B);

			if(diff > 0) {
				if(diff%v3 == 0) {
					z = (diff / v3);
					mx = max(mx,(x+y+(z)));
				}

			} else if(diff == 0) {
				mx = max(mx,(x+y));

			} else if(diff  < 0) {
				break;
			}
		}
	}

	cout<<mx<<"\n";

}
