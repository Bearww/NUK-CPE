#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL a, b;

int main()
{
    while(scanf("%lld%lld", &a, &b) != EOF) {
        if(a == 0 && b == 0) break;

        int ans = 0, c = 0;
        while(a || b) {
            c = (a % 10 + b % 10 + c) / 10;
            ans += c;
            a /= 10;
            b /= 10;
        }

        if(ans > 1)
            printf("%d carry operations.\n", ans);
        else if(ans == 1)
            printf("1 carry operation.\n");
        else
            printf("No carry operation.\n");
    }
    return 0;
}
