#include <bits/stdc++.h>

using namespace std;

#define MAX_N 15

int N, num, a, b;

int main()
{
    scanf("%d", &N);
    while(N--) {
        scanf("%d", &num);
        a = b = 0;

        for(int i = 0; i < MAX_N; i++)
            if(num & (1 << i))
                a++;

        for(int i = 1; num / i; i *= 10) {
            int t = (num / i) % 10;
            for(int i = 0; i < 4; i++)
                if(t & (1 << i))
                    b++;
        }

        printf("%d %d\n", a, b);
    }

    return 0;
}
