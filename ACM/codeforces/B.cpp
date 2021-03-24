#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main() {
	int t;
	cin >> t;
	string str;
	while (t--) {
		cin >> str;
		int num1=0, num0=0;
		for (int i = 0; i < str.size(); i++) {
			if (str[i] == '0') num0++;
			if (str[i] == '1') num1++;
		}
		if (num0 == 0 || num1 == 0) {
			cout << "NET" << endl;
			continue;
		}
		int cal = min(num0, num1);
		if (cal % 2 == 1) cout << "DA" << endl;
		else cout << "NET" << endl;
	}
	return 0;
}