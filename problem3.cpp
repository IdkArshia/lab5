#include <stdio.h>
int main()
{
	char x,y;
	int key,k;
	printf("enter a character to encrypt");
	scanf("%c",&x);
	printf("enter encryption key");
	scanf("%d",&key);
	x=x+key;
	printf("encrypted:%c\n",x);
	
	printf("enter a character to decrypt\n");
	scanf(" %c",&y);
	printf("enter decryption key");
	scanf("%d",&k);
	y=y-k;
	printf("decrypted:%c",y);
	return 0;
}