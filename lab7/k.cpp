#include <bits/stdc++.h>

using namespace std;

char foo(string s , int a , char max) {
    if (a==s.size()) {
    return max;
    }

        if (max<s[a]) {
        return foo(s , a+1 , s[a]);
            } else {
            return foo(s , a+1 , max);
    }
}

int main () {
    string s;
    cin>>s;
    cout<<foo(s , 0 , s[0]);
    return 0;
}
