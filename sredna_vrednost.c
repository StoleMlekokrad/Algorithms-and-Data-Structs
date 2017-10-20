#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	int* niza = (int*)calloc(n, sizeof(int));
	int suma = 0;
	for(unsigned short i = 0; i < n; ++i)
		{
			scanf("%d", &niza[i]);
			suma += niza[i];
		}
	const float prosek = (float)suma / n;
	printf("Brojki: %d\nSuma: %d\nProsek: %f\n", n, suma, prosek);
	
	int najblizok = niza[0];
	
	for(unsigned short i = 1; i <= n; ++i)
		{
			if((float)niza[i] == prosek)
			{
				najblizok = niza[i];
				//printf("najblizok: %d\n", najblizok);
				break;
			}
			if(abs(niza[i] - prosek) < abs(najblizok - prosek))
				{
					najblizok = niza[i];
					//printf("najblizok: %d\n", najblizok);
				}
				if(niza[i] < prosek && abs(niza[i] - prosek) == abs(najblizok - prosek))
				{
					najblizok = niza[i];
					continue;
				}
		}
	
	printf("%d\n", najblizok);	
	return 0;
}