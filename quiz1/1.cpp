#include <iostream>
using namespace std;
int main ()
{
int n;
cin>>n;
if (n%2==0) {
    cout<<n/2;
} else if (n%2==1,n>1) {
    cout<<n;
} else if (n==1) {

    cout<<0;
}

    return 0;
}