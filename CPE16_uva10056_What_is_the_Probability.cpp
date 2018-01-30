#include <bits/stdc++.h>

using namespace std;

int S, N, player;
double p;

int main()
{
    scanf("%d", &S);

    while(S--) {
        scanf("%d%lf%d", &N, &p, &player);
        if(p == 0.0f) printf("%.4f\n", 0.0f);
        else printf("%.4f\n", pow(1 - p, player - 1) * p / (1 - pow(1 - p, N)));
    }

    return 0;
}
