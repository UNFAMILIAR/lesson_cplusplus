﻿#include <iostream>
using namespace std;
int main(){
	int a, b, c, d;
	cin >> a >> b >> c;
	d = a >= b && a >= c ? a :
		b >= a && b >= c ? b :
		//c > a && c > b ? c :
		c; //0;
	cout << d;
	return 0;
}