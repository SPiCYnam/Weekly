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

//�Ѻ����Ţ 1 ��������������������Ҵ�ٻ����ͧ���� * �繨ӹǹ��ҡѺ����Ţ����Ѻ����� �ѧ������ҧ