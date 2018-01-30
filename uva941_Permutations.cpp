#include <cstdlib>
#include <cstdio>
#include <string>
#include <algorithm>

using namespace std;

typedef long long int LL;
int T;
LL N, fact[29];
char s[29];
bool used[29];

int main()
{
    fact[0] = 1;
    for(LL i = 1LL; i < 21LL; i++)
           fact[i] = fact[i - 1] * i;
    
    scanf("%d", &T);
    while(T--) {
              scanf("%s%lld", s, &N);
              
              int len = strlen(s);
              memset(used, 0, sizeof(bool) * len);
              sort(s, s + len);
              
              for(int i = 0; i < len; i++) {
                      LL m = N / fact[len - i - 1];
                      N %= fact[len - i - 1];
                      for(int j = 0, k = 0; j < len; j++) {
                              if(!used[j] && m == (LL)k) {
                                   putchar(s[j]);
                                   used[j] = true;
                                   break;
                              }
                              if(!used[j])
                                          k++;
                      }
              }
              printf("\n");
    }
    
    //system("PAUSE");
    return EXIT_SUCCESS;
}
