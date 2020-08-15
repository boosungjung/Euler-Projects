#include <iostream>
using namespace std;
int main()
{
	int ans = 0;
	for (int x = 1; x < 1000; x++) {
		if (x % 3 == 0 || x % 5 == 0) {
			ans += x;
		}
	}
	cout << "Total: " << ans;
}