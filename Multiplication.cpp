
#include <iostream>

using namespace std;

int main()
{
    int number;

    cout << "Enter number: ";
    cin >> number;

    cout << "===========================" << endl;
    cout << "MULTIPLICATION TIME TABLE" << endl;
    cout << "===========================" << endl;

    if (number < 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        for (int i = 1; i <= 12; i++)
        {
            cout << number << " * " << i << " = " << number * i << endl;
        }
    }

    return 0;
}