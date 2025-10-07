#include<stdio.h>
int main()
{
	int a = 1;
	do
	{
		if (a % 2 == 0)
        {
            printf("%d par\n", a);
        }
        else
        {
            printf("%d impar\n", a);
        }
        a++;
	}
	while(a<=20);
	return 0;
}