#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int fib[n + 1];  
    fib[0] = 0;      
    fib[1] = 1;      

    for (int i = 2; i <= n; ++i) {
        fib[i] = fib[i - 1] + fib[i - 2];  
    }

    return fib[n];  // Return the nth Fibonacci number
}

int main() {
    int n;
    cout << "Enter the position of Fibonacci number to calculate: ";
    cin >> n;

    int result = fibonacci(n);
    cout << "Fibonacci number at position " << n << " is " << result << std::endl;

    return 0;
}
