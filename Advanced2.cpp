#include<stdio.h>
#include<stdlib.h>
void reverse(char s[]);
int main(void)
{
	char string[50];
	printf("Word before conversion:");
	gets(string);
	reverse(string);
	
	system("pause");
	return 0;
}

void reverse(char s[])
{
	int x=0,y=0;
	
	while (s[x]!='\0')
		x++;
	printf("Word after conversion:");
	for(y=x-1;y>=0;y--)
		printf("%c",s[y]);
	printf("\n");
}
