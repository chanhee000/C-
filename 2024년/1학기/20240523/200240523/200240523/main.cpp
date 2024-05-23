#include <stdio.h>

int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	int* p;

	p = a;
	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d \n\n", p[0], p[1], p[2]);

	p[0] = 60;
	p[1] = 70;
	p[2] = 80;

	printf("a[0]=%d a[1]=%d a[2]=%d \n", a[0], a[1], a[2]);
	printf("p[0]=%d p[1]=%d p[2]=%d \n", p[0], p[1], p[2]);
	return 0;
}


/*
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("a = %u\n", a);

	printf("a + 1 = %u\n", a + 1);

	printf("*a = %d\n", *a);

	printf("*(a+1) = %d\n", *(a + 1));

	return 0;
}
*/

/*
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };

	printf("&a[0] = %u\n", &a[0]);
	printf("&a[1] = %u\n", &a[1]);
	printf("&a[2] = %u\n", &a[2]);

	printf("a = %u\n", a);

	return 0;
}
*/

/*
void swap(int x, int y)
{
	int tmp;
	printf("x = % d y = % d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x = % d y = % d\n", x, y);
}

void swap(int x, int y);
int main(void)
{
	int a = 100, b = 200;
	printf("a = % d b = % d\n", a, b);

	swap(a, b);

	printf("a = % d b = % d\n", a, b);
	return 0;
}
*/

/*
int main(void)
{
	int data = 0x0A0B0C0D;
	char* pc;
	int i;

	pc = (char*)&data;
	for (i = 0; i < 4; i++)
		printf("*(pc + %d) = %02X \n", i, *(pc + i));
	return 0;
}
*/

/*
int main(void)
{
	int i = 10;
	int* pi = &i;

	printf("i = %d,  pi = %p\n", i, pi);

	(*pi)++;
	printf("i = %d,  pi = %p\n", i, pi);

	*pi++;
	printf("i = %d,  pi = %p\n", i, pi);
	return 0;
}
*/

/*
int main(void)
{
	char* pc;
	int* pi;
	double* pd;

	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	printf(" pc=%u,  pc+1=%u,  pc+2= %u\n", pc, pc + 1, pc + 2);
	printf(" pi=%u,  pi+1=%u,  pi+2= %u\n", pi, pi + 1, pi + 2);
	printf(" pd=%u,  pd+1=%u,  pd+2= %u\n", pd, pd + 1, pd + 2);

	return 0;
}
*/