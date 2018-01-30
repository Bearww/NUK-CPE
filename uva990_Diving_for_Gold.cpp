#include <bits/stdc++.h>

using namespace std;

#define mp(a, b) make_pair(a, b)
#define pb(a) push_back(a)
#define ft first
#define sd second

typedef pair<int, int> PII;

int t, w, n, d[117], v[117];
int dp[117][1117];

int knapsack() {
    for(int i = 0; i < n; i++) {
        for(int j = 1; j < d[i]; j++) dp[i + 1][j] = dp[i][j];
        for(int j = d[i]; j <= t; j++)
            dp[i + 1][j] = max(dp[i][j], dp[i][j - d[i]] + v[i]);
    }
    return dp[n][t];
}

void trace() {
    stack<int> s;
    for(int i = n - 1, td = t; i >= 0; i--) {
        if(td - d[i] >= 0 && dp[i + 1][td] == dp[i][td - d[i]] + v[i]) {
            s.push(i);
            td -= d[i];
        }
    }
    printf("%d\n", s.size());
    while(!s.empty()) {
        int i = s.top();
        s.pop();
        printf("%d %d\n", d[i] / w / 3, v[i]);
    }
}

int main()
{
    for(int k = 0; scanf("%d%d", &t, &w) != EOF; k++) {
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%d%d", d + i, v + i);
            d[i] *= 3 * w;
        }

        if(k) printf("\n");
        printf("%d\n", knapsack());
        trace();
    }

    return 0;
}
