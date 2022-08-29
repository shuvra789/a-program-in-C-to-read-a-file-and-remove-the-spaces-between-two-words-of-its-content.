#include<stdio.h>
#include<ctype.h>

int main()
{
	FILE * pfile;
	int a;
	pfile=fopen ("file.txt","r");
	printf(" The content of the file is :\n The quick brown fox jumps over the lazy dog\n");
	printf(" After removing the spaces the content is : \n");
	printf(" Thequickbrownfoxjumpsoverthelazydog\n");
	if (pfile)
	{
		do {
			a = fgetc (pfile);
			if ( isgraph(a) ) putchar (a);
		} while (a != EOF);
		fclose (pfile);
	}
	printf("\n\n");
	return 0;
}
