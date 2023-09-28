#include <stdio.h>
#include <dirent.h>

main(int argc, char **argv)
{
    DIR *dp;
    struct dirent *link;

    // Open the directory specified as a command-line argument
    dp = opendir(argv[1]);

    // Print a message with the directory name
    printf("\nContents of the directory %s are:\n", argv[1]);

    // Loop to read and print the names of files and subdirectories
    while ((link = readdir(dp)) != 0)
    {
        printf("%s", link->d_name);
    }

    // Close the directory
    closedir(dp);
}


