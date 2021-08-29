#include<stdio.h>
int test()
{
    int r, i, j;
    printf("how many lines?\n");
    scanf_s("%d", &r);
    i = 1;
    while  (i <= r)
    {
        j = 1;
        while (j <= r)
        {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}



//รับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา