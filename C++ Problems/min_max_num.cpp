#include <iostream>
using namespace std;

// Function to find the highest number
int max()
{
    int num1, num2;

    cout << "For the highest number" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 > num2)
    {
        return num1;
    }
    else if (num1 == num2)
    {
        return 0;
    }
    else
    {
        return num2;
    }
    return 0;
}

// Function to find the lowest number
int min()
{
    int num1, num2;

    cout << "For the lowest number" << endl;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    if (num1 < num2)
    {
        return num1;
    }
    else if (num1 == num2)
    {
        return 0;
    }
    else
    {
        return num2;
    }
    return 0;
}

int main()
{
    int choice, highest, lowest;
    cout << endl;
    cout << "1 for get the highest number\n2 for get lowest number\n0 for highest-lowest number get together" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    cout << endl;
    if (choice == 1)
    {
        highest = max();
        if (highest == 0)
        {
            cout << "Those numbers are equal" << endl;
        }
        else
        {
            cout << "The highest number is: " << highest << endl;
        }
    }

    else if (choice == 2)
    {
        lowest = min();
        if (lowest == 0)
        {
            cout << "Those numbers are equal" << endl;
        }
        else
        {
            cout << "The lowest number is: " << lowest << endl;
        }
    }

    else if (choice == 0)
    {
        highest = max();
        if (highest == 0)
        {
            cout << "Those numbers are equal" << endl;
        }
        else
        {
            cout << "The highest number is: " << highest << endl;
        }
        cout << endl;
        lowest = min();
        if (lowest == 0)
        {
            cout << "Those numbers are equal" << endl;
        }
        else
        {
            cout << "The lowest number is: " << lowest << endl;
        }
    }
    else {
        cout << "Invalid choice!!" << endl;
    }
}