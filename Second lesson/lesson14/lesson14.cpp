#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c;
	d = a == b && a == c ? 3 :
		a == b || a == c || b == c ? 2 :
		0;
	cout << d;
	return 0;
}