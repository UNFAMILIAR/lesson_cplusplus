#include <iostream>
using namespace std;
int main(){
	int a, b, c;
	cin >> a >> b >> c;
	string d = a != b && a != c && b != c ? "YES" :
		"NO";
	cout << d;
	return 0;
}