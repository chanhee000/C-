#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main(void)
{
	int x = 10, y = 20;
	int* p;

	p = &x;
	printf("p = %p\n", p);
	printf("p = %u\n\n", *p);

	p = &y;
	printf("p = %p\n", p);
	printf("p = %u\n", *p);

	return 0;
}

/*
int main(void)
{
	int i = 3000;
	int* p = NULL;

	p = &i;
	printf("p = %p\n", p);
	printf("&i = %p\n", &i);
	printf("p = %p\n", p);
	printf("i = %p\n", i);


}
*/


/*
int main(void)
{
	int i = 10;
	int j = 20;

	int* p;
	p = &i;
	printf("%d \n", *p);

	p = &j;
	printf("%d \n", *p);
}
*/

/*
int main(void)
{
	int i = 10;
	double f = 12.3;
	int* pi = NULL;

	double*pf = NULL;
	pi = &i;
	pf = &f;

	printf("%p %p \n",pf , &i);
	printf("%p %p \n", pf, &f);

	return 0;
}
*/


/*
int main(void)
{
	int i = 10;
	char c = 69;
	float f = 12.3;


	printf("I狼 林家 : %p\n", &i);
	printf("c狼 林家 : %p\n", &c);
	printf("f狼 林家 : %p\n", &f);

}
*/
