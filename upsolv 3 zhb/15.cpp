#include <bits/stdc++.h>

using namespace std;
//o
int main(){
	string s;
	cin>>s;
	int cnt=0;
	int sch[s.size()];
	for(int i=0;i<s.size();i++){
		sch[i]=0;
		if(s[i]==s[i+1]){
			cnt++;
			sch[i]+=cnt;
		}
		cout<<sch<<endl;
	}for(int i=0;i<s.size();i++){
	
			sch[i]+=cnt;
		
	}
	cout<<sch<<endl;
	int max=-123123;
for(int i=0;i<s.size();i++){
	if(max > sch[i]){
		max=sch[i];
	}
	cout<<s[i]<<" "<<sch[i];
}
return 0;
}