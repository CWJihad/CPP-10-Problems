#include <iostream>
using namespace std;

int allNumSum(int n){
    int sum;
    sum = n*(n+1)/2;
    return sum;
}

int main(){
    int n, sum;
    cout << "1 to N numbers summation" << endl;
    cout << "Enter the last number: ";
    cin >> n;
    sum = allNumSum(n);
    cout << "The sum of all numbers from 1 to " << n << " is: " << sum << endl;
    return 0;
}
// 