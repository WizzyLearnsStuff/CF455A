#include<iostream>

using namespace std;

// solving for nums till k-1
// for solution at k
// dp[0] = 0
// dp[1] = count of 1's
// dp[2] = max(dp[1], dp[0] + 2 * c[2])
// dp[3] = max(dp[1] + 3 * c[3], dp[2])
// dp[4] = max(dp[2] + 4 * c[4], dp[3])

long long int dp[100001] = {0};

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		dp[a]++;
	}

	for (int i = 2; i <= 100000; i++) {
		dp[i] = max(dp[i - 2] + i * dp[i], dp[i - 1]);
	}

	cout << dp[100000];
}
