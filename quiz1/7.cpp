#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i ++){
        int k;
        cin >> k;
        sum += k;
        arr[i] = k;
    }

    sort(arr, arr + n);
    cout << sum << " " << arr[n - 1];
    return 0;
}