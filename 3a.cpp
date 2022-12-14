#include <bits/stdc++.h>

using namespace std;

// int main () {

// string s;
// string str[10000];
// getline (cin , s);
// int cnt;
// for (int i=0 ; i<s.size() ; i++) {
//     if (s[i]==' ') {
//     cnt++;
// } else {
//     str[cnt]+=s[i];
// }
// }

//         for (int i=0 ; i<=cnt ; i++){
//     for (int b=0 ; b<str[i].size() ; b++){
//             if(str[i][b]>='0' && str[i][b]<='9'){    
//             str[i]=" ";    
//             break;
//      }
//    }
//  }
//  for (int i=0;i<=cnt;i++){
//      if(str[i]!=" "){ 
// 	 cout<<str[i]<<endl;
//  }
//  }


//     return 0;
// }


int main () {
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
 for (int j=0;j<sm[i].size();j++){
 if(sm[i][j]>='0'&&sm[i][j]<='9'){    
 sm[i]=" ";    
 break;
 }
 }
 }
 for (int i=0;i<=k;i++){
     if(sm[i]!=" "){ 
	 cout<<sm[i]<<endl;
    }
}
return 0;
}