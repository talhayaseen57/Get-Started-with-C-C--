#include <stdlib.h>
#include <stdio.h>

int rec_fib(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 1;
    else {
        return rec_fib(n - 2) + rec_fib(n - 1);
    }
}

int memo_fib(int n) {
    static int memo[1000] = {0};
    memo[1] = 1;
    for (int i=2; i<=n; i++) {
        memo[i] = memo[i-1]+memo[i-2];
    }
    return memo[n];
}

int iter_fib(int n) {
    if (n <= 0) return 0;
    if (n == 1) return 1;
    int prev = 0, current = 1;
    for (int i = 2; i <= n; i++) {
        int temp = current;
        current = prev + current;
        prev = temp;
    }
    return current;
}

int main() {
    printf("%d\n", rec_fib(5));
    return 0;
}