#include <iostream>
using namespace std;
int main(){
	int v, t, s = 109;
	cin >> v >> t;
	cout << (((v * t) % s) + s) % s;
	return 0;
}