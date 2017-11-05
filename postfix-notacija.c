#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX 100

int postfix_notation(char* str)
{
	char *token = nullptr;
	int stack_c = 0;
	int stack[MAX];
	//token = strtok(str, " ");
	stack[stack_c] = atoi(token = strtok(str, " "));
	while (token != NULL)
	{

		token = strtok(NULL, " ");
		if (token == NULL)break;
		if (token[0] >= '0' && token[0] <= '9')
		{
			++stack_c;
			stack[stack_c] = atoi(token);
		}
		else if (token[0] == '+')
		{
			int a, b;
			b = stack[stack_c];
			stack_c--;
			a = stack[stack_c];
			stack[stack_c] = a + b;
		}
		else if (token[0] == '-')
		{
			int a, b;
			b = stack[stack_c];
			stack_c--;
			a = stack[stack_c];
			stack[stack_c] = a - b;
		}
		else if (token[0] == '*')
		{
			int a, b;
			b = stack[stack_c];
			stack_c--;
			a = stack[stack_c];
			stack[stack_c] = a * b;
		}
		else if (token[0] == '/')
		{
			int a, b;
			b = stack[stack_c];
			stack_c--;
			a = stack[stack_c];
			stack[stack_c] = a / b;
		}
	}
	return stack[stack_c];
}

int main()
{
	char izraz[MAX];
	gets_s(izraz, MAX);
	int result;
	printf("%d\n", result = postfix_notation(izraz));
	return 0;
}
