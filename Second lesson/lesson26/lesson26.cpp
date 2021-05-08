#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d;
	e = (a - c) * (a - c);
	f = (b - d) * (b - d);
	string g = e + f == 5 ? "YES" :
			   "NO";
	cout << g;
	return 0;
}