//����������Ѻ�����Ť����٧�ͧ�ѡ���¹ 10 �� �����ʴ����Ѿ������٧�ͧ�ѡ���¹ 10 �� ���������Ҥ����٧
#include<iostream>
using namespace std;
int test()
{
    int i, n;
    float avg, height, sum = 0;
    cout << "How many students ? : ";
    cin >> n;
    for (i = 0;i < n;i++)
    {
        cout << "Student " << i + 1 << " Enter Height: ";
        cin >> height; 
        sum += height;
    }
    avg = sum / n;
    cout << "Average = "  << avg;
    return 0;
}