#include<stdio.h>
#include<conio.h>

int main() {

	int i,sayý, toplam = 0;
	for (i = 0; ; i++) {
		printf("sayi gir -1 bas cýkmak icin");
		scanf("%d", &sayý);
		if (sayý == -1) {
			break;
		}
		toplam += sayý;

	}
	printf("%d", toplam);

	getchar();
	return 0;
}