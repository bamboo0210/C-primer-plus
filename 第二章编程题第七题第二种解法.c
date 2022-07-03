#include<stdio.h>
void sm(int depth) {
	printf("Smile!");
	if (depth == 3 || depth == 5 || depth == 6) {
		printf("\n");
			if (depth == 6) return;
	}
	sm(depth + 1);
}
int main() {
	sm(1);
}