#include <bits/stdc++.h>

using namespace std;

int T, a, b;

int main()
{
    scanf("%d", &T);
    for(int i = 0; i < T; i++) {
        scanf("%d%d", &a, &b);

        int mn = min(a, b), mx = max(a, b);
        mn = mn & 1 ? mn : mn + 1;
        mx = mx & 1 ? mx : mx - 1;
        printf("Case %d: %d\n", i + 1, (mn + mx) / 2 * ((mx - mn) / 2 + 1));
    }

    return 0;
}
