#include <stdio.h>
#include <pthread>
#include <stdlib.h>
#include <unitsd.h>

void *faktorial(void *faktor){
	int angka, hitung, hasil = 1;
	
	angka =(int)faktor
	if ( angka <= 0)
		printf("Angka tidak bisa negatif");
	else
		for (hitung = 1; hitung <= angka; hitung++) {
		hasil = hasil * hitung;
	}
	printf("Hasil %d! = %d\n", angka, hasil);
	return 0;
}

int main()
{
	pthread_t nopal[20];
	int a,i,j,k;
	char spasi;
	int athir[20];
	while(1)
	{
		scanf("%d%c",&athir[k],&spasi);
		k++;
		if (spasi == '\n')
		{
			break;	
		}
		
	}
	for (j=0;j<=k;j++)
	{
		err=pthread_create(&(nopal[j]),NULL,&faktorial,(void*) athir[j]);//membuat thread
		if(err!=0)//cek error
        	{
            		printf("\n can't create thread : [%d]",err);
        	}
        	else
        	{
            		printf("\n create thread success");
        	}
        	
	}
	for (j=0;j<=k;j++)
	{
		pthread_join(nopal[j],NULL);	
	    return 0;	
	}
}
