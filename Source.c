#include<stdio.h>
#include<conio.h>

int main() {

	int i,say�, toplam = 0;
	for (i = 0; ; i++) {
		printf("sayi gir -1 bas c�kmak icin");
		scanf("%d", &say�);
		if (say� == -1) {
			break;
		}
		toplam += say�;

	}
	printf("%d", toplam);

	getchar();
	return 0;
}