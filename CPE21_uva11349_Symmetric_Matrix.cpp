#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int T, N;
LL mtx[10117];
char ch;

int main()
{
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%c%c%c%c%d", &ch, &ch, &ch, &ch, &N);

        for(int j = 0; j < N; j++)
            for(int k = 0; k < N; k++)
                scanf("%lld", mtx + j * N + k);

        bool ans = true;
        for(int j = 0; j < N * N; j++) {
            if(mtx[j] != mtx[N * N - j - 1]) {
                ans = false;
                break;
            }
            if(mtx[j] < 0) {
                ans = false;
                break;
            }
        }

        printf("Test #%d", i + 1);
        if(ans) printf(": Symmetric.\n");
        else printf(": Non-symmetric.\n");
    }

    return 0;
}
