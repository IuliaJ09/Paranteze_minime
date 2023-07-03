#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	FILE* f, * g;
	int c,k=0,i,j;
	char ch[1000];
	f = fopen("in.txt", "rt");
	g = fopen("out.txt", "wt");
	while (!feof(f))
		fscanf(f, "%s", ch);
	for (i = 0; i < strlen(ch); i++)
	{
		c = ch[i] - '0';
		if (k == c)
			fprintf(g, "%c", ch[i]);
		
			if (k < c)
			{
				for (j = 0; j < c - k; j++)
				{
					fprintf(g, "(");
					
				}
				k = c;
				fprintf(g, "%c", ch[i]);
			}
			
		if (k > c)
		{
			for (j = 0; j < k - c; j++)
				fprintf(g, ")");
			fprintf(g, "%c", ch[i]);
			k = c;
		}
		
		   
	}

	while (k > 0)
	{
		fprintf(g, ")");
		k--;
	}
	printf("%s", ch);
	
	return 0;
}