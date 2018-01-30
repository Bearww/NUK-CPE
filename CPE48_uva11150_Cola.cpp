#include <cstdio>
#include <algorithm>

using namespace std;

int n;

int f(int a, int b) {
    int s = a, t = a + b;
    while(t / 3) {
        s += t / 3;
        t = t / 3 + t % 3;
    }
    return t < b ? 0 : s;
}

int main()
{
    while(scanf("%d", &n) != EOF)
        printf("%d\n", max(max(f(n, 0), f(n, 1)), f(n, 2)));

    return 0;
}
