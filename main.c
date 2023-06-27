#include <stdio.h>
#define INT_MAX 2147483647
#define INT_MIN (int)-2147483648

int main()
{
	int num;
	char a,b;
	if (b = getchar(), b == '-'){
		if (scanf("%11d", &num) == 1 && (a = getchar(), a == '\n') && (num > 0 || num == INT_MIN))			
    printf("OK! %d", num * -1);
	
		else printf("n/a %d %c", num,a);
	}
	
	else if (b >= '0' && b <= '9')
	{	
		if (scanf("%10d", &num) == 1 && (a = getchar(), a == '\n')){
			int i = 1;
			int tmp = num;
			for (; tmp != 0; tmp /= 10) i *= 10;
			num += (b - '0') * i;

			if (num > 0)
				printf("OK! %d", num);
			else printf("n/a %d", num);
			
		}
		else printf("n/a %d %c", num,a);

	}
	else printf("n/a");

	return 0;
}
