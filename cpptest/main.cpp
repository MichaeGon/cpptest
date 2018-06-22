#include <cstdint>
#include <iostream>
using namespace std;

int main() {
	uint64_t width = static_cast<uint64_t>(UINT64_MAX % 10 == 0);
	for (uint64_t val = UINT64_MAX; val; ++width, val /= 10);

	cout << width << endl;
	return 0;
}