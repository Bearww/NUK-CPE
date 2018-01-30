#include <bits/stdc++.h>

using namespace std;

typedef long long int LL;

int x;
LL num, len;
string s;

int main()
{
    while(scanf("%d", &x) != EOF) {
        len = 0;
        getline(cin, s);
        getline(cin, s);

        stringstream ss(s);
        while(ss >> num)
            len++;
        len--;

        stringstream ss1(s);
        LL ans = 0;
        for(LL i = 0; i < len; i++) {
            ss1 >> num;
            ans *= (LL)x;
            ans += (len - i) * num;
        }
        printf("%lld\n", ans);
    }

    return 0;
}
