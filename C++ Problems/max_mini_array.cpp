#include <iostream>
using namespace std;

int findMax()
{
    int num[4] = {12, 34, 5, 0};
    cout << "For Max Number";
    for (int i = 0; i < 4; i++)
    {
        if (num[i] > 33)
        {
            cout << endl
                 << "From list the maximum number is: " << num[i] << endl;
        }
    }
    return 0;
}
int findMini()
{
    cout << "For Mini Number" << endl;
    int num[4] = {12, 34, 5, 0};
    for (int i = 0; i < 4; i++)
    {
        if (num[i] < 5)
        {
            cout << "From list the minimum number is: " << num[i] << endl;
        }
    }
    return 0;
}

int main()
{   
    int choice;
    cout << "0 for get the Max-Mini number\n1 for get Max number\n2 for Mini number get together" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    if (choice == 0)
    {
        cout << endl;
        findMax();
        cout << endl;
        findMini();
    }
    else if (choice == 1)
    {
        findMax();
    }
    else
    {
        findMini();
    }
    
    return 0;
}