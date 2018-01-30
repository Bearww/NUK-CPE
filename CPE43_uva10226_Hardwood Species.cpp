#include <iostream>
#include <map>
#include <cstdio>

using namespace std;

string str;
int total, T;

int main()
{
    scanf("%d", &T);
    getchar();

    getline(cin, str);
    while(T--) {
        map<string, int> m;
        total = 0;
        while(getline(cin, str) && str != "") {
            total++;
            m[str]++;
        }

        for(map<string, int>::iterator it = m.begin(); it != m.end(); it++)
            printf("%s %.4f\n", it->first.c_str(), (double)it->second / total * 100);

        if(T) printf("\n");
    }

    return 0;
}
