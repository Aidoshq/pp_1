#include <bits/stdc++.h>
using namespace std;
int main () {
    //pil!
int a;
cin>>a;
int cnt=0;
while (a>=5) {
    a-=5;
    cnt++;
} while (a>=4) {
    a-=4;
    cnt++;
} while (a>=3) {
    a-=3;
    cnt++;
} while (a>=2) {
    a-=2;
    cnt++;
} while (a>=1) {
    a-=1;
    cnt++;
} cout<<cnt;

    return 0;
}