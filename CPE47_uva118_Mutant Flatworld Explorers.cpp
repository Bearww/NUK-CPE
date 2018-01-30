#include <cstdio>
#include <cstring>

using namespace std;

int m, n, x, y, d;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
bool mp[50][50] = {0};
char dir[4] = {'N', 'E', 'S', 'W'};
char s[117];

int main()
{
    scanf("%d%d", &m, &n);
    while(scanf("%d%d%s", &x, &y, s) != EOF) {
        for(int i = 0; i < 4; i++)
            if(s[0] == dir[i])
                d = i;

        scanf("%s", s);

        bool lost = false;
        for(int i = 0; i < strlen(s); i++) {
            if(s[i] == 'R')
                d = ++d % 4;
            else if(s[i] == 'L')
                d = (d + 3) % 4;
            else {
                if(x + dx[d] < 0 || y + dy[d] < 0 || x + dx[d] > m || y + dy[d] > n) {
                    if(!mp[x][y]) {
                        mp[x][y] = lost = true;
                        break;
                    }
                }
                else {
                    x += dx[d];
                    y += dy[d];
                }
            }
        }

        if(lost)
            printf("%d %d %c LOST\n", x, y, dir[d]);
        else
            printf("%d %d %c\n", x, y, dir[d]);
    }

    return 0;
}
