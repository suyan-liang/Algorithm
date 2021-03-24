# KMP

## 基础kmp

```cpp
https://www.cnblogs.com/zhangtianq/p/5839909.html
```



## 个数

```cpp
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

const int maxLen = 1e3 + 10;
string s,p;
int nextArr[maxLen];

void getNext(string s) 
{
	int len = s.length();
	int j = -1;
	nextArr[0] = -1;
	for (int i = 1; i < len; i++)
	{
		if (j != -1 && s[i] != s[j + 1])
		{
			j = nextArr[j];
		}
		if (s[i] == s[j + 1])
		{
			j++;
		}
		nextArr[i] = j;
	}
}

int kmp(string s, string p) {
	getNext(p);
	int sLen = s.length();
	int pLen = p.length();
	int j = -1;
	int ans = 0;
	for (int i = 0; i < sLen; i++)
	{
		
		while (j != -1 && s[i] != p[j + 1])
		{
			j = nextArr[j];
		}
		if (s[i] == p[j + 1])
		{
			j++;
		}
		if (j == pLen - 1)
		{
			ans++;
			j = nextArr[j];
		}
	}
	return ans;
}


int main() {
	getline(cin, s);
	getline(cin, p);
	cout << kmp(s, p) << endl;
	return 0;
}
```

