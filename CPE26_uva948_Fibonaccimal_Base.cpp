#include <bits/stdc++.h>

using namespace std;

#define pb(a) push_back(a)

int N, num, i;
vector<int> fib;

int main()
{
    fib.pb(1);
    fib.pb(2);

    scanf("%d", &N);
    while(N--) {
        scanf("%d", &num);

        while(num > fib[fib.size() - 1])
            fib.pb(fib[fib.size() - 1] + fib[fib.size() - 2]);

        for(i = fib.size() - 1; fib[i] > num && i >= 0; i--);

        printf("%d = ", num);
        for( ; i >= 0; i--) {
            if(num >= fib[i]) {
                putchar('1');
                num -= fib[i];
            }
            else
                putchar('0');
        }
        printf(" (fib)\n");
    }

    return 0;
}
