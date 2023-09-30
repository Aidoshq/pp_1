#include <bits/stdc++.h>
using namespace std;
int main () {
string s;
cin>>s;
bool boolka=false;
char k='A';
while (k>='A'&& k<='z') {
    string c=s+k;
    bool flag=true;
    for (int i=0 ; i<c.size() ; i++) {
        if (c[i]!=c[c.size()-i-1]) {
            flag=false;
        }
    }
    if (flag==true) {
        boolka=true;
        break;
    }
    k++;
} 
if (boolka==true) {
    cout<<"YES";
} else{
    cout<<"NO";
}
                            





                            






//j
    return 0;
}