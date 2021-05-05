// cinput.c compile gcc cinput.c -o cinput.o
#include <stdio.h>

int main(){
	char str [16]; //array of characters
	int i; // integar i
	
	printf("Enter a string : ");
	scanf("%a5s",str);
	printf("Enter a hexadecimal number: ");
	scanf("%x",&i);
	printf("Hexadecimal %#x ( %d ). \n",i,i);
	
	return 0;
}
