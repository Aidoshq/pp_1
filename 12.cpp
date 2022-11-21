#include <bits/stdc++.h>
//g
using namespace std;

int main () {

int n , m ,x;
    cin >> n >> m >>x;
    if ( x == 1){
        for(int i = n ;  i<= m;i++){
int c=sqrt(i);
           if(c*c==i) {
            cout<<i<<' ';
           }
        }        
    } else if(x==-1) {
        for(int i = m ;  i>=n;i--){
            int c=sqrt(i);
        if(c*c==i) {
            cout<<i<<' ';
        }
        }
    }
    return 0;
}