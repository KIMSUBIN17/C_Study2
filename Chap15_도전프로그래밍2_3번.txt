#include<stdio.h>


int main(void) {

	int arr[10],result[10];
	int i;
	int min=0, max=9;

	printf("총 10개의 숫자 입력\n");

	for (i = 0; i < 10; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);

		if (arr[i] % 2 == 1)
		{
			result[min] = arr[i];
			min++;
		}
		else
		{
			result[max] = arr[i];
			max--;
		}
	}

	for (i = 0; i < 10; i++)
		printf("%d ", result[i]);

	return 0;

}