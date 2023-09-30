#include <bits/stdc++.h>

using namespace std;

int main () {
 int n;
    cin>>n;
    queue<string> q;
    vector<string> a;

    for(int i=0; i<n; i++){
        int n;
        cin>>n;
        string s;
        
        if(n==2){
            q.pop();
        }
        else{
            cin>>s;
            q.push(s);
        }
        if(q.empty()){
            a.push_back("queue is empty");
        }
        else{
            a.push_back(q.front());
        }
    }
    for(int i=0; i<a.size(); i++){
        cout<<a[i]<<endl;
    }
    return 0;
}