#include<stdio.h>

int GCD(int, int);

int main() {

	int num1, num2;

	printf("두 개의 정수를 입력하시오 : ");
	scanf("%d %d", &num1, &num2);

	printf("최대 공약수 : %d\n", GCD(num1, num2));
	return 0;
}

int GCD(int num1, int num2)
{
	int temp = 0;   //swap하기 위한 빈 공간 변수
	int rem = 0;  //나머지

	//num2를 큰 수로 만들기 위해 num1>num2일 경우 swap 시킴
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}

	//유클리드 호제법
	do {
		rem = num2 % num1;
		num2 = num1;
		num1 = rem;
	} while (rem);

	return num2;

}