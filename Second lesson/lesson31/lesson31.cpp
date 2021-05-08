#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d;
	if (a < b) {
		if (c < d) {
			e = a - c;
		}
		else {
			e = a - d;
		}
	}
	else {
		if (c < d) {
			e = a - c;
		}
		else {
			e = a - d;
		}
	}
	if (b > a){
		if (c > d){
			f = b - c;
		} else{
			f = b - d;
		}
	}
	else{
		if (c < d) {
			f = b - c;
		}
		else {
			f = b - d;
		}
	}
	if (e < f) {
		cout << e;
	} else {
		cout << f;
	}
	return 0;
}