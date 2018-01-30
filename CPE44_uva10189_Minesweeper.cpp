#include <cstdio>

using namespace std;

int n, m, mp[117][117];
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1}, dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
char ch;

int main()
{
    for(int i = 0; scanf("%d%d", &n, &m) != EOF; i++) {
        if(n == 0 && m == 0)
            break;

        getchar();
        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                scanf("%c", &ch);
                if(ch == '*')
                    mp[x][y] = -1;
                if(ch == '.')
                    mp[x][y] = 0;
            }
            scanf("%c", &ch);
        }

        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                if(mp[x][y] < 0) {
                    for(int k = 0; k < 8; k++) {
                        if(x + dx[k] >= 0 && y + dy[k] >= 0 && x + dx[k] < n && y + dy[k] < m && mp[x + dx[k]][y + dy[k]] >= 0)
                            mp[x + dx[k]][y + dy[k]]++;
                    }
                }
            }
        }

        if(i) printf("\n");
        printf("Field #%d:\n", i + 1);
        for(int x = 0; x < n; x++) {
            for(int y = 0; y < m; y++) {
                if(mp[x][y] < 0)
                    printf("*");
                else
                    printf("%d", mp[x][y]);
            }
            printf("\n");
        }
    }

    return 0;
}
