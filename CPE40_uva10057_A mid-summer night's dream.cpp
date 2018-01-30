#include <cstdio>
#include <algorithm>

using namespace std;

int n, num[1117117];

int main()
{
    while(scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; i++)
            scanf("%d", num + i);

        sort(num, num + n);

        int *ub = upper_bound(num, num + n, num[n / 2]), *lb = lower_bound(num, num + n, num[(n - 1) / 2]);

        printf("%d %d %d\n", num[(n - 1) / 2], ub - lb, num[n / 2] - num[(n - 1) / 2] + 1);
    }

    return 0;
}
