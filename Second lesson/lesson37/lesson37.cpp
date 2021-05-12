#include <iostream>
using namespace std;
int main(){
	int a1, b1, c1, a2, b2, c2;
	cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
	int s1 = a1 * b1 * c1;
	int s2 = a2 * b2 * c2;
	if (s1 == s2){
		cout << "Boxes are equal";
	}else if (s1 < s2){
		cout << "The first box is smaller than the second one";
	}else if (s2 < s1)
	{
		cout << "The first box is larger than the second one";
	}else{
		cout << "Boxes area incomparable";
	}
}