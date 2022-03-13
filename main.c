#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data{
	char nama[125];
	char nim[15];
} mahasiswa[12];

int main(){
	char nama[125];
	char nim[15];

	int jumlah_input, i;

	printf("Berapa banyak data? [1..10] ");
	scanf("%d", &jumlah_input);

	if(jumlah_input > 10){
		exit(1);
	} else if(jumlah_input < 1){
		exit(1);
	}

	for(i=0; i<jumlah_input; i++){
		printf("\nInput data ke-%d\n", i+1);
		
		printf("Nama : ");
		scanf(" %[^\n]s", nama);
		
		printf("NIM  : ");
		scanf(" %s", nim);

		strcpy(mahasiswa[i].nama, nama);
		strcpy(mahasiswa[i].nim, nim);
	}

	printf("\n");

	for(i=0; i<jumlah_input; i++){
		if(i+1 < 10){
			printf("0%d. Nama : %s\n", i+1, mahasiswa[i].nama);
			printf("    NIM  : %s\n\n", mahasiswa[i].nim);
		} else{
			printf("%d. Nama : %s\n", i+1, mahasiswa[i].nama);
			printf("    NIM  : %s\n\n", mahasiswa[i].nim);
		}
	}

	return 0;
}
