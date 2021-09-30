#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdio.h>
int test()
{
	FILE* fptr;
	fptr = fopen("2temp data.txt", "w");
	char ch;
	printf("Input data string:");
	do {
		scanf("%c", &ch);	
		fprintf(fptr, "%c",ch);
	} while (ch != '.');
	fclose(fptr);
	return 0;
}