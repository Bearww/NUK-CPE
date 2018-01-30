#include <bits/stdc++.h>

using namespace std;

typedef long long LL;

LL a, b;

int main()
{
    while(scanf("%lld%lld", &a, &b) != EOF)
        printf("%lld\n", abs(b - a));

    return 0;
}
