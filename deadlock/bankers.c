#include<stdio.h>
int main()
{
	int allocation[10][5],claim[10][5],need[10][5],available[3],flag[10],sq[10];
	int n,r,i,j,k,count,com=0;
	printf("\n Input the number of processes : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	    flag[i]=0;
	printf("\n Input the number of resources : ");
	scanf("%d",&r);
	printf("\nEnter allocation matrix \n");
	for(i=0;i<n;i++)
	{
	    printf("\n Process %d ",i);
	    for(j=0;j<r;j++)
	    {
	        scanf("%d",&allocation[i][j]);
	    }
	}
	printf("\nEnter claim Matrix\n");
	for(i=0;i<n;i++)
	{
	    printf("\n Process %d ",i);
	    for(j=0;j<r;j++)
	    {
	        scanf("%d",&claim[i][j]);
	    }
	}
	printf("\n Input the no. of available instances of each resource..\n");
	for(j=0;j<r;j++)
	{
	    printf("\n Resource %d : ",i);
	    scanf("%d",&available[i]);
	}
	//Need matrix
	printf("\nThe need Matrix is ");
	for(i=0;i<n;++i)
	{
		printf("\n");
		for(j=0;j<r;++j)
		{
			need[i][j]=claim[i][j]-allocation[i][j];
			printf("%d ",need[i][j]);
		}
	}
	//Checking the safety
	do
	{
		for(k=0;k<n;++k)
		{
			for(i=0;i<n;++i)
			{
				if(flag[i]!=1)
				{
					count=0;
					for(j=0;j<r;++j)
					{
						if(available[j]>=need[i][j])
							count++;
					}
					if(count==r)
					{
						com++;
						sq[com-1]=i;
						printf("\nProcess %d completes",i);
						for(j=0;j<r;++j)
						{
							available[j]+=allocation[i][j];
						}
					}
				}
			}
		}
		if(com!=n)
		{
			printf("\n---------The System is in Unsafe State--------------\n -----------Deadlock------------\n");
			break;
		}
	
	}while(com!=n);
	if(com==n)
	{
		printf("\n-------The System is in safe state---------- \nThe safe sequence is \n");
		for(i=0;i<n;++i)
		{
			printf("\nProcess [%d]",sq[i]);
		}
		printf("\nAvailability matrix\n");
		for(j=0;j<r;j++)
		{
			printf("%d ",available[j]);
		}
		
	}
return 0;
}
