#include <bits/stdc++.h>

using namespace std;

bool foo (int n) {
    if(n==0){

        return false;
    }
    if((n&(n-1))==0){
        
        return true;
    }
    
        return false;
    }
    
    

int main(){
    int n;
    cin>>n;
    if(foo(n)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}