#include <stdio.h>

void main() {
	int a = 0;
	do {
		++a;
		printf("do~while문이 %d번 반복되었습니다.\n", a);
	} while (a < 10);
}