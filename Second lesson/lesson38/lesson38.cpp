#include <iostream>
using namespace std;
int main(){
	int a1, b1, c1, a2, b2, c2, d, e, f;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	int x1, y1, z1;
	int x2, y2, z2;
	if (a1 < b1) {
		a1 = a1;
		b1 = b1;
	}
	else {
		d = b1;
		b1 = a1;
		a1 = d;
	}
	if (a1 < c1) {
		a1 = a1;
		c1 = c1;
	}
	else {
		e = a1;
		a1 = c1;
		c1 = e;
	}
	if (b1 < c1)
	{
		b1 = b1;
		c1 = c1;
	}
	else {
		f = b1;
		b1 = c1;
		c1 = f;
	}
	x1 = a1;
	y1 = b1;
	z1 = c1;

	if (a2 < b2) {
		a2 = a2;
		b2 = b2;
	}
	else {
		d = b2;
		b2 = a2;
		a2 = d;
	}
	if (a2 < c2) {
		a2 = a2;
		c2 = c2;
	}
	else {
		e = a2;
		a2 = c2;
		c2 = e;
	}
	if (b2 < c2)
	{
		b2 = b2;
		c2 = c2;
	}
	else {
		f = b2;
		b2 = c2;
		c2 = f;
	}
	x2 = a2;
	y2 = b2;
	z2 = c2;
	if (x1 == x2 && y1 == y2 && z1 == z2){
		cout << "Boxes are equal";
	}else{
		if (z1 <= z2 && y1 <= y2 && x1 <= x2){
			cout << "The first box is smaller than the second one";
		}else if (z2 <= z1 && y2 <= y1 && x2 <= x1){
			cout << "The first box is larger than the second one";
		}else{
			cout << "Boxes are incomparable";
		}
	}
	return 0;
}