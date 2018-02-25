/*3 4 12 1 34 16
3 -4 12 1 34 16
3 4 1 -12 34 16
3 4 1 12 -34 16
3 4 1 12 16 -34 ilk döngüde en büyük eleman sona gecti.
sonra tekrar
3 4 1 12 16 34
3 1 4 12 16 34
buble short */

#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

void buble_sýralama(int dizi[], int size);
int main() {
	int array[6], size;

	printf("dizinin kac elemanli oldg giriniz");
	scanf("%d",&size);
	for (int i = 0; i < size; i++) {
		scanf("%d",&array[i]);
	}
	buble_sýralama(array, size);
	for (int i = 0; i < size; i++) {
		printf("%d", array[i]);
	}
	
	getchar();
	return 0;
}

void buble_sýralama(int dizi[], int size) {
	int i, j, gecici;
	for (i = 0; i < size; i++) {
		for (j = 1; j < size - i; j++) {
			if (dizi[j - 1] > dizi[j])
				gecici = dizi[i];
			dizi[j] = dizi[j - 1];
			dizi[j - 1] = gecici;

		}
	}

	for (int i = 0; i < size; i++) {
		printf("%d", dizi[i]);
	}
}