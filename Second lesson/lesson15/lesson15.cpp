#include <iostream>
using namespace std;
int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    string e = a == c ? "YES" :
        b == d ? "YES" :
        "NO";
    cout << e;
    return 0;
}