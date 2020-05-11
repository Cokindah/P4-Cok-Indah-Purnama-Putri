#include <stdio.h>
int main()
{
	printf("Cok Indah Purnama Putri \n");
printf("NIM : F1B019037 \n");
printf("Kelompok 7 \n");
	int x[7],i;
	for(i=0;i<7;i++)
	{
		printf("masukan nilai %i : ",i+1);
		scanf("%i",&x[i]);
	}
	printf("\n");
	for(i=0;i<7;i++)
	{
	printf("nilai ke %i = %i\n",i+1,x[i]);
	}
	printf("\n");
	return 0;
}
