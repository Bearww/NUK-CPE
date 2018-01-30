#include <bits/stdc++.h>

using namespace std;

string s[117];
int len, mx;

int main()
{
    while(getline(cin, s[len])) {
        if(s[len] == "") break;
        mx = max(mx, (int)s[len].size());
        len++;
    }

    for(int i = 0; i < mx; i++) {
        for(int j = len - 1; j >= 0; j--) {
            if(s[j].size() <= i) putchar(' ');
            else putchar(s[j][i]);
        }
        printf("\n");
    }

    return 0;
}
