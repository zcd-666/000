# include <stdio.h>
int main()
{
	char x ='A';
	int i,j;
	for(i=0;i<6;i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%c",x);
			x++;
		}
		printf("\n");
		
	}
     
	
	return 0;
 } 
