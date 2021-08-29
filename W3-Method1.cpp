#include<stdio.h>
int test()
{
    int r, i;
    printf("how many lines?\n");
    scanf_s("%d", &r);
    for (i = 1;i <= r;i++)
    {
        printf("*");
    }
    return 0;
}


//รับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง