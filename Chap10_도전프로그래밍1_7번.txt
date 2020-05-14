#include<stdio.h>


int main() {

	int n;
	int k; //지수 
	int num = 2;  

	printf("상수 n 입력: ");
	scanf("%d", &n);

	for (k = 0; num <= n; k++)
		num *= 2;
	printf("공식을 만족하는 k의 최댓값은 %d",k);

	return 0;

}