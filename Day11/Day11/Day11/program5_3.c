#include <stdio.h>

void main() {
	int a;
	printf("점수 입력:");
	scanf("%d", &a);
	switch(a/10){
		case 10:
		case 9:
			printf("Grade:A");
			break;
		case 8:
			printf("Grade:B");
			break;
		case 7:
			printf("Grade:C");
			break;
		case 6:
			printf("Grade:D");
			break;
		default:
			printf("Grade:F");
			break;
	}
}