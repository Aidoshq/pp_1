#include <bits/stdc++.h> 

using namespace std; 
 //n
int main() 
{ 
    int n ; 
    int b = 0 ; 
    cin >> n; 
    int arr[n]; 
    for (int i = 0; i < n; i++) 
    { 
        cin >> arr[i]; 
    } 
    for (int i = 0; i < n; i++) 
    { 
        while (arr[i] % 10 == 0) 
        { 
            arr[i] /= 10; 
        } 
    } 
    for (int i = 0; i < n / 2; i++) 
    { 
        while (arr[i] != 0) 
        { 
            b = b * 10 + (arr[i] % 10); 
            arr[i] /= 10; 
        } 
        arr[i] = b; 
        b = 0; 
    } 
    for (int i = 0; i < n / 2; i++) 
    { 
        if (arr[i] != arr[n - i - 1]) 
        { 
            cout << "NO"; 
            return 0; 
        } 
    } 
    cout << "YES"; 
    return 0;
}