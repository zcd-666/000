# include <stdio.h>
int main(void)
{
    int i,n;
    printf("请输入表格开始的数:"); 
	scanf("%d",&i);
	printf("请输入表格结束的数:");
	scanf("%d",&n);
	printf("\n");
	printf("原数\t平方\t立方\n");
	for(i=i;i<=n;i++)
	{
	 printf("%d\t%d\t%d\n",i,i*i,i*i*i);
	}
	return 0; 
	
}
