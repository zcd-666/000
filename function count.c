# include <stdio.h>
void sum (int begin,int end)
{
	int i;
	int sum=0;
	for(i=begin;i<=end;i++){
		sum +=i;	
	}
	printf("%d��%d�ĺ�Ϊ%d\n",begin,end,sum);
} 
int main()
{
	sum (20,40);
	sum (40,50);
	sum (50,60);
	return 0;
}
