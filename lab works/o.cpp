#include <bits/stdc++.h>

using namespace std;

int main () {
int n;
cin>>n;
map<string,string> a;
for(int i=0; i<n; i++){
string l , p;
cin>>l>>p;
a[l]=p;

}
    int m;

    cin>>m;
     
    for(int i=0; i<m; i++){
        string l , p;
        cin>>l>>p;
        if(!a.count(l)){
            cout<<"login error"<<endl;
        }
        else if(a[l]!=p){
            cout<<"password error"<<endl;

        }
        else {
            cout<<"correct password"<<endl;
        }

    }

    return 0;
}