#include <cstdio>
using namespace std;

int T, M, N, Q, r, c;
char m[117][117], ch;

int main() {
	scanf("%d", &T);
	while(T--) {
		scanf("%d%d%d", &M, &N, &Q);
		
		for(int i = 0; i < M; i++)
			scanf("%s", m + i);
		
		printf("%d %d %d\n", M, N, Q);
		for(int i = 0; i < Q; i++) {
			scanf("%d%d", &r, &c);
			
			int ans = 1;
			bool chk = true;
			ch = m[r][c];
			for(int j = 1; chk; j++) {
				for(int k = -j; k <= j; k++) {
					if(r - j < 0 || r + j >= M || c + k < 0 || c + k >= N || m[r - j][c + k] != ch || m[r + j][c + k] != ch) {
						chk = false;
						break;
					}
					if(c - j < 0 || c + j >= N || r + k < 0 || r + k >= M || m[r + k][c - j] != ch || m[r + k][c + j] != ch) {
						chk = false;
						break;
					}
				}
				if(chk) ans += 2;
			}
			printf("%d\n", ans);
		}
	}
	return 0;
}