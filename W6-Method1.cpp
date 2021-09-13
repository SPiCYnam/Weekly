//โปรแกรมเพื่อรับข้อมูลความสูงของนักเรียน 10 คน แล้วแสดงผลลัพธ์ความสูงของนักเรียน 10 คน พร้อมหาว่าความสูง
#include <iostream>
using namespace std;
int main()
{
    int i;
    float height[10], sum =0, average;
    for (i = 0; i < 10; ++i)
    {
        cout << "Student " <<  i + 1 << " Enter Height: ";
        cin >> height[i];
        sum += height[i];
    }
    average = sum / i;
    cout << "Average = " << average;
    return 0;
}