#include<stdio.h>
int abso(int x,int y)
{
	if(x>=y)
		return x-y;
	return y-x;	
}
int main()
{
	int i,a[50],n,diff,seek=0;
	printf("\nEnter the position of the head : ");
	scanf("%d",&a[0]);
	printf("Enter the no. of inputs you want to enter : ");
	scanf("%d",&n);	
	printf("\nEnter the elements of the queue : ");
	for(i=1;i<=n;++i)
	{
		printf("\n\tElement [%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n");
	for(i=0;i<n;++i)
	{
		diff=abso(a[i],a[i+1]);
		seek+=diff;
		printf("%d ->",a[i]);
	}
	printf("\nThe Average seek time is %f\n",seek/(float)(n+1));
	return 0;
}
