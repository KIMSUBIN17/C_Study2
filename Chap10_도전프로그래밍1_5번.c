#include<stdio.h>

int main() {

	int i, j;
	int cnt = 0;
	for (i = 2; cnt < 10; i++) { //1은 실수에서 제외되기때문에 2부터 시작
		for (j = 2; j <= i; j++) {  //실수인지 확인, j가 1과 i만 존재해야 실수이므로 2부터 i까지 실행
			if (j == i) {  
				printf("%d ", i);
				cnt++;
			}
			else if (i%j == 0) { // j가 i와 같지 않고, 나누어 떨어지는 수가 나오면 실수가 아니므로 제외
				break;
			}
		}
	}
	return 0;
}