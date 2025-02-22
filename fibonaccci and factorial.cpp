#include <iostream>
#include <ctime>  // For calculating runtime

using namespace std;

long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;

    cout << "Enter a number to calculate its factorial: ";
    cin >> n;

    clock_t start = clock();  // Start time

    long long result = factorial(n);
    cout << "Factorial of " << n << " is: " << result << endl;

    clock_t end = clock();  // End time
    double duration = double(end - start) / CLOCKS_PER_SEC; // Calculate duration in seconds
    cout << "Time taken: " << duration << " seconds" << endl;

    return 0;
}
