#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("Enter the input to reverse\n");
	gets(s);
	strrev(s);
	printf("Reverse of the input :%s\n",s);
	return 0;
	
}

