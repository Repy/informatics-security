#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[8];
	char str2[8];
	printf("address str1:%p\n", &str1);
	printf("address str2:%p\n", &str2);

	printf("input str1:");
	scanf("%s", str1);
	getchar();
	printf("input str2:");
	scanf("%s", str2);
	getchar();
	printf("output str1:%s\noutput str2:%s\n", str1, str2);
	getchar();
}
