#include<stdio.h>

void main() {
	printf("신호등 프로그램\n");
	printf("신호를 입력하세요(빨간불:1, 초록불:2)");
	scanf("%d", &sign);
	switch (sign) {
	case 1:
		printf("정지\n");
	case 2:
		printf("출발\n");
	default:
		printf("잘못입력하셨습니다.\n");
	}
}