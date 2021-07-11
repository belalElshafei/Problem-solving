//Problem link :=> https://codeforces.com/problemset/problem/144/A

//By BElal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	vector<int> v(n);
	int mxEle = -1,mxPos = -1;
	int mnEle = 101,mnPos = -1;
	
	for(int i = 0 ; i < n; i++){
		cin>>v[i];
		
		if(v[i] > mxEle){
			mxEle = v[i];
			mxPos = i + 1;
		}
		
		if(v[i] <= mnEle){
			mnEle = v[i];
			mnPos = i + 1;
		}
		
	}
	
	int minNumSec = mxPos - 1;
	
	if(mnPos < mxPos){
		minNumSec+=( n - (mnPos + 1));
		
	}else{
		minNumSec+=( n - mnPos);
	}
	
	cout<<minNumSec<<"\n";
	
}
