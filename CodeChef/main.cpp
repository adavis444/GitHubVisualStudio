//Date Created: 2015-11-06
//Date of Last Edit: 2015-11-16
//Problem URL:
//https://www.codechef.com/problems/FLOW016

#include <iostream>

using namespace std;

int main() {
	int T, a, b, t, A, B, GCD, LCM;
	cin >> T;
	while (T--) {
		cin >> A >> B;
		a = A;
		b = B;
		while (b != 0) {
			t = b;
			b = a%b;
			a = t;
		}
		GCD = a;
		LCM = A*B / GCD;
		cout << GCD << ' ' << LCM << endl;
	}
	return 0;
}