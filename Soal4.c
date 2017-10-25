#include <stdio.h>
#include <pthread>
#include <stdlib.h>
#include <unitsd.h>

int main(){

	int angka, hitung , hasil = 1;
	printf("Masukkan Angka:\n");
	scanf("%d", &angka);
	for (hitung = angka; hitung >= 1; hitung--) {
		hasil = hasil * hitung;
	}
	printf("Hasil %d! = %d\n", angka, hasil);
	return 0;
}