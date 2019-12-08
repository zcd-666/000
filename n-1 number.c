# include <stdio.h>
int main()
{
	int sum;
	int m;
	scanf("%d",&sum);
	while(sum--)
	{
		scanf("%d",&m);
		int i=10;
		while(m/i>=10)
		{
			i=i*10;
		}
		printf("%d\n",m%i);
	}
	return 0;
}
