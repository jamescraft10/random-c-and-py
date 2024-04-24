#include <stdio.h>

int main() {
	int j = 0;
	for(int i = 0; i < 1000; ++i) {
		j += i;
	}
	printf("%d\n", j);
	return 0;
}
