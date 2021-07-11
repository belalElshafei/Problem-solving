//Problem link :=> https://www.codechef.com/problems/NUM239

//By Belal Elshafei

#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;cin>>t;
	
	while(t--){
		int l,r;cin>>l>>r;
		int pretty = 0;
		for(int i = l; i <= r; i++){
						
			int k = i%10;
				
			if(k == 2 || k == 3 || k == 9){
					pretty++;
			}
		}
			
		cout<<pretty<<"\n";	

	}	

}
