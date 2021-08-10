//Problem link :=> https://codeforces.com/problemset/problem/894/A
 
//By Belal Elshafei
 
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	string s;
	cin>>s;
	vector<char> v;
 
	for(int i = 0; i < s.size(); i++) {
		
		if(s[i] == 'Q' || s[i] == 'A') {
			v.push_back(s[i]);
		}
	}
 
	ll res = 0;
 
	for(int i = 0; i < v.size(); i++) {
 
		if(v[i] == 'Q') {
			for(int j = i + 1; j < v.size(); j++) {
 
				if(v[j] == 'A') {
					for(int x = j + 1; x < v.size(); x++) {
 
						if(v[x] == 'Q') {
							res++;
						}
					}
				}
			}
		}
	}
 
	cout<<res<<"\n";
}
