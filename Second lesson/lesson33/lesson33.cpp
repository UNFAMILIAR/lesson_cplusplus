#include <iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, f, g, h, i, j, k;
	cin >> a >> b >> c >> d;
	h = (a < b) && (c < d) ? e = a - c ://f = b - d :
		(a < b) && (d < c) ? e = a - d ://f = b - c :
		(a > b) && (c > d) ? f = b - d ://f = b - d :
		(a > b) && (d > c) ? f = b - c ://f = b - c :
		9;
	if (a < e) {
		k = a;
	}
	else{
		k = e;
	}
	if (b < f){
		i = b;
	}
	else{
		i = f;
	}
	j = k < i ? k :
		i < k ? i :
		9;
	cout << j;
	return 0;
}