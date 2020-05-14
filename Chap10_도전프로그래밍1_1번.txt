#include<stdio.h>

int main() {
	int num = 0;

	printf("정수를 입력하시오 : ");
	scanf("%d", &num);
	printf("10진수%d를 16진수로 변환하면 %#x입니다.\n", num, num);

	return 0;
}