#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N;
	cin >> N;
	long v[101][10];
	v[1][0] = 0;
	for (int i = 1; i < 10; i++) {
		v[1][i] = 1;
	}
	for (int i = 2; i <=N; i++) {
		v[i][0] = v[i - 1][1];
		v[i][9] = v[i - 1][8];
		for (int j = 1; j <= 8; j++) {
			v[i][j] = (v[i - 1][j - 1] + v[i - 1][j + 1])%1000000000;
		}
	}
	long sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += v[N][i];
	}
	cout << sum % 1000000000;
	return 0;
}