#include<stdio.h>
int abso(int x,int y)
{
	if(x>=y)
		return x-y;
	return y-x;	
}
int main()
{
	int i,j,max,a[50],b[50],n,diff,seek=0,k=0,t,s,loc;
	printf("\nEnter the position of the head : ");
	scanf("%d",&s);
	a[0]=s;
	printf("Enter the no. of inputs you want to enter : ");
	scanf("%d",&n);	
	printf("\nEnter the elements of the queue : ");
	for(i=1;i<=n;++i)
	{
		printf("\n\tElement [%d] : ",i);
		scanf("%d",&a[i]);
	}
	//Bubble sort
	for(i=0;i<n;++i)
	{
		for(j=i+1;j<=n;++j)
		{
			if(a[j]<a[i])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
 	max=a[n];
 	//searching for head
 	for(i=0;i<=n;++i)
 	{
 		if(s==a[i])
 		{
 			loc=i;
 		}
 	}
 	printf("\n");
 	//Going head to 0
 	for(i=loc;i>=1;--i)
 	{
 		diff=abso(a[i],a[i-1]);
 		seek+=diff;
 		printf("%d ->",a[i]);
 	}
 	printf("%d -> 0 ->",a[0]);
 	for(i=loc+1;i<=n;++i)
 	{
 		diff=abso(a[i],a[i+1]);
 		seek+=diff;
 		printf("%d ->",a[i]);
 	}
 	printf("1000");
 	printf("\nAverage seek time is %f\n",seek/(float)(n+1));
	return 0;
}
