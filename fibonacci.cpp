#include <iostream>
#include <ctime>  // For calculating runtime

using namespace std;

long long fibonacci(int n) {
    if (n <= 1) return n;
    long long a = 0, b = 1;
    for (int i = 2; i <= n; ++i) {
        long long temp = a + b;
        a = b;
        b = temp;
    }
    return b;
}

int main() {
    int n;

    cout << "Enter a number to calculate its Fibonacci: ";
    cin >> n;

    clock_t start = clock();  // Start time

    long long result = fibonacci(n);
    cout << "Fibonacci of " << n << " is: " << result << endl;

    clock_t end = clock();  // End time
    double duration = double(end - start) / CLOCKS_PER_SEC; // Calculate duration in seconds
    cout << "Time taken: " << duration << " seconds" << endl;

    return 0;
}
