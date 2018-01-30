#include <cstdio>
#include <cstring>

using namespace std;

int octave[7] = {0b0110000000, 0b0100000000, 0b0111001111, 0b0111001110, 0b0111001100,
                0b0111001000, 0b0111000000};
int highoct[7] = {0b1110000000, 0b1100000000, 0b0010000000, 0b1111001110, 0b1111001100,
                0b1111001000, 0b1111000000};
int N;
char s[217];

int main()
{
    scanf("%d", &N);
    getchar();
    while(N--) {
        int ans[10], press = 0;
        memset(ans, 0, sizeof(ans));

        gets(s);

        for(int i = 0; i < strlen(s); i++) {
            if(s[i] <= 'g' && s[i] >= 'a') {
                for(int j = 0; j < 10; j++)
                    if((octave[s[i] - 'a'] & (1 << j)) && ((1 << j) & ~press))
                        ans[9 - j]++;
                press = octave[s[i] - 'a'];
            }
            if(s[i] <= 'G' && s[i] >= 'A') {
                for(int j = 0; j < 10; j++)
                    if((highoct[s[i] - 'A'] & (1 << j)) && ((1 << j) & ~press))
                        ans[9 - j]++;
                press = highoct[s[i] - 'A'];
            }
        }

        for(int i = 0; i < 10; i++) {
            if(i) printf(" ");
            printf("%d", ans[i]);
        }
        printf("\n");
    }

    return 0;
}
