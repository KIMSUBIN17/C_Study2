#include<stdio.h>

int calExpo(int num) {
	if (num == 0)
		return 1;
	else
		return 2 * calExpo(num - 1);
}

int main() {

	int num;
	printf("정수 입력: ");
	scanf("%d", &num);
	printf("2의 %d승은 %d\n", num, calExpo(num));

	return 0;
}
