#include <iostream>
using namespace std;
int main() {
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d;
	if (a < b){
		if (c == 0 || d == 0){
			e = 0;
			f = b - d;
		}
		else if (c < d)
		{
			e = a - c;
			f = b - d;
		}

	}
	else if (b < a){
		if (c < d){
			f = b - c;
			e = a - d;
		}
	}
	else{
		cout << 0;
	}
	
	if (e < f){
		cout << e;
	} else{
		cout << f;
	}
	return 0;
}