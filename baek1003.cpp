#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
struct Zeroone {
	int zero;
	int one;
};
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int T;
	cin >> T;
	vector<Zeroone>result(T);
	for (int i = 0; i < T; i++) {
		int n;
		cin >> n;
		vector<Zeroone>v(n + 1);
		v[0].zero = 1;
		v[0].one = 0;
		if (n == 0) {
			result[i].zero = v[0].zero;
			result[i].one = v[0].one;
			continue;
		}
		v[1].zero = 0;
		v[1].one = 1;
		for (int j = 2; j <= n; j++) {
			v[j].zero = v[j - 1].zero + v[j - 2].zero;
			v[j].one = v[j - 1].one + v[j - 2].one;
		}
		result[i].zero = v[n].zero;
		result[i].one = v[n].one;
	}
	for (int i = 0; i < T; i++) {
		cout << result[i].zero << " " << result[i].one << "\n";
	}
}