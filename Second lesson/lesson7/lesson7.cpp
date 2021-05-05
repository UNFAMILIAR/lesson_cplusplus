#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b;
	c = a > b ? 1 :
		b > a ? 2 :
		0;
	cout << c;
	return 0;
}