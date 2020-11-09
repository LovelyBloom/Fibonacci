// Fibonacci Series using Recursion
// mohsentux@live.com

#include <stdio.h>
#include <inttypes.h>

// Recursive function call
int64_t fibonacci(int64_t n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Tail Recursive function call
int64_t tail_fibonacci(int64_t n, int64_t value, int64_t previous) {
    if(n == 0) return previous;
    return tail_fibonacci(n - 1, value+previous, value);
}

int main() {
    printf("Enter the number of fibonacci you want: ");
    int_fast64_t fib;
    scanf("%lld", &fib);
    printf("fibonacci %lld equals %lld", fib, tail_fibonacci(fib, 1, 0));
    return 0;
}
