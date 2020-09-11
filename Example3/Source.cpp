#include <stdio.h>

constexpr int sqr(int x) {
	return x*x;
}
int main() {
	constexpr int y = sqr(6); 
	printf("Result: %d", y);
}