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



//�Ѻ����Ţ 1 ��������������������Ҵ�ٻ����ͧ���� * ����������������մ�ҹ��ҡѺ����Ţ����Ѻ�����