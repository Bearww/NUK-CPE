#include <bits/stdc++.h>

using namespace std;

string s;
char ori[] = "`1qaz2wsx3edc4rfv5tgb6yhn7ujm8ik,9ol0p[ ";
char enc[] = "23edc4rfv5tgb6yhn7ujm8ik,9ol.0p;/-['=]\\ ";

int main()
{
    while(getline(cin, s)) {
        for(size_t i = 0; i < s.size(); i++) {
            char* p = strchr(enc, s[i]);

            if(p)
                printf("%c", ori[p - enc]);
        }
        printf("\n");
    }

    return 0;
}
