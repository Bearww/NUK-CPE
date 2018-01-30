#include <bits/stdc++.h>

using namespace std;

#define INF 2117117117

typedef pair<int, int> PII;

int n, idx[2117], len;
string num[2117], s;

int main()
{
    scanf("%d", &n);
    getline(cin, s);

    while(n--) {
        len = 0;
        getline(cin, s);

        getline(cin, s);
        stringstream ss(s);
        priority_queue<PII, vector<PII>, greater<PII> > pq;

        while(ss >> idx[len++]);

        len -= 1;

        for(int i = 0; i < len; i++) {
            cin >> num[i];
            pq.push(make_pair(idx[i], i));
        }
        getline(cin, s);

        for(int i = 0; i < len; i++) {
            cout << num[pq.top().second] << endl;
            pq.pop();
        }

        if(n) cout << endl;
    }

    return 0;
}
