#include<stdio.h>


int main() {

	int hour = 0, minute = 0, second = 0;

	printf("초(second) 입력: ");
	scanf("%d", &second);
	hour = second / 3600;
	minute = (second % 3600) / 60;
	second = second % 60;
	printf("%d시간 %d분 %d초\n", hour, minute, second);
	return 0;

}