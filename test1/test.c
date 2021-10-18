#include <stdio.h>
#include <string.h>
#include <dirent.h> 

void listFiles(char *path);

int main(int argc, char *path[])
{
    listFiles(path[1]);  
     
    return 0;
}
//user define function//
void listFiles(char *newPath)
{
    int count =0;
    char path[1000];
    struct dirent *dp;
    DIR *dir = opendir(newPath);
    // Unable to open directory stream
    if (!dir)
    
       return ;
      
       while ((dp = readdir(dir)) != NULL)
       {
          if (strcmp(dp->d_name, ".") != 0 && strcmp(dp->d_name, "..") != 0)
           {  
              printf("%zu) - %s\n",count+1, dp->d_name);
              count++;
                     
              strcpy(path, newPath);
              strcat(path, "/");
              strcat(path, dp->d_name);
             
              listFiles(path);
          }
    }
    
    closedir(dir);
     printf("\n Total files %d\n", count);

}
