/* to  find greatest of 3 numbers using 1) if else and 2) ternary operator*/
#include <stdio.h>
int main()
{
	int a,b,c; /*defines 3 integer variables*/
	scanf("%d %d %d \n", &a, &b, &c);/*asks for input to assign values to the defined variables*/
/*following if-elif-else ladder allows to sort three variables in ascending order*/
	if (a>b && b>c){
		printf("%d %d %d \n", a,b,c);
		}
	else if (a>b && c>b){
		printf("%d %d %d \n", a,c,b);	
	}
	else if (b>a && c>b){
		printf("%d %d %d \n", c,b,a);	
	}
	else if (b>a && a>c){
		printf("%d %d %d \n", b,a,c);	
	}
	else if (c>a && a>b){
		printf("%d %d %d \n", c,a,b);	
	}
	else if (b>c && c>a){
		printf("%d %d %d \n", b,c,a);	
	}
	else/*an error will be shown if none of cases are applicable*/
	{
		printf("error");
	}
	/*end result: three numbers will be printed in ascdending order starting with greatest to smallest*/
	return 0;
			
}
