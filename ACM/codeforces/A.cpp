/*
	1. 第一家a元每个，第二家b个c元
	2. 买多少个能确定第一家比第二家便宜，买多少个能确定第二家比第一家便宜?没结果输出-1
*/

#include<iostream>
using namespace std;
typedef long long  ll;

int main() {

	ll t;
	cin >> t;
	ll a, b, c;
	while (t--) {
		cin >> a >> b >> c;
		if (a * b <= c) {
			cout << "1 -1" << endl;
		}
		else {
			if (a >= c) {
				cout << "-1 " << b << endl;
			}
			else {
				cout << "1 " << b << endl;
			}
		}
	}


	return 0;
}