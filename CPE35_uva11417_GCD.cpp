#include <cstdio>
using namespace std;

int N;

int gcd(int a, int b) {
	while(b) {
		int c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	while(scanf("%d", &N) != EOF) {
		if(N == 0) break;
		int ans = 0;
		for(int i = 1; i < N; i++)
			for(int j = i + 1; j <= N; j++)
				ans += gcd(i, j);
		
		printf("%d\n", ans);
	}
	return 0;
}