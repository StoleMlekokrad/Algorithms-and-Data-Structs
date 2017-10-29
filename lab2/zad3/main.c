#include<stdio.h>
#define MAX 100

int minBrojKazneni(int a[], int N) {
    //Vasiot kod tuka
    int suma = 0;
    int temp;
    int index;

    for(unsigned short i = 0; i < N; ++i)
    {
	    temp = a[i];
	    index = i - 1;
	    while(index >= 0 && a[index] > temp)
	    {
		    a[index + 1] = a[index];
		    index--;
	    }
	    a[index + 1] = temp;
    }
    for(unsigned short i = 0; i < N; ++i)
    	suma += a[i] * (N - i);
    return suma;
   
}

int main() {
    int i, N;
    int a[MAX];

    scanf("%d", &N);

    for (i=0;i<N;i++)
        scanf("%d", &a[i]);

    int res = minBrojKazneni(a, N);
    printf("%d\n", res);
    return 0;
}
