#include<stdio.h>

int main() {

	int money;
	int bread = 500, shrimp = 700, coke = 400;

	printf("현재 당신이 소유하고 있는 금액 : ");
	scanf("%d", &money);

	for (int i = 1; i < money / bread; i++) {
		for (int j = 1; j < money / shrimp; j++) {
			for (int k = 1; k < money / coke; k++) {
				if (money == bread * i + shrimp * j + coke + k) {
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", i, j, k);
				}
			}
		}
	}
	
	printf("어떻게 구입하시겠습니까?");
	return 0;

}