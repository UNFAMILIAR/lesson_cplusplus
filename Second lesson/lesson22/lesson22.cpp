#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool e = (a - b) == (c - d) || (a + b) == (c + d);
	bool f = a == c || b == d;
	string g = e || f ? "YES" :
			   "NO";
	cout << g;
	return 0;
}