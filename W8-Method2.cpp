//จงเขียนฟังก์ชั่น factorial 
#include<iostream>
using namespace std;
int fact( int n)
{
    int  result=1;
    for (int i = 1;i <= n;i++)
        result = result * i;
        return result;
}
int main()
{
    int n, i;
    cin >> n;
    if (n < 0) cout << "error\nthe number must be positive number";
    else cout <<n<< "! = " << fact(n);
    return 0;
}