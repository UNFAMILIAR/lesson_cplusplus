﻿#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	if ((c - a) / (d - b) == 1 || (d - b) / (c - a) == 1){
		cout << "YES";
	} else if ((c - a) / (d - b) == -1){
		cout << "YES";
	} else {
		cout << "NO";
	}
	return 0;
}