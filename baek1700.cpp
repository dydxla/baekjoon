#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int N, K,f=0;
	cin >> N >> K;
	vector<int>v(K);
	vector<int>vf(N);
	for (int i = 0; i < K; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < K; i++) {
		if (i == 0) {
			vf[i] = v[i];
		}
		else {
			for (int j = 0; j < N; j++) {
				if (vf[j] != NULL&&j==N-1) {
					i = K - 1;
					break;
				}
				else if (vf[j] == v[i]) {
					break;
				}
				else if (vf[j] != v[i] && j == N - 1) {
					vf.push_back(v[i]);
				}
			}
		}
	}
	for (int i = 0; i < K; i++) {

	}
}