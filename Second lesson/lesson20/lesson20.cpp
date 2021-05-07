#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((c - a) == (d - b)) {
		cout << "YES";
	} else if ((c - a) * (d - b) == 0) {
		cout << "NO";
	} else if ((c - a) / (d - b) == -1) {
		cout << "YES";
	} else if ((c - a) / (d - b) == 1) {
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}