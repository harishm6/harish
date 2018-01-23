//created by harish

#include<stdio.h>
void main()
{
	int a,n1=0,n2=1,i;
	scanf("%d",&a);
	for(i=7;i>=0;i--)
	{
		printf("%d ",((a&(1<<i))==(1<<i)));
	}
	while(n1!=10)
	{

	bit_swap(&a,n1,n2);
	n1=n1+2;
	n2=n2+2;
	}
	printf("\n");
	for(i=7;i>=0;i--)
	{
		printf("%d ",((a&(1<<i))==(1<<i)));
	}
	printf("\n");
	printf("%d",a);
}
void bit_swap(int *p,int n1,int n2)
{
	*p=(((*(p)&(1<<n1))==(1<<n1))<<n2)|(((*(p)&(1<<n2))==(1<<n2))<<n1)|(*(p)&~((1<<n1)|(1<<n2)));
}
