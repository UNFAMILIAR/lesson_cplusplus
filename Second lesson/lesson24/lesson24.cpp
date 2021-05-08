#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string e = ((c + 1 || c - 1) == a) && ((d + 2 || d - 2) == b) ? "YES" :
			   "NO";
	cout << e;
	return 0;
}