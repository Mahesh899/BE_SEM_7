//1. Write a program to calculate Fibonacci numbers and find its step count.
#include <iostream>
using namespace std;

// Recursive function to calculate Fibonacci numbers
int fibonacci(int n, int &steps) {
    steps++;  // Count the current recursive call (step)
    if (n <= 1) {
        return n;  // Base case: Fibonacci(0) = 0, Fibonacci(1) = 1
    }
    return fibonacci(n - 1, steps) + fibonacci(n - 2, steps);
}

int main() {
    int n;

    // Prompt the user to enter the position of the Fibonacci number
    cout << "Enter the position of the Fibonacci number (n): ";
    cin >> n;

    // Variable to count the number of recursive calls
    int steps = 0;

    // Call the recursive function to compute the Fibonacci number
    int result = fibonacci(n, steps);

    // Output the result and the number of steps (recursive calls)
    cout << "Fibonacci number at position " << n << " is " << result << endl;
    cout << "Steps (recursive calls) taken: " << steps << endl;

    return 0;
}
