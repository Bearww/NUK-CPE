#include <bits/stdc++.h>

using namespace std;

string s[10117];
int len, c;

int main()
{
    while(getline(cin, s[len])) {
        if(s[len] == "") break;
        len++;
    }

    for(int i = 0; i < len; i++) {
        for(int j = 0; j < s[i].size(); j++) {
            if(s[i][j] == '"') {
                c ^= 1;
                if(c & 1) printf("``");
                else printf("''");
            }
            else putchar(s[i][j]);
        }
        printf("\n");
    }

    return 0;
}
