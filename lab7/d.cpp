#include <bits/stdc++.h>

using namespace std;

long long sum(string n , int i) {
if (i==n.size()) {
    return 0;
}

return sum(n , i+1) + (int)n[i]-48;
}

int main () {
string n;
cin>>n;
cout<<sum(n , 0);

    return 0;
}