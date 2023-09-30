#include <bits/stdc++.h>

using namespace std;

string foo(int n,int k){
    if(n==0){
        return "";
    }
    if(n==1){
        return "1";
    }
    char s;
    if(n%k<10){
        s=n%k+48;

    }
    else{
        s=(n%k-10)+'A';
    }

    return foo(n/k,k)+s;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<foo(n,k);
    return 0;

}