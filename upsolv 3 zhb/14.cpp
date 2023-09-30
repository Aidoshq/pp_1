#include <bits/stdc++.h>

using namespace std;
//n
int main (){
	string s;
	cin>>s;
	string st="";
	for(int i=0;i<s.size();i++){
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
			st+=s[i];
		}
	}
	cout<<st;

    return 0;
}