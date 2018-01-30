#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int ULL;

ULL num;
int n;

void solve(ULL u) {
    if(u >= 10000000) {
        solve(u / 10000000);
        printf(" kuti");
        u %= 10000000;
    }

    if(u >= 100000) {
        printf(" %llu lakh", u / 100000);
        u %= 100000;
    }

    if(u >= 1000) {
        printf(" %llu hajar", u / 1000);
        u %= 1000;
    }

    if(u >= 100) {
        printf(" %llu shata", u / 100);
        u %= 100;
    }

    if(u)
        printf(" %llu", u);
}

int main()
{
    while(scanf("%llu", &num) != EOF) {
        printf("%4d.", ++n);

        if(num) solve(num);
        else printf(" 0");

        printf("\n");
    }

    return 0;
}
