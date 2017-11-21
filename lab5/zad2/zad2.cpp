#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void print_ary(int *a, int n) { for (int i = 0; i < n; ++i)printf("%d ", a[i]); }
void shakerSort(int a[], int  n)
{
	// Vasiot kod tuka
	for (int i = 0; i < n - i; ++i)
	{
		int counter = 0;
		for(int j = n - 1- i; j > i; --j)
			if (a[j] < a[j - 1])
			{
				int temp = a[j];
				a[j] = a[j - 1];
				a[j - 1] = temp;
				++counter;
			}
		print_ary(a, n);
		printf("\n");
		for (int j = i + 1; j < n - i - 1; ++j)
			if (a[j] > a[j + 1])
			{
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				++counter;
			}
		print_ary(a, n);
		printf("\n");
		if (counter == 0)break;
	}
}



int main() {
	int i, n;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	shakerSort(a, n);
	return 0;
}