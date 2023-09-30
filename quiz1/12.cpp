#include <iostream>
using namespace std;

int main(){
    double salary;
    cin >> salary;
    
    double savings = 0;
    int month = 0;
    while (savings < 500000){
        month++;
        savings += 0.3 * salary;
        salary *= 1.1;        
    }
    cout << month;
    return 0;
}