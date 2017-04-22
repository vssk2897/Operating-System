#include<stdio.h>
#include<stdlib.h>

int main()
{
	int proc,reso,pro[5][5],res[5][5],i,j,row;
	static int flag,flag_res[5][5],flag_pro[5][5];
	printf("Enter the No. of processes : ");
	scanf("%d",&proc);
	printf("\nEnter the No. of resouces : ");
	scanf("%d",&reso);
	printf("\nEnter the process matrix : ");
	for(i=0;i<proc;i++)
	{
		printf("\n Process [%d] : ",i);
		for(j=0;j<reso;++j)
		{
			scanf("%d",&pro[i][j]);			
		}
	}
	printf("\nEnter the Resouce matrix");
	for(j=0;j<reso;j++)
	{
		printf("\nResource [%d] : ",j);
		for(i=0;i<proc;i++)
		{
			scanf("%d",&res[j][i]);
		}
	}
	row=0;
	for(j=0;j<reso;j++)
	{
		if(pro[row][j]==1)
		{
			if(flag_pro[row][j] >1 && flag==1)
			{
				printf("\n---------Deadlock Occurred---");
				exit(0);
			}
			flag_pro[row][j]++;
			row=j;
			break;
		}
		for(i=0;i<proc;i++)
		{
			if(res[row][i]==1)
			{
				if(flag_res[row][i]>1)
				{
					printf("\n------------DeadLock----------");
					exit(0);
				}
				flag_res[row][i]++;
				row=i;
				flag=1;
				break;
			}
		}
	}
	printf("\nNo Deadlock Occurred \n");
	return 0;
}
