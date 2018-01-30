#include <bits/stdc++.h>

using namespace std;

string s;
int odd, even;

int main()
{
    while(getline(cin, s)) {
        if(s == "0") break;

        odd = even = 0;
        for(int i = 0; i < s.length(); i++) {
            if(i & 1) odd += s[i] - '0';
            else even += s[i] - '0';
        }

        if(abs(odd - even) % 11 == 0)
            cout << s << " is a multiple of 11." << endl;
        else
            cout << s << " is not a multiple of 11." << endl;
    }

    return 0;
}
