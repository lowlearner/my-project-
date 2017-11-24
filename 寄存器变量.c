//寄存器变量
#include <stdio.h>
/*定义函数：求幂的和*/ 
long sum(register int x,int n)
{
	
	long s;
	int i;
	register int t;//register：关键字，其作用 是请求编译器将变量保存在一个寄存器中 
	t=s=x;
	for (i=2;i<=n;i++)
	{
		t*=x;
		s+=t;
	} 
	return(s);
} 
int main()
 {
 	int x,n;
 	printf("Input x,n:");
 	scanf("%d%d",&x,&n);
 	printf("s=%ld\n",sum(x,n));
   return 0;
 } 

