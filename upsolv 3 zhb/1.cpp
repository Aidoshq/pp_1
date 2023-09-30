#include <iostream>
using namespace std;
int main(){    
string s;
string sm[10000];
getline(cin,s);
int k=0;    
for(int i=0;i<s.size();i++){
if(s[i]==' '){   
 k++;
 } else{    
 sm[k] += s[i];}}
 for (int i=0;i<=k;i++){
 for (int b=0;b<sm[i].size();b++){
 if(sm[i][b]>='0'&&sm[i][b]<='9'){    
 sm[i]=" ";    
 break;}}}
 for (int i=0;i<=k;i++){
     if(sm[i]!=" "){ 
	                cout<<sm[i]<<endl;
                    }
                    }
                    return 0;
                    }