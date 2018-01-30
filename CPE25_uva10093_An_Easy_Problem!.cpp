#include <bits/stdc++.h>

using namespace std;

string s;

int main()
{
    while(cin >> s) {
        int num, sum = 0, mx = 0;
        for(int i = 0; i < s.size(); i++) {
            num = -1;
            if(s[i] <= '9' && s[i] >= '0')
                num = s[i] - '0';
            else if(s[i] <= 'Z' && s[i] >= 'A')
                num = s[i] - 'A' + 10;
            else if(s[i] <= 'z' && s[i] >= 'a')
                num = s[i] - 'a' + 36;

            if(num > 0) {
                sum += num;
                if(mx < num)
                    mx = num;
            }
        }

        int v = mx < 1 ? 1 : mx;
        for( ; v < 62 && sum % v; v++);

        if(v >= 62)
            printf("such number is impossible!\n");
        else
            printf("%d\n", v + 1);
    }

    return 0;
}
