#include<stdio.h>

void printOdd(int *param)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (param[i] % 2 != 0)
			printf("%d ", param[i]);
	}
	printf("\n");
}
void printEven(int *param)
{
	int i;
	for (i = 0; i < 10; i++)
	{
		if (param[i] % 2 == 0)
			printf("%d ", param[i]);
	}
	printf("\n");

}

int main(void) {

	int i;
	int arr[10];

	printf("총 10개의 숫자 입력\n");

	for (i = 0; i < 10; i++) {
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	printf("홀수입력: ");
	printOdd(arr);
	printf("짝수출력: ");
	printEven(arr);

	return 0;


}