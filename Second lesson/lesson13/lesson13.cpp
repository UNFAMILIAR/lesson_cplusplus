#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	string d = a + b <= c || a + c <= b || b + c <= a ? "NO" :
			   "YES";
	cout << d;
	return 0;
}