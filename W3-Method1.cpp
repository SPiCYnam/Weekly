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


//�Ѻ����Ţ 1 ��������������������Ҵ�ٻ����ͧ���� * �繨ӹǹ��ҡѺ����Ţ����Ѻ����� �ѧ������ҧ