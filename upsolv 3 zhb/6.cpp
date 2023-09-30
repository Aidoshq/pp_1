#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	cin>>s;
	string st="";
	for(int i=0;i<s.size();i++){
if(s[i]>='A' && s[i]<='Z'){
	continue;
}if(s[i]>='0' && s[i]<='9'){
	continue;
}else{
	st+=s[i];
}
}
cout<<st;

return 0;
}
