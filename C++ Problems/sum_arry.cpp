#include <iostream>
using namespace std;

int allNumSum(){
    int size,sum;
    cout << "Enter the size of the array: ";
    cin >> size;
    sum = 0;
    int allNum[size];
    for (int i = 0; i < size; i++){
        cout << "\nEnter " << i+1 << " number of the array: ";
        cin >> allNum[i];
        sum = sum + allNum[i];
    }
    cout << "\nThe summation all given numbers in array is: " << sum;
    return 0;
}

int main(){
    allNumSum();
    return 0;
}