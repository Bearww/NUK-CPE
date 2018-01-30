#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int n;
LL a, b;

int main()
{
    scanf("%d", &n);
    while(n--) {
        scanf("%lld%lld", &a, &b);
        if((a + b) % 2 || (a - b) % 2 || (a + b) / 2 < 0 || (a - b) / 2 < 0)
            printf("impossible\n");
        else
            printf("%lld %lld\n", (a + b) / 2, (a - b) / 2);
    }

    return 0;
}
