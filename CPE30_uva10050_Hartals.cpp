#include <bits/stdc++.h>

using namespace std;

#define pb(a) push_back(a)
#define INF 2117117117

typedef long long int LL;

int T, N, P, party[117];
bool days[4117];

int main()
{
    scanf("%d", &T);
    while(T--) {
        scanf("%d%d", &N, &P);

        for(int i = 0; i < P; i++)
            scanf("%d", party + i);

        memset(days, 0, sizeof(bool) * (N + 1));

        for(int i = 0; i < P; i++) {
            for(int j = 1; j * party[i] <= N; j++)
                days[party[i] * j] = true;
        }

        int ans = 0;
        for(int i = 1; i < N + 1; i++)
            if(days[i] && i % 7 != 0 && i % 7 != 6)
                ans++;

        printf("%d\n", ans);
    }

    return 0;
}
