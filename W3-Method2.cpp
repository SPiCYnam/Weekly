#include<stdio.h>
int main()
{
    int r, i;
    printf("how many lines?\n");
    scanf_s("%d", &r);
    i = 1;
    while (i <= r)
    {
       printf("*");
       i++;
    }
    return 0;
}

//รับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นจำนวนเท่ากับตัวเลขที่รับเข้ามา ดังตัวอย่าง