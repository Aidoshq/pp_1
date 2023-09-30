#include <bits/stdc++.h>

using namespace std;

int main () {

int n;
    cin>>n;
    vector <string> a(n);
    set <string> s;

    for(int i=0; i<n; i++){
            
            cin>>a[i];
            s.insert(a[i]);
    }
    set<string> :: iterator f = s.begin();
    int cnt=0;
    for(; f!=s.end(); f++){
        int cnt2=0;
        for(int i=0; i<a.size(); i++){
        if(*f==a[i]){
            cnt2++;
        }
        }
        if(cnt2==3){
            cnt++;
        }

    }
    cout<<cnt;
   
    return 0;
}