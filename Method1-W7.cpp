#include<iostream>
using namespace std;
int test()
{
	string x;
	cin >> x;
	reverse(x.begin(), x.end());
	cout << x;
	return 0;
}