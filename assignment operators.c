/*to implement assignment operators such as -=,+=,*=,/=,%= in a program*/
#include<stdio.h>
int main(){
	int a=10,b=20,c=30,d=40,e=50;
	printf("Original Numbers:\n");
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	a+=10;
	b-=5;
	c*=2;
	d/=5;
	e%=19;
	printf("New numbers Are:\n");
	printf("%d\n",a);
	printf("%d\n",b);
	printf("%d\n",c);
	printf("%d\n",d);
	printf("%d\n",e);
	return 0;
}
