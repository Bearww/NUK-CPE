#include <bits/stdc++.h>

using namespace std;

const double PI = acos(-1.0);

double a, b, r = 6440.0;
double ans1, ans2;
char s[7];

int main()
{
    while(scanf("%lf%lf%s", &a, &b, s) != EOF) {
        a += r;

        if(strcmp(s, "deg"))
            b /= 60.0f;

        if(b > 180)
            b = 360.0f - b;

        ans1 = PI * a / 180.0f * b;
        ans2 = 2.0f * a * sin(b * PI / 360.0f);

        printf("%.6lf %.6lf\n", ans1, ans2);
    }

    return 0;
}
