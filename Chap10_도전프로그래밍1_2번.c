#include<stdio.h>

int main() {

	int multiplication(int, int);

	int num1, num2;
	printf("2개의 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
		multiplication(num1, num2);
	else
		multiplication(num2, num1);

	return 0;
}

int multiplication(int num1, int num2) {
	int i, j;
	for (i = num1; i < num2 + 1; i++) {
		for (j = 1; j < 10; j++) {
			printf("%d X %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
}