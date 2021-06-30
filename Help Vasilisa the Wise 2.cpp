//https://codeforces.com/problemset/problem/143/A

#include<bits/stdc++.h>

using namespace std;

int r1,r2,c1,c2,d1,d2;

int check(int x00,int x01,int x10,int x11){
	if(x00 + x01  == r1 && x10 + x11 == r2 && x00 + x10 == c1  && x01 + x11 == c2 && x00 + x11 == d1 && x01 + x10 == d2){
		return 1;
	}else{
		return 0;
	}
}

int main(){
	cin>>r1>>r2>>c1>>c2>>d1>>d2;
	
	for(int x00 = 1; x00 < 10; x00++){
		
		for(int x01 = 1; x01 < 10; x01++){
			
			if(x00 == x01) continue;
			
			for(int x10 = 1; x10 < 10; x10++){
				if(x10 == x01 || x10 == x00) continue;
				
				for(int x11 = 1; x11 < 10; x11++){
					
					if(x11 == x01 || x11 == x10 || x11 == x00) continue;
					
					if(check(x00,x01,x10,x11)){
						cout<<x00<<" "<<x01<<"\n"<<x10<<" "<<x11<<"\n";
						return 0;
					}
				}
			}
			
			
		}
	}
	
	cout<<-1<<"\n";
}
