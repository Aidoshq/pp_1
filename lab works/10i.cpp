#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a1(n);

    vector<int>a2(n);
    for(int i=0; i<n; i++){
        cin>>a1[i];
        a2[i]=a1[i];
    }
    reverse(a2.begin(),a2.end());
    for(int i=0; i<a1.size(); i++){
        if(a1[i]==a1[a1.size()-i-1]){
            cout<<"OK"<<endl;
        }
        else {
            cout<<"Instead of"<<" "<<a1[i]<<" "<<"here was"<<" "<<a2[i]<<endl;
        }

    }
    

return 0;
}