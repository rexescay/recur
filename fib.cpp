#include <iostream>
using namespace std;

long int fun(long int n);

int main() {
	cout << fun(523433864) << endl;
}

long int fun(long int n) {
	int r; 
	if (n > 0)
		r = fun(n/10);

	r += n%10;
	return r;
}
