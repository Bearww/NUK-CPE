#include <bits/stdc++.h>

using namespace std;

int n;
string country, name;
map<string, int> m;

int main()
{
    scanf("%d", &n);
    while(n--) {
        cin >> country;
        getline(cin, name);

        m[country]++;
    }

    map<string, int>::iterator it;
    for(it = m.begin(); it != m.end(); it++)
        cout << it->first << " " << it->second << endl;

    return 0;
}
