#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    string arr[n];
    for (int i = 0; i < n; i ++){
        cin >> arr[i];
    }

    for (int i = 0; i < n; i ++){
        int sum = 0;
        for (int j = 0; j < arr[i].size(); j ++){
            sum += int(arr[i][j] - 48);
        }
        if (sum % 2 == 0){
            cout << "Sum of digits is even!" << endl;
        }
        else{
            cout << "Sum of digits is odd!" << endl;
        }
    }


    return 0;
}


