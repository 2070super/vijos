#include<stdio.h> 
#include<string.h> 
int main()
{
	long a = 0, c, d, g, h, max = 0, j = 0;
	char b[10], f, e, k[10];
	scanf("%d", &a);
	for (int i = 0; i < a; i++)
	{
		h = 0;
		scanf("%s %d %d %c %c %d", &b, &c, &d, &e, &f, &g);
		if (c > 80 && g >= 1)
			h = h + 8000;
		if (c > 85 && d > 80)
			h = h + 4000;
		if (c > 90)
			h = h + 2000;
		if (c > 85 && f == 'Y')
			h = h + 1000;
		if (d > 80 && e == 'Y')
			h = h + 850;
		j = j + h;
		if (max < h)
		{
			max = h;
			strcpy(k, b);
		}
	}
	printf("%s\n", k);
	printf("%d\n%d\n", max, j);
}