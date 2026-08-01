#include <iostream>
using namespace std;


void printFibonacci(int n) {

    if (n <= 0) {
        cout << "Error: N must be a positive integer." << endl;
        return;
    }

    int first = 0;
    int second = 1;

    cout << "Fibonacci sequence: ";

    for (int i = 0; i < n; i++) {

        cout << first << " ";

        int next = first + second;
        first = second;
        second = next;
    }

    cout << endl;
}



void checkFibonacci(int number) {

    if (number < 0) {
        cout << number << " is NOT a Fibonacci number." << endl;
        return;
    }

    int first = 0;
    int second = 1;

    while (first <= number) {

        if (first == number) {
            cout << number << " is a Fibonacci number." << endl;
            return;
        }

        int next = first + second;
        first = second;
        second = next;
    }

    cout << number << " is NOT a Fibonacci number." << endl;
}


int main() {

    int n;
    int number;

    cout << "How many terms? ";
    cin >> n;

    printFibonacci(n);


    cout << "Enter a number to check: ";
    cin >> number;

    checkFibonacci(number);


    return 0;
}