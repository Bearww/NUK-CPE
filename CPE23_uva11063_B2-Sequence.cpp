#include <bits/stdc++.h>

using namespace std;

int N, num[117], sum[20117];

int main()
{
    for(int t = 1; scanf("%d", &N) != EOF; t++) {
        memset(sum, 0, sizeof(sum));

        for(int i = 0; i < N; i++)
            scanf("%d", num + i);

        bool ans = true;
        if(num[0] < 1) ans = false;
        for(int i = 0; ans && i < N; i++) {
            for(int j = i; j < N; j++) {
                if(num[j] <= num[j - 1]) {
                    ans = false;
                    break;
                }
                if(sum[num[i] + num[j]]) {
                    ans = false;
                    break;
                }
                sum[num[i] + num[j]] = 1;
            }
        }

        if(ans) printf("Case #%d: It is a B2-Sequence.\n", t);
        else printf("Case #%d: It is not a B2-Sequence.\n", t);
        printf("\n");
    }

    return 0;
}
