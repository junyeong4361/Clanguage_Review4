#include<stdio.h>

void main() {
	printf("��ȣ�� ���α׷�\n");
	printf("��ȣ�� �Է��ϼ���(������:1, �ʷϺ�:2)");
	scanf("%d", &sign);
	switch (sign) {
	case 1:
		printf("����\n");
	case 2:
		printf("���\n");
	default:
		printf("�߸��Է��ϼ̽��ϴ�.\n");
	}
}