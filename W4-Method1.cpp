#include<stdio.h>
int main()
{
    int r, i, j;
    printf("how many lines?\n");
    scanf_s("%d", &r);
    for (i = 1;i <= r ;i++)
    {
        for (j = 1;j <= r ;j++)
            printf("*");
        printf("\n");
    }
    return 0;
}


//รับตัวเลข 1 ตัวแล้วให้คอมพิวเตอร์วาดรูปเครื่องหมาย * เป็นสี่เหลี่ยมที่มีด้านเท่ากับตัวเลขที่รับเข้ามา