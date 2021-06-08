#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;cin>>n;
	deque<int> de1;
	deque<int> de2;
	deque<int> de3;
	
	int t1 = 0,t2 = 0 ,t3 = 0;
	for(int i = 0; i < n ;i++){
		int num;cin>>num;
				
		if(num == 1){
			t1++;
			de1.push_back(i+1);
		}else if(num == 2){
				t2++;
			de2.push_back(i+1);
		}else{
			t3++;
			de3.push_back(i+1);
		}
		
	}

	int minN = min(t1,t2);
	minN = min(minN,t3);
	
	cout<<minN<<"\n";
	
	for(int i = 0; i < minN; i++){
		
		cout<<de1.back()<<" "<<de2.back()<<" "<<de3.back()<<"\n";
		de1.pop_back();
		de2.pop_back();
		de3.pop_back();
	}
		
}
