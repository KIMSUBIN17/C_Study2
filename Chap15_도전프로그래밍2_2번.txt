#include<stdio.h>


int main(void) {
	int num, bin;
	int sum = 0;
	int i = 1;

	printf("10진수 정수 입력: ");
	scanf("%d", &num);

	while (1) {
		bin = num % 2;
		sum += bin * i;
		i *= 10;
		if (num == 1) {
			break;
		}
		num = num / 2;
	}
	printf("%d\n", sum);

}


//처음 생각한 알고리즘:10진수 수 입력받아서 나머지 1일때까지 계산 후 배열에 거꾸로 저장
//문제점:입력받은 수의 크기를 알 수 없어서 배열의 크기 지정 불가
//대안 : 나머지를 구하고 그 값에 1,10,100을 곱해서 10진수로 2진수처럼 보이게 표현
//다시 생각해볼 것 : count 수 체크해서 하는 방법