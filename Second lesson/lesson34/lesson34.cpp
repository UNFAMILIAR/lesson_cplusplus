#include <iostream>
using namespace std;
int main(){
	int a, b, c, d, e, f, g, h, i, k, last_value_a, last_value_b, result;
	cin >> a >> b >> c >> d;
	e = a - c;
	f = a - d;
	g = b - c;
	h = b - d;
	i = e < f ? i = e :
		i = f;
	k = g > h ? k = g :
		k = h;
	last_value_a = a < i ? last_value_a = a :
				   last_value_a = i;
	last_value_b = b < k ? last_value_b = b :
				   last_value_b = k;
	result = last_value_a < last_value_b ? result = last_value_a :
			 result = last_value_b;
	cout << result;
	return 0;
	
}