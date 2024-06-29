#include <iostream>
using namespace std;

int swapTwoNum(){
    int swap[2];
    cout << "Enter 1 No. number of array: ";
    cin >> swap[0];
    cout << "Enter 2 No. number of array: ";
    cin >> swap[1];
    cout << "Those numbers are swapped!!\n";
    for (int i = 1; i >= 0; i--)
    {
        cout << 2-i << " No. number: " << swap[i] << endl;
    }
    return 0;
}

int main(){
    swapTwoNum();

}