#include <bits/stdc++.h>

using namespace std;

bool foo(int n) {
    if(n%2==0 && n!=2){
        return false;
    }
    for(int i=3; i<sqrt(n); i+=2){
        if(n%i==0){
            return false;
        }
    }
    return true;
}

int main () {
int n ;
cin>>n ;
vector <int> a(n);
for (int i=0 ; i<n ; i++) {
    cin>>a[i];
}

int x;
cin>>x;
int cnt=0;
for (int i=0 ; i<a.size() ; i++) {
    if (a[i]>x && foo(a[i])) {
cnt++;
    }
}
 cout<<cnt;


    return 0;
}