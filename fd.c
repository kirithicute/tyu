#include <stdio.h>
#include<string.h>
int main() 
{
	
	char st[10];
	int n,i;
	scanf("%s",st);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		if(st[i]==st[i+1])
		{
		printf("%c*",st[i],st[i+1]);
		
		}
		else
		printf("%c",st[i]);
	}
	
	return 0;
}
