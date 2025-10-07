#include<stdio.h>
int main ()
{
	int a;
	for(a=1;a<=20;a++)
	{
		 if (a % 2 == 0)
        {
            printf("%d par\n", a);
        }
        else
        {
            printf("%d impar\n", a);
        }
	}
	return 0;
}