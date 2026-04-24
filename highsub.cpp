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
	int c = 0;
	string ans = "";
	for (int i = 0; i < max(al, bl); ++i) {
		int ss = (a[i] - 48) - (b[i] - 48) - c;
		if (ss < 0) {
			ss = abs(ss);
			c = 1;
		} else {
			c = 0;
		}
//		cout << ss << '\n'; 
		ans += ss + 48;
	}
	reverse(ans.begin(), ans.end());
	cout << ans;
 	return 0;
}

