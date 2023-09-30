#include <bits/stdc++.h>

using namespace std;
//l
int main(){
	string s;
	getline(cin,s);
	string st="";
	for(int i=0;i<s.size();i++){
		if(s[i]==' '){
			st+=s[i];
		}
		else if(s[i]=='z'){
			st+='a';
		}
		else if(s[i]=='Z'){
			st+='A';
		}else if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')){
		st+=s[i]+1;
	}
	else{
		st+=s[i];
	}
	}
	cout<<st;

    return 0;
}