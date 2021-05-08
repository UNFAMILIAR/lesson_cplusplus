#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool e = (a + 1) == c || (a - 1) == c;
	bool f = (b + 2) == d || (b - 2) == d;
	string g = e & f ? "YES" :
			   "NO";
	cout << g;
	return 0;
}