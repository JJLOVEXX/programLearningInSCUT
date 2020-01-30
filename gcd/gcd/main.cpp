#include<iostream>

using namespace std;

int gcd(int,int);

int main() {
	int m=0, n=0;
	while (cin >> m >> n) {
		if (m >= 2 && n >= 2) {
			cout << gcd(m, n) << endl;
		}
		else {
			cout << "The gcd is 1." << endl;
		}
	}
	system("pause");
}

int gcd(int a,int b) {
	int t = a % b;
	if (t != 0) {
		return gcd(b, t);
	}
	else {
		return b;
	}
}