#include <bits/stdc++.h>

using namespace std;

string s;

int main()
{
    while(cin >> s) {
        if(s == "0") break;

        int sum = 0;
        for(int i = 0; i < s.size(); i++)
            sum += s[i] - '0';

        int ans = sum;
        while(ans / 10) {
            sum = 0;
            while(ans) {
                sum += ans % 10;
                ans /= 10;
            }
            ans = sum;
        }

        printf("%d\n", ans);
    }

    return 0;
}
