#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
//#define LOOP(n) for(int i = 0; i < n; ++i)
int compare_odd(const void* a, const void* b) { return (*(int*)a - *(int*)b); }
int compare_even(const void *a, const void *b) { return *(int*)b - *(int*)a; }

void oddEvenSort(int a[], int  n)
{
	// Vasiot kod tuka
	int odd[100];
	int even[100];
	int odd_c = 0;
	int even_c = 0;
	
	for (int i = 0; i < n; ++i)
	{
		if (a[i] % 2 == 0)
		{
			even[even_c] = a[i];
			++even_c;
		}
		else
		{
			odd[odd_c] = a[i];
			++odd_c;
		}
	}
	
	qsort(odd, odd_c, sizeof(int), compare_odd);
	qsort(even, even_c, sizeof(int), compare_even);

	/*for (int i = 0; i < n; ++i)
		printf("%d - ", a[i]);*/
	int i = 0;
	int j = 0, k = 0;
	while(i < n)
	{
		if (j < odd_c)
		{
			a[i] = odd[j];
			++j;
		}
		else if (k < even_c)
		{
			a[i] = even[k];
			++k;
		}
		++i;
	}
}



int main() {
	int i, n;
	int a[100];
	scanf("%d", &n);
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	oddEvenSort(a, n);
	for (i = 0; i<n - 1; i++)
		printf("%d ", a[i]);
	printf("%d", a[i]);

	return 0;
}