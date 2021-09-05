#include <iostream>
using namespace std;
int test() {
    int n, x , y ,z= 0;
    cout << "Enter the number of Fibonacci : ";
    cin >> n;
    cout << "Fibonacci No. " << n << " is " ;
    for (int i = 1; i <= n; ++i) {
        if (i == 1) {
           x=1;
            continue;
        }
        if (i == 2) {
             y =1;
           continue;
        }
        z = x + y;
        x = y;
        y = z;
        if (i==n)
            cout << z << " ";
    }
    return 0;
}

//โปรแกรมรับค่า n แล้วแสดงค่าของลำดับ Fibonacci ลำดับที่ n