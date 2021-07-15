//Problem link:=> https://codeforces.com/group/uIwyWI1OoG/contest/286425/problem/D

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	map<int,int> mp;
	priority_queue<int> pq;
	
	for(int i = 1; i <= (2*n); i++){
		
		int num;cin>>num;
		
		mp[num]++;
		
		if(mp[num] == 1){
			pq.push(mp.size());
			
		}else{
			mp.erase(num);
		}
			
	}
	
	cout<<pq.top()<<"\n";
	
}
