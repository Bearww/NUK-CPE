#include <bits/stdc++.h>

using namespace std;

string a, b;
int numa[26], numb[26], ans;

int main()
{
    while(getline(cin, a)) {
        getline(cin, b);

        memset(numa, 0, sizeof(numa));
        memset(numb, 0, sizeof(numb));

        for(int i = 0; i < a.size(); i++) numa[a[i] - 'a']++;
        for(int i = 0; i < b.size(); i++) numb[b[i] - 'a']++;

        for(int i = 0; i < 26; i++) {
            ans = min(numa[i], numb[i]);
            for(int j = 0; j < ans; j++)
                printf("%c", char('a' + i));
        }
        printf("\n");
    }

    return 0;
}
