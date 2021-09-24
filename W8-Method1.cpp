//จงเขียนฟังก์ชั่น factorial 
#include<iostream>
using namespace std;
long f(int n) {
    if (n <= 0)
        return 1;
    else 
        return (n * f(n - 1));
}
int test() {
    int n;
    cin >> n;
    if (n < 0) cout << "error\nthe number must be positive number";
    else cout << n<<"! = "<<f(n);
    return 0;
}