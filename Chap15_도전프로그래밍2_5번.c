#include<stdio.h>

void BubbleDesSort(int arr[], int len);

int main(void)
{
	int arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("입력: ");
		scanf("%d", &arr[i]);
	}

	BubbleDesSort(arr, sizeof(arr) / sizeof(int));
	for (i = 0; i < 7; i++)
		printf("%d ", arr[i]);

	printf("\n");
	return 0;
}

void BubbleDesSort(int arr[], int len)
{
	int i, j, temp;

	for (i = 0; i < len - 1; i++)
	{
		for (j = 0; j < (len - i) - 1; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}