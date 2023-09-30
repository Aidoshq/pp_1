//do while
#include <bits/stdc++.h>
using namespace std;
int main () {
string s;
getline(cin,s);
int sum1=0,sum2=0;
for (int i=0 ; i<s.size() ; i++) {
    int num=s[i];
    num-=48;
    if (i%2==0){
        sum1+=num;
    } else {
        sum2+=num;
    }  
}  if (sum1==sum2) {
    cout<<"YES";
}else {
    cout<<"NO";
}







    return 0;
}