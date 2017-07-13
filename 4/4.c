#include <stdio.h>

int main()
{
		int  year,month,day,flag,sum;

		printf("please input:year month day\n");
		scanf("%d %d %d",&year,&month,&day);
		while(getchar()!='\n');
		switch(month) // 先计算某月以前月份的总天数 
		{
		case 1:sum=0;break;
		case 2:sum=31;break; 
		case 3:sum=59;break; 
		case 4:sum=90;break; 
		case 5:sum=120;break; 
		case 6:sum=151;break; 
		case 7:sum=181;break; 
		case 8:sum=212;break; 
		case 9:sum=243;break; 
		case 10:sum=273;break; 
		case 11:sum=304;break; 
		case 12:sum=334;break; 
		default:printf("data error");break; 
		}
		sum=sum+day;
		if((0==year%4)&&(year%400!=0))
		{
				flag=1;
		}else{
				flag=0;
		}
        if(1==flag&&2<month)
		{
				sum++;
		}
		printf("this is the %dth day in %d-%d-%d\n",sum,year,month,day);

		return 0;
}
