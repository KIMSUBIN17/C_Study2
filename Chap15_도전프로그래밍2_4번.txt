#include<stdio.h>
#include<string.h>


void word_check(char *param)
{
	int i;
	int first = 0, end = strlen(param) - 1;
	int count = 0;
	int len = strlen(param) / 2;
	for (i = 0; i < len; i++)
	{
		if (param[first]!= param[end])
		{
			printf("회문이 아닙니다. \n");
		}
		first++;
		end--;
		
	}
	printf("회문입니다. \n");

}

int main(void)
{
	char word[100];
	printf("문자열 입력: ");
	scanf("%s", word);
	word_check(word);
}