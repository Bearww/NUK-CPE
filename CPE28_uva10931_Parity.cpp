#include <bits/stdc++.h>

using namespace std;

#define pb(a) push_back(a)

int N, ans;
vector<int> bts;

int main()
{
    while(scanf("%d", &N) != EOF) {
        if(N == 0) break;

        bts.clear();
        ans = 0;

        for(int i = 0; i < 31; i++) {
            if((1 << i) > N) break;
            if(N & (1 << i)) {
                bts.pb(1);
                ans++;
            }
            else
                bts.pb(0);
        }
        reverse(bts.begin(), bts.end());

        printf("The parity of ");
        for(int i = 0; i < bts.size(); i++)
            printf("%d", bts[i]);
        printf(" is %d (mod 2).\n", ans);
    }

    return 0;
}
