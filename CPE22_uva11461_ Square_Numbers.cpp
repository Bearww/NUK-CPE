#include <bits/stdc++.h>

using namespace std;

int a, b, square[330];

int main()
{
    for(int i = 1; i < 330; i++) square[i] = i * i;

    while(scanf("%d%d", &a, &b) != EOF) {
        if(a == 0 && b == 0) break;

        int i = 1;
        while(square[i] < a) i++;

        int ans = 0;
        while(square[i++] <= b) ans++;
        printf("%d\n", ans);
    }

    return 0;
}
