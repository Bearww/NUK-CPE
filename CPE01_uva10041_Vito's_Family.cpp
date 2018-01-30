#include <bits/stdc++.h>

using namespace std;

#define INF 2117117117

int n, r, s[519], md, ans;

int main()
{
    scanf("%d", &n);

    while(n--) {
        scanf("%d", &r);
        for(int i = 0; i < r; i++)
            scanf("%d", s + i);

        sort(s, s + r);

        ans = 0, md = s[r / 2];
        for(int i = 0; i < r; i++)
            ans += abs(s[i] - md);
        if(r % 2 == 0) {
            int t = 0;
            md = s[r / 2 - 1];
            for(int i = 0; i < r; i++)
                t += abs(s[i] - md);
            ans = min(ans, t);
        }
        printf("%d\n", ans);
    }

    return 0;
}
