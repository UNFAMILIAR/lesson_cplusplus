﻿#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	if (a > b) {
		cout << a;
	}
	else if (b > a) {
		cout << b;
	}
	else
	{
		cout << a || b;
	}
	return 0;
}