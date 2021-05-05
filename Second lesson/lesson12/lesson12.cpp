#include <iostream>
using namespace std;
int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b <= c) {
		cout << "NO";
	}
	else if (a + c <= b) {
		cout << "NO";
	}
	else if (b + c <= a) {
		cout << "NO";
	}
	else {
		cout << "YES";
	}
	return 0;
}