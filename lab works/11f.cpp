#include <bits/stdc++.h>

using namespace std;

int main(){
    int a , b, c;
    cin>>a>>b>>c;
    int n=0;
    for(int i=min(a,b); i>0; i--){
        if(a%i==0 && b%i==0){
            n++;
        }
        if(n==c){
            cout<<i;
            return 0;
        }
    }
   return 0;
}