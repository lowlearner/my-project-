//�Ĵ�������
#include <stdio.h>
/*���庯�������ݵĺ�*/ 
long sum(register int x,int n)
{
	
	long s;
	int i;
	register int t;//register���ؼ��֣������� �����������������������һ���Ĵ����� 
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

