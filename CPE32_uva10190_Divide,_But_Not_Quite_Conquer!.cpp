#include <cstdio>
using namespace std;

int a, b, len, ans[2117];

int main() {
	while(scanf("%d%d", &a, &b) != EOF) {
		len = 0;
		if(b > 1 && a > 0 && a >= b)
			ans[len++] = a;
		while(len) {
			if(ans[len - 1] == 1) break;
			if(ans[len - 1] % b) {
				len = 0;
				break;
			}
			ans[len] = ans[len - 1] / b;
			len++;
		}
		
		if(len) {
			for(int i = 0; i < len; i++) {
				if(i) printf(" ");
				printf("%d", ans[i]);
			}
		}
		else
			printf("Boring!");
		printf("\n");
	}
	return 0;
}