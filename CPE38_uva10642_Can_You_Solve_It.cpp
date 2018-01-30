#include <cstdio>

using namespace std;

int T, x1, y1, x2, y2;

int func(int x, int y) {
    int t = x + y;
    return t * (t + 1) / 2 + x;
}

int main()
{
    scanf("%d", &T);
    for(int t = 0; t < T; t++) {
        scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
        printf("Case %d: %d\n", t + 1, func(x2, y2) - func(x1, y1));
    }

    return 0;
}
