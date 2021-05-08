#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool e = (a + b) + 1 == (c + d) + 2 || (a + b) + 2 == (c + d) + 1;
	bool f = (a - b) + 1 == (c - d) + 2 || (a - b) + 2 == (c - d) + 1;
	string g = e || f ? "YES" :
			   "NO";
	cout << g;
	return 0;
}