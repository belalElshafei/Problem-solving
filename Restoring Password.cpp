//Problem link:=> https://codeforces.com/group/uIwyWI1OoG/contest/324680/problem/O

//By Belal Elsafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	string codeIsq;cin>>codeIsq;
	map<string , char> mp;
	
	for(int i = 0;i<10;i++){
		string num;cin>>num;
		mp[num] = (char) i + 48;
		
	}
	
	string sub = "", pass = "";
	int c = 0;
	for(int i = 0;i<80; i++){
		sub+=codeIsq[i];
		
		if(c == 9){
			pass+=mp[sub];
			c = 0;
			sub = "";
		}else{
		c++;
    	}
	}
	
	cout<<pass<<"\n";
}
