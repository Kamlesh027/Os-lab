#include<stdio.h>
#include<string.h>
#define max 1024

void usage()
{
    printf("usage:\t./a.out filename word \n ");
}

int main(int argc, char *argv[])
{
    FILE *fp;
    char fline[max];
    char *newline;
    int occurrences=0;
    int count=0;

    if(argc!=3)
        usage();
    // Missing 'exit(1)' here.

    if(!(fp=fopen(argv[1],"r")))
    {
        printf("grep: could not open file: %s \n", argv[1]);
        // Missing 'exit(1)' here.
    }

    while(fgets(fline,max,fp)!=NULL)
    {
        count++;

        // There's a syntax error in the next line. It should be 'if (newline = strchr(fline, '\n'))' instead of 'if (newline strchr(fline, \n"))'.
        if ((newline = strchr(fline, '\n')))
            *newline = '\0';

        if(strstr(fline, argv[2]) != NULL)
        {
            printf("%s:%d: %s\n", argv[1], count, fline);
            occurrences++;
        }
    }

    fclose(fp); // You should close the file after using it.

    return 0; // Add 'return 0' to indicate successful program execution.
}
