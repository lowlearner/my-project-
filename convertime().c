//定义函数convertime(),将以秒为单位的时间转化为时分秒 
/*   ************************************************   
#include<stdio.h>
   int hh,mm,ss;
 
 void convertime(long seconds)
{  // long seconds;
    hh = seconds/3600;
	mm=(seconds-hh*3600L)/60;
	ss=seconds-hh*3600L-mm*60;

}



//void convertime(long);

void main (void)
{   char g; 
	long seconds;
	printf("hh=%d,mm=%d,ss=%d\n",hh,mm,ss);
	printf("input a time in seconds");
	scanf ("%ld",&seconds);
	convertime(seconds);//bug：convertime缺r 
	printf("%2d:%2d：%2d\n",hh,mm,ss);
    g=getchar();
//	return 0; 
}
//注意，在输入过程中不要求快而导致函数前后不一致，从而致错 

**************************************************************
*/
