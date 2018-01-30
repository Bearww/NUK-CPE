#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

char str[1117];
int cnt[129], mx;

int main()
{
    for(int t = 0; gets(str); t++) {
        if(t) printf("\n");
        memset(cnt, 0, sizeof(cnt));
        mx = 0;

        for(int i = 0; i < strlen(str); i++) {
            cnt[(int)str[i]]++;
            mx = max(cnt[(int)str[i]], mx);
        }

        for(int k = 1; k <= mx; k++) {
            for(int i = 128; i > 31; i--) {
                if(cnt[i] == k)
                    printf("%d %d\n", i, k);
            }
        }
    }

    return 0;
}
