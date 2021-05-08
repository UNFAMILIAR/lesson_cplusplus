#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	string d = ((a * b) >= c) && (c % b == 0 || c % a == 0) ? "YES" :
			   "NO";
	cout << d;
	return 0;
}