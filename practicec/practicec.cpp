#include <stdio.h>
FILE * fin = fopen("input.txt", "r");
FILE * fout = fopen("output.txt", "w");
int main()
{	
	char c[81];
	fgets(c,81,fin);
	fputs(c,fout);
	fputc('\n',fout);
	fprintf(fout, "%s\n",c);
	fclose(fin);
	fclose(fout);
	return 0;
}