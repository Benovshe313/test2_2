#include <iostream>
using namespace std;


int printnum(int eded, int t, int m) {
	if (eded == 0) {
		return m;
	}
	else {
		int r = eded % 10;
		m = r * t + m;
		t *= 10;
		eded /= 10;
		printnum(eded, t, m);
	}
}


int main()
{
	int n;
	cin >> n;
	cout << printnum(n, 1, 0);
}


