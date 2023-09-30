#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin>>s;
    map<string,int> a;
    
    a["SUN"]=7;
    a["MON"]=6;
    a["TUE"]=5;
    a["WED"]=4;
    a["THU"]=3;
    a["FRI"]=2;
    a["SAT"]=1;
    cout<<a[s];



    return 0;
}