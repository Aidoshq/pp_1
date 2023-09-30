#include <bits/stdc++.h>

using namespace std;

string foo (string s) {
    for (int i=0 ; i<s.size() ; i++) {
        if (s[i]==s[s.size()-i-1]) {
            return "Yes";
    } else {
        return "No";
    }
    }
    return foo(s);
}

int main () {
    string s;
    cin>>s;
    cout<<foo(s);
}