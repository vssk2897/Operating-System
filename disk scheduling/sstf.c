#include<stdio.h>
int abso(int x,int y)
{
	if(x>=y)
		return x-y;
	return y-x;	
}
int main()
{
	int i,j,x,a[50],b[50],n,diff,seek=0,k=0,t,s;
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
	b[k++]=a[0];
	for(i=0;i<=n;++i)
	{
		s=1000;
		for(j=i+1;j<=n;++j)
		{
			diff=abso(a[i],a[j]);
			if(diff<s)
			{
				s=diff;
				x=j;
			}
		}
		seek+=s;
		b[k++]=a[x];
		t=a[i+1];
		a[i+1]=a[x];
		a[x]=t;
	}
	printf("\n");
	for(i=0;i<n;++i)
	{
		printf("%d -> ",b[i]);
	}
	printf("\nAverage seek time is %f\n",seek/(float)(n+1));
	return 0;
}
