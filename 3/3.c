#include <stdio.h>

int main()
{
		int i,j;
		int m,n,x;

		for(i=2;i<=(168/2);i++)
				if(168%i==0)
				{
						j=168/i;
						if((i>j)&&(i+j)%2==0&&(i-j)%2==0)
						{
								m=(i+j)/2;
								n=(i-j)/2;
								x=n*n-100;
								printf("%d+100=%d*%d,%d+100+168=%d*%d\n",x,n,n,x,m,m);

						}
				}

		return 0;
}
