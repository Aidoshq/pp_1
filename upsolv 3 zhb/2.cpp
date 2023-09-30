#include <bits/stdc++.h>
using namespace std;
int main(){
	char t;
	cin>>t;
	string s;
	cin>>s;
	for(int i=0;i<s.size();i++){
		if(s[i]!=t){
			cout<<s[i];
		}
	}
    return 0;
}