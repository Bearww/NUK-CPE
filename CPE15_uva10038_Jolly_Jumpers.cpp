#include <bits/stdc++.h>

using namespace std;

int n, num[3117], cnt[3117];

int main()
{
    while(scanf("%d", &n) != EOF) {
        for(int i = 0; i < n; i++) {
            scanf("%d", num + i);
            cnt[i] = 0;
        }

        for(int i = 1; i < n; i++)
            cnt[num[i] > num[i - 1] ? num[i] - num[i - 1] : num[i - 1] - num[i]] = 1;

        bool ans = true;
        for(int i = 1; i < n; i++)
            if(!cnt[i]) {
                ans = false;
                break;
            }

        if(ans) printf("Jolly\n");
        else printf("Not jolly\n");
    }

    return 0;
}
