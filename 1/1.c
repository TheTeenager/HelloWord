#include <stdio.h>

int main()
{
		int i,j,k;
		int sum;

		for(i=1;i<5;i++)
		{
				for(j=1;j<5;j++)
				{
						for(k=1;k<5;k++)
						{
								if(i!=j&&i!=k&&j!=k)
								{
										sum=100*i+10*j+k;
										printf("%d\n",sum);
								}
						}
				}
		}


		return 0;
}
