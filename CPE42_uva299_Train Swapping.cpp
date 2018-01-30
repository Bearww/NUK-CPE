#include <cstdio>
#include <algorithm>

using namespace std;

int N, L, num[57], tmp;

int main()
{
    scanf("%d", &N);
    while(N--) {
        scanf("%d", &L);
        for(int i = 0; i < L; i++)
            scanf("%d", num + i);

        int ans = 0;
        for(int i = 0; i < L - 1; i++) {
            for(int j = 1; j < L - i; j++) {
                if(num[j - 1] > num[j]) {
                    ans++;
                    swap(num[j - 1], num[j]);
                }
            }
        }

        printf("Optimal train swapping takes %d swaps.\n", ans);
    }

    return 0;
}
