#include <stdio.h>

void main() {
	int a;
	while (1) {
		printf("숫자입력:");
		scanf("%d", &a);
		if (a == 0) {
			printf("프로그램 종료!\n");
			break;
		}
	}

}