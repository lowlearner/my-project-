#include<stdio.h>
#include<math.h>
double f(double a, double b,double c,double d,double x)
{
return a*x*x*x+b*x*x+c*x+d;
}
double df(double a, double b,double c,double x)
{
return 3*a*x*x+2*b*x+c;
}
double Newton(double a,double b,double c,double d,double x0, double eps)
{
double x=x0, t;
do
{
    t= f (a,b,c,d,x)/df(a,b,c,x);
    x=x0-t;
    x0=x;}while(fabs(t)>=eps);
    return x;
}
int main ()
{
    double a, double b,double c,double d,double eps;
    printf ("\nInput a,b,c,d,eps\n");
    scanf("%lf%lf%lf%lf%lf",&a,&b,&c,&d,&eps);
    printf("\nx=%10.7f\n",Newton(a,b,c,d,1,eps));
    return 0;
}
    


