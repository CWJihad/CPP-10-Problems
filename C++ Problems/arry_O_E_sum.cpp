#include <iostream>
using namespace std;

int arrayOddSum()
{
    int n, oddSum;
    cout << endl;
    cout << "Odd Numbers Summation" << endl;
    cout << "Enter the last number of the array: ";
    cin >> n;
    int num[n];
    oddSum = 0;

    for (int i = 0; i <= n; i++)
    {
        num[i] = i;
        if (num[i] % 2 != 0)
        {
            oddSum = oddSum + num[i];
        }
    }

    if (n < 0)
    {
        cout << "Invalid Number" << endl;
    }
    else if (n % 2 != 0)
    {
        cout << "The odd 1-" << n << " numbers summation is: " << oddSum << endl;
    }
    else
    {
        cout << "The odd 1-" << n - 1 << " numbers summation is: " << oddSum << endl;
    }

    return 0;
}
int arrayEvenSum()
{
    int n, evenSum;
    cout << endl;
    cout << "Even Numbers Summation" << endl;
    cout << "Enter the last number of the array: ";
    cin >> n;
    int num[n];
    evenSum = 0;

    for (int i = 0; i <= n; i++)
    {
        num[i] = i;
        if (num[i] % 2 == 0)
        {
            evenSum = evenSum + num[i];
        }
    }

    if (n < 0)
    {
        cout << "Invalid Number" << endl;
    }
    else if (n % 2 == 0)
    {
        cout << "The even 0-" << n << " numbers summation is: " << evenSum << endl;
    }
    else
    {
        cout << "The even 0-" << n - 1 << " numbers summation is: " << evenSum << endl;
    }

    return 0;
}

int main()
{
    int choice;
    cout << "0 for both odd-even numbers summation\n1 for only odd numbers summation\n2 for only even numbers summation" << endl;
    cout << "Enter the choice: " ;
    cin >> choice;

    if (choice == 0)
    {
        arrayOddSum();
        arrayEvenSum();
    }
    else if (choice == 1)
    {
        arrayOddSum();
    }
    else if (choice == 2)
    {
        arrayEvenSum();
    }
    else
    {
        cout << "Invalid choice" << endl;
    }
}