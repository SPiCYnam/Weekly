#include <iostream>
using namespace std;
void Fibonacci_cal(int n);
int n,x,y, z = 0;
int main()
{
	cout << "Enter the number of Fibonacci : ";
	cin >> n;
    cout << "Fibonacci No. " << n << " is ";
        Fibonacci_cal(n);
		return 0;
}
void Fibonacci_cal(int n)
{
	for (int i = 1; i <= n; ++i)
	{
        if (i == 1) {x = 1; continue;}
        if (i == 2) {y = 1;continue;}
        z = x + y;
        x = y;
        y = z;
        if (i == n)
            cout << z << " ";
	}
}

	

//โปรแกรมรับค่า n แล้วแสดงค่าของลำดับ Fibonacci ลำดับที่ n