#include <iostream>
using namespace std;

int main() {
	string s;
	
	while(cin >> s) {
		if(s == "0") break;
		
		int sum = 0, ans = 0;
		for(int i = 0; i < s.size(); i++)
			sum += s[i] - '0';
			
		if(sum % 9)
			cout << s << " is not a multiple of 9." << endl;
		else {
			ans++;
			while(sum % 9 == 0 && sum > 9) {
				int temp = 0;
				while(sum) {
					temp += sum % 10;
					sum /= 10;
				}
				sum = temp;
				if(sum % 9 == 0) ans++;
			}
			
			cout << s << " is a multiple of 9 and has 9-degree " << ans << "." << endl;
		}
	}
	return 0;
}