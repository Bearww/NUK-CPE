#include <cstdio>
#include <cstring>

using namespace std;

int N, a, b;
char stra[37], strb[37];

int main() {
	scanf("%d", &N);
	for(int c = 0; c < N; c++) {
		scanf("%s%s", stra, strb);
		
		a = b = 0;
		for(int i = 0; i < strlen(stra); i++) {
			a *= 2;
			a += stra[i] - '0';
		}
		
		for(int i = 0; i < strlen(strb); i++) {
			b *= 2;
			b += strb[i] - '0';
		}
		
		int ans = 0;
		while(b) {
			ans = a % b;
			a = b;
			b = ans;
		}
		
		if(a > 1)
			printf("Pair #%d: All you need is love!\n", c + 1);
		else
			printf("Pair #%d: Love is not all you need!\n", c + 1);
	}
	return 0;
}