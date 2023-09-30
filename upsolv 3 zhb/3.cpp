#include <bits/stdc++.h>
using namespace std;

int foo(int a ,int  b){
    int gcd = min(a,b);
    while(a%gcd != 0 || b % gcd != 0){
        gcd--;
    }
    return gcd;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0;i < n;i++){
        cin >> a[i];
    }
    
    int max = 0;
    for(int i = 0; i < n;i++){
        for(int j = i+1; j < n;j++){
            int gcd = foo(a[i] , a[j]);
            if(max < gcd){
                max = gcd;
            }
        }
    }
    cout << max;


    return 0;
}