#include <stdio.h>
#include <pthread>
#include <stdlib.h>
#include <unitsd.h>

void *faktorial(){
	int angka, hitung, hasil = 1;
	scanf("%d", &angka);
	if ( angka <= 0)
		printf("Angka tidak bisa negatif");
	else
		for (hitung = angka; hitung >= 1; hitung--) {
		hasil = hasil * hitung;
	}
	printf("Hasil %d! = %d\n", angka, hasil);
	return 0;
}

int main(){