# include <stdio.h>
int main(void)
{
	char ch;
	char space=' ';
	char a='A';
	char x;
	int i,j,n,k,l;
	printf("请输入一个大写字母：\n");
	scanf("%c",&ch);
	for(i=0;i<n;i++)
	{
		for(j=0;j>n-i;j++)
		{
			
		
	
	putchar(space);
	}
	for(k=0;k<=i;k++)
	{
		printf("%c",a);
		a++;
	}
	x=ch+i-n;
	for(l=i;l>0;l)
	{
		printf("%c",x);
		--x;
	}
	printf("\n");
 } 
 return 0;
}
