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


//�Ѻ����Ţ 1 ��������������������Ҵ�ٻ����ͧ���� * ����������������մ�ҹ��ҡѺ����Ţ����Ѻ�����