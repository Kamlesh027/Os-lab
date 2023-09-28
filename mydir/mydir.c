#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>

int main(int argc, char *argv[])
{
    char buff[100];
    DIR *dirp;

    printf("\n\n ENTER DIRECTORY NAME: ");
    scanf("%s", buff);

    // Check if the directory can be opened
    if ((dirp = opendir(buff)) == NULL)
    {
        printf("The given directory does not exist or cannot be opened.\n");
        exit(1);
    }

    struct dirent *dptr;

    // Loop to read and print directory entries
    while ((dptr = readdir(dirp)) != NULL)
    {
        printf("%s\n", dptr->d_name);
    }

    // Close the directory
    closedir(dirp);

    return 0; // Return 0 to indicate successful execution
}
