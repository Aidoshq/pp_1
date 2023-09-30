#include <bits/stdc++.h>
using namespace std;

int main () {
long long n  ;
cin>>n;
int sum=0;
        while (n>9) {
            sum+=n%10;
            n/=10;
         }

sum=sum%10;

if (n==sum) {
    cout<<"YES";
} else {
    cout<<"NO";
}

 return 0; 
}