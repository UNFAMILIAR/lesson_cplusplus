#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f;
	cin >> a >> b >> c;
	if (a < b){
		a = a;
		b = b;
	}else {
		d = b;
		b = a;
		a = d;
	}
	if (a < c){
		a = a;
		c = c;
	}else{
		e = a;
		a = c;
		c = e;
	}
	if (b < c)
	{
		b = b;
		c = c;
	}else{
		f = b;
		b = c;
		c = f;
	}
	cout << a << " " << b << " " << c;
	return 0;
}