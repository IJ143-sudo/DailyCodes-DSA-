//compute a^b using recursion
#include <stdio.h>

long long power(int base, int exponent)
 {
    // Base case: any number raised to the power of 0 is 1.
    if (exponent == 0) {
        return 1;
    }
    // Recursive step: base^exponent = base * base^(exponent-1)
    else 
        return base * power(base, exponent - 1);
}

int main()
 {
    int a, b;
    long long result;

    printf("Enter base integer (a): ");
    scanf("%d", &a);

    printf("Enter non-negative integer exponent (b): ");
    scanf("%d", &b);

    if (b < 0) 
        printf("This function only handles non-negative exponents.\n");
     else 
     {
        result = power(a, b);
        printf("%d^%d = %lld\n", a, b, result);
    }

    return 0;
}