#include <dirent.h>
#include <stdio.h>
#include <string.h>



int main(int argc, char* path[])
{
    DIR *d;
    struct dirent *dir;
    d = opendir(path[1]);
    int count = 0;
    if (d)
    {
        while ((dir = readdir(d)) != NULL)
        {
        	if(strcmp(dir->d_name, ".") != 0 && strcmp(dir->d_name, "..") != 0)
		{
			printf("%s\n", dir->d_name);
			count++;
		}
       }
       closedir(d);
    }
    printf("\nTotal %d files found\n",count);
    return(0);
}
