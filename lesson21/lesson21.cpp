#include <iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	cout << (((n / 1000) + 2) % ((n % 100 % 10) + 2) + ((n / 100 % 10) + 2) % ((n % 100 / 10)+ 2)) + 1;
	return 0;
}