#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	string e = (c - a) == (d - b) ? "YES" :
			   "NO";
	cout << e;
	return 0;
}