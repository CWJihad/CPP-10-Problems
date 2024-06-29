#include <iostream>
using namespace std;

int findNum(int scanNumber)
{   

    int num[4] = {12, 35, 56, 7};

    for (int i = 0; i < 4; i++)
    {
        if (num[i] == scanNumber)
        {
            return 1;
        }
        
    }
    return 0;
}

int main(){
    int search, find;
    cout << "Which number you want to find?\nEnter the number: ";
    cin >> search;
    find = findNum(search);
    if (find == 1){
        cout << "Go it!! Your number is available in the list\nHere it is: " << search << endl;
    }
    else
    {
        cout << "Sorry" << endl;
    }
}