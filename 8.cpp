#include <bits/stdc++.h>
//m
using namespace std;

int main () {
long long a , b;
cin>>a>>b;
bool check=true;
int cnt=0;
if (a<b) {
while (a!=b) {
    a*=2;
    if(a>b) {
        check=false;
        break;
    }
    cnt++;
}
} else {
while (a!=b) {
    a/=2;
    if (a<b ) {
        check=false;
        break;
    }
    cnt--;
}
}

if (check) {
    cout<<"YES"<<" "<<cnt;
} else {
    cout<<"NO";
}

    return 0;
}