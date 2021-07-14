//Problem link:=> https://codeforces.com/problemset/problem/313/A

//By Belal Elsafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int num;cin>>num;
	
	if(num>=0){
		cout<<num;
	}else{
		
		num = abs(num);
		int f = num/10;
		int k = num%10;
		int s = num / 100;
		s*=10;
		s+=k;
		
		if(s<f){
			s*=-1;
			cout<<s<<"\n";
		}else{
			f*=-1;
			cout<<f<<"\n";
		}
		
	}
}
