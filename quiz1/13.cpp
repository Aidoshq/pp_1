#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;

    int sum = 0;
    for (int i = 0; i < n; i ++){
        int k = a + i * b;

        sum += k;
        
        cout << k << " ";
    }
    cout << endl << "sum: " << sum;
    return 0;
}