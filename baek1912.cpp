#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,sum,res;
	cin >> n;
	vector<int>v(n + 1);
	vector<int>result(n+1);
	for (int i = 1; i <= n; i++) {
		cin >> v[i];
	}
	for (int i = 1; i <= n; i++) {
		result[i] = v[i];
		sum = 0;
		for (int j = i; j <= n; j++) {
			sum += v[j];
			result[i] = max(result[i], sum);
		}
	}
	res = result[1];
	for (int i = 2; i <= n; i++) {
		res = res < result[i] ? result[i] : res;
	}
	cout << res;
	return 0;
}