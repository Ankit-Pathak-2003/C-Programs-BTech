/* to  find roots of a quadratic equation in form of Ax2+Bx+C=0 when D>=0*/
#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,d,r1,r2;
	scanf("%lf%lf%lf",&a,&b,&c);/*input the coefficients i.e. a,b,c*/
	d=pow(b,2)-4*(a*c);/*define the discriminant (should be greater than Zero)*/
	/*checks if D<0*/
	if (d<0){
		printf("error\n");	
	}
	/*prints roots if D>=0*/
	else{
	r1=(-1*(b)+sqrt(d))/(2*a);/*root1*/
	r2=(-1*(b)-sqrt(d))/(2*a);/*root2*/
	printf("Roots are:");
	printf("%lf \n", r1);
	printf("%lf \n",r2);	
	}
	return 0;
			
}
