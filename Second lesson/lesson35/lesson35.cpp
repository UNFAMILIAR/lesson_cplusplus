#include <iostream>
using namespace std;
int main(){
	int	n, m, x, y, a, e, w, min1, min2;
	cin >> n >> m >> x >> y;
	if (n > m){
		a = n;
		n = m;
		m = a;
		e = n - x;
		w = m - y;
	}else{
		n = n;
		m = m;
		e = n - x;
		w = m - y;
	}
	if (x < y){
		min1 = x;
	}else{
		min1 = y;
	}
	if (e < w){
		min2 = e;
	}else{
		min2 = w;
	}
	if (min1 < min2){
		cout << min1;
	}else{
		cout << min2;
	}
	return 0;
}