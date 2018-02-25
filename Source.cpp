#include<stdio.h>
#include<string.h>

 int main() {

	//FILE *fp;
	//  char ivir[25];
	//int index;
	//fp = fopen("onsatir.txt", "w");//yazmak için açalým 
	//strcpy(ivir, "bu bir örnek satirdir");
	//for (index = 1; index <= 10; index++) {
	//	fprintf(fp, "%s satir no  :", ivir, index);
	//	fclose(fp);
	//}

	 //karakterleri teker teker yazmak 
	 //FILE *dosyapoint;
	 //char digerleri[35];
	 //int index, say;
	 //strcpy(digerleri, "ek satirlar.");
	 //dosyapoint = fopen("onsatir.txt", "a");
	 //for (say = 1; say <= 10; say++) {
		// for (index = 0; digerleri[index]; index++) {
		//	 putc(digerleri[index], dosyapoint);//bir karakter yaz
		//	 putc('\n ', dosyapoint);
		// }
	 //}
	 //fclose(dosyapoint);


	 FILE *fp;
	 int c;
	fp = fopen("onsatir.txt", "r");
	if (fp == NULL)
		printf("böyle bi dosya yok  .");
	else
	{
		do
		{
			c = getc(fp);//bir karakter oku
			putchar(c);//ekranda göster
		} while (c != EOF);//dosya sonunda end of file kadar devam et 
	}
	fclose(fp);



}