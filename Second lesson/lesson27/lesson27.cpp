#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	bool d = a * b % 2 == 0;
	bool e = c % 2 == 0;
	string f = d == e ? "YES" :
			   "NO";
	cout << f;
	return 0;
}