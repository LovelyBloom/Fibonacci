// Fibonacci Series using Recursion
// mohsentux@live.com

#include <stdio.h>
#include <inttypes.h>

// Recursive function call
int_fast64_t fibonacci(int_fast64_t n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    printf("Enter the number of fibonacci you want: ");
    int_fast64_t fib;
    scanf("%lld", &fib);
    printf("fibonacci %lld equals %lld", fib, fibonacci(fib));
    return 0;
}
