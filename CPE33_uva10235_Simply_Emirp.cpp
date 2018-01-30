#include <cstdio>
#include <vector>
using namespace std;

#define MAX_N 1000117

bool is_prime[MAX_N];
vector<int> prime;
int N;

void seive() {
	is_prime[0] = is_prime[1] = true;
	for(int i = 2; i < MAX_N; i++) {
		if(!is_prime[i]) prime.push_back(i);
		for(int j = 0; j < prime.size() && prime[j] * i < MAX_N; j++) {
			//printf("%d %d\n", i, prime[j]);
			is_prime[prime[j] * i] = true;
			if(i % prime[j] == 0) break;
		}
	}
}

int main() {
	seive();
	//for(int i = 0; i < prime.size(); i++) printf("%d\n", prime[i]);
	
	while(scanf("%d", &N) != EOF) {
		int r = 0, t = N;
		while(t) {
			r *= 10;
			r += t % 10;
			t /= 10;
		}

		printf("%d", N);
		if(!is_prime[N] && !is_prime[r] && N != r)
			printf(" is emirp.");
		else if(!is_prime[N])
			printf(" is prime.");
		else
			printf(" is not prime.");
		printf("\n");
	}
	return 0;
}