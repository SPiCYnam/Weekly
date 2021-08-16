#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Prime Factorization Calculator\n");
    printf("Enter a number: ");
    int n;
    scanf_s("%d", &n);

    int factors[n];
    int index = 0;

    // find prime factors
    int i = n;
    while (i > 1) {
        int j = 2;
        while (j <= i) {
            if (i % j == 0) {
                factors[index++] = j;
                i = i / j;
                break;
            }
            j++;
        }
    }

    // display result
    printf("%d = ", n);
    i = 0;
    while (i < index) {
        printf("%d", factors[i]);
        if (i < index - 1) {
            printf(" x ");
        }
        i++;
    }
    return 0;
}