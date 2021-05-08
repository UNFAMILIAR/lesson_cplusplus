#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, e;
	cin >> a >> b >> c >> d;
	e = c < d ? c :
		d < c ? d :
		c || d;
	cout << e;
	return 0;
}