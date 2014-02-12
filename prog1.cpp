#include<stdio.h>
int main(void)
{
	char a;
	int check,i=0;
	FILE *testfile;
	testfile=fopen("prog1.txt","w");
	fprintf(testfile,"hi this is my prog1 in c");
	fclose(testfile);
	testfile=fopen("prog1.txt","r");
	if(testfile==NULL)
	{
		printf("invalid file\n");
		return 0;
	}
	do
	{
		check=fscanf(testfile,"%c",&a);
		if((check!=EOF) && (check>0))
		printf("%c",a);
			
	}
	while((check!=EOF) && (check>0));
	fclose(testfile);

		return 0;
}