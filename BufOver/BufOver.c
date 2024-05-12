#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[8];
	char str2[8];
	printf("address str1:%p\n", &str1);
	printf("address str2:%p\n", &str2);

	printf("入力してください str1:");
	scanf("%s", str1);
	getchar();
	printf("入力してください str2:");
	scanf("%s", str2);
	getchar();
	printf("出力 str1:%s\n出力 str2:%s\n", str1, str2);
	getchar();
}
