//���庯��convertime(),������Ϊ��λ��ʱ��ת��Ϊʱ���� 
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
	convertime(seconds);//bug��convertimeȱr 
	printf("%2d:%2d��%2d\n",hh,mm,ss);
    g=getchar();
//	return 0; 
}
//ע�⣬����������в�Ҫ�������º���ǰ��һ�£��Ӷ��´� 

**************************************************************
*/
