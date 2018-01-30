#include <bits/stdc++.h>

using namespace std;

int a, b;

int func(int n) {
    int cycle = 1;
    while(n > 1) {
        if(n & 1) n = 3 * n + 1;
        else n /= 2;
        cycle++;
    }
    return cycle;
}

int main()
{
    while(scanf("%d%d", &a, &b) != EOF) {
        int ans = 0;

        for(int i = (a < b ? a : b), c = (b > a ? b : a); i <= c; i++)
            ans = max(ans, func(i));

        printf("%d %d %d\n", a, b, ans);
    }
    return 0;
}
