#include <stdio.h>
int test2() { 
    int a = 0;
    int b =0;
    printf("Enter first number : ");
  scanf_s("%d",&a);    
  printf("Enter second number : ");
    scanf_s("%d",&b);

    do {
        if (a > b)
        {
            a = a % b;
        }

        else if (a < b)
        {
            b = b % a;
        }
        
        else if (a == b)
        {
            break;
        }

    } while (a != 0 && b != 0);
    
    printf("Greatest common divisor = %d ", a+b);
    return 0;
}
