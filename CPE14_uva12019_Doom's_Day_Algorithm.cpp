#include <bits/stdc++.h>

using namespace std;

int n, mon, day, days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    scanf("%d", &n);

    while(n--) {
        scanf("%d%d", &mon, &day);

        int ans = 5 + day;
        for(int i = 1; i < mon; i++)
            ans += days[i - 1];

        switch(ans % 7) {
        case 0:
            printf("Sunday\n");
            break;
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        }
    }

    return 0;
}
