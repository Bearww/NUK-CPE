#include <bits/stdc++.h>

using namespace std;

#define pb(a) push_back(a)
#define INF 2117117117

typedef long long int LL;

int N, Q, num, cost[36];
LL ans, total[36];

int main()
{
    scanf("%d", &N);
    for(int c = 0; c < N; c++) {
        for(int i = 0; i < 36; i++)
            scanf("%d", cost + i);

        printf("Case %d:\n", c + 1);

        scanf("%d", &Q);
        while(Q--) {
            scanf("%d", &num);

            ans = INF;
            for(int i = 2; i <= 36; i++) {
                total[i - 1] = cost[num % i];
                for(LL v = i; (LL)num / v; v *= i)
                    total[i - 1] += cost[((LL)num / v) % i];
                ans = min(ans, total[i - 1]);
            }

            printf("Cheapest base(s) for number %d:", num);
            for(int i = 1; i < 36; i++)
                if(total[i] == ans)
                    printf(" %d", i + 1);
            printf("\n");
        }

        if(c < N - 1) printf("\n");
    }

    return 0;
}
