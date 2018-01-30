#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int S;
LL D;

int main()
{
    while(scanf("%d%lld", &S, &D) != EOF) {
        for(LL i = S; ; i++) {
            if(i >= D) {
                printf("%lld\n", i);
                break;
            }
            D -= i;
        }
    }

    return 0;
}
