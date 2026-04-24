#include<bits/stdc++.h>
using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	int al = a.size(), bl = b.size(), ch = max(al, bl) - min(al, bl);
	bool min_is_a = 1;
	max(al, bl) == bl ? min_is_a = 1 : min_is_a = 0;
	if (min_is_a == 1) {
		for (int i = 0; i < ch; ++i) {
			a += '0';
		}
	} else {
		for (int i = 0; i < ch; ++i) {
			b += '0';
		}
	}
	//
//	cout << a << '\n' << b << '\n';
//	system("pause");
	//
	int _give_ = 0;
	string sum;
	bool is_give = 0;
	for (int i = 0; i < max(al, bl); ++i) {
		int ss = (a[i] - 48) + (b[i] - 48) + _give_;
		bool f = 0;
		if (ss > 9) {
			f = 1;
			_give_ = ss / 10;
			ss %= 10;
		} else {
			f = 0;
		}
		sum += (ss) + '0';
		if (f == 0) {
			_give_ = 0;
		}
		//
//		printf("%d: %d, %d, ", i + 1, ss, _give_);
//		cout << sum << "\n";
		//
	}
	if (_give_ == 1) {
		sum += '1';
	}
	reverse(sum.begin(), sum.end());
	cout << sum;
  	return 0;
}

