#include <stdio.h>
int main() {
    int n;
    printf("count at ");
    scanf_s("%d", &n);
    while (n>0)
    {
            printf("%d", n);
            printf("\n");
            n--;
    }
    printf("time is up");
    return 0;
}