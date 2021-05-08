#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f, g;
	cin >> a >> b >> c >> d;
	e = (a < b) && (c < d) ? a - c :
		(a < b) && (d < c) ? a - d :
		(a > b) && (c < d) ? a - c :
		(a > b) && (d < c) ? a - d :
		0;
	f = (b > a) && (c > d) ? b - c :
		(b > a) && (d > c) ? b - d :
		(b < a) && (c > d) ? b - c :
		(b < a) && (d > c) ? b - d :
		0;
	g = e < f ? e :
		f < e ? f :
		0;
	cout << g;
	return 0;
}