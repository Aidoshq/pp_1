#include <bits/stdc++.h>

using namespace std;
//p
string foo(string str){
	for(int i=0;i<str.size();i++){
		if(str[i]=='1' && str.size()==1){
			cout<<"true";
		}else if(str[i]=='0' && str.size()==1){
			cout<<"false";
		}else{
			return str;
		}
	}
}

int main(){
	string str;
	cin>>str;
	for(int i=0;i<str.size();i++){
		if(str[i]=='1' && str.size()==1){
			cout<<"true";
			return 0;
		}else if(str[i]=='0' && str.size()==1){
			cout<<"false";
			return 0;
		}else{
			cout<<str;
			return 0;
			
		}
	}

    return 0;
}