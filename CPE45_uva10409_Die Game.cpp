#include <cstdio>

using namespace std;

int n, t;
char s[7];

int main()
{
    while(scanf("%d", &n) != EOF) {
        if(n == 0) break;
        getchar();

        int diev[4] = {1, 2, 6, 5}; // top, north, bottom, south
        int dieh[4] = {1, 3, 6, 4}; // top, west, bottom, east

        while(n--) {
            scanf("%s", s);
            if(s[0] == 'n' || s[0] == 's') {
                if(s[0] == 'n') {
                    t = diev[3];
                    for(int i = 2; i >= 0; i--)
                        diev[i + 1] = diev[i];
                    diev[0] = t;
                }
                else {
                    t = diev[0];
                    for(int i = 0; i < 3; i++)
                        diev[i] = diev[i + 1];
                    diev[3] = t;
                }
                dieh[0] = diev[0];
                dieh[2] = diev[2];
            }
            else {
                if(s[0] == 'w') {
                    t = dieh[3];
                    for(int i = 2; i >= 0; i--)
                        dieh[i + 1] = dieh[i];
                    dieh[0] = t;
                }
                else {
                    t = dieh[0];
                    for(int i = 0; i < 3; i++)
                        dieh[i] = dieh[i + 1];
                    dieh[3] = t;
                }
                diev[0] = dieh[0];
                diev[2] = dieh[2];
            }
        }

        printf("%d\n", diev[0]);
    }

    return 0;
}
