#include<stdio.h>
#define MAX 1000

int najdiNajdolgaCikCak(int a[], int N) {
	// Vasiot kod tuka
    int dolzina = 1;
	int max = 1;
	for (int i = 0; i < N; ++i)
	{
		if (a[i] == 0)
			dolzina = 0;
		if (i + 1 < N)
		{
			if (a[i] > 0&&a[i + 1] <= 0)
				++dolzina;
			else if (a[i] < 0 && a[i + 1] > 0)
				++dolzina;
			else
			{
				if (dolzina > max)
					max = dolzina;
				dolzina = 1;
				continue;
			}
		}
		else
		{
			if (dolzina > max)
				max = dolzina;
			dolzina = 1;
			continue;
		}
	}
	return max;
}

int main() {
    int i,j,k;
    int a[MAX];
    int N;
    
    scanf("%d", &N);
    
    for (i=0;i<N;i++)
    	scanf("%d", &a[i]);
    
    int rez = najdiNajdolgaCikCak(a, N);
    printf("%d\n", rez);
    
	return 0;
}
