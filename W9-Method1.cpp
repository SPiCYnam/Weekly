#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int main()
{
	FILE* fptr;
	fptr = fopen( "1temp data.txt", "w");
	char ch{};
	printf("Input data string:");
		while (ch != '.')
		{
		scanf("%c", &ch);
		fprintf(fptr, "%c", ch);
		}
			fclose(fptr);
		return 0;
}