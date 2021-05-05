#include <iostream>
using namespace std;
int main (){
	bool small_cake = false;
	int cream_cover = 2;
	// тут переменная cake_diameter инициализируется значанием 34
	int cake_diameter = (small_cake ? 15 : 30) + 2 * cream_cover;
	cout << cake_diameter;
	return 0;
}