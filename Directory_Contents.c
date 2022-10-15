#include <dirent.h>

#include <stdio.h>

int main()

{

    char path[100];

    

    printf("Enter the directory whose files are to be displayed:");

    scanf("%s",path);

    

    DIR *d = opendir(path);

    struct dirent *dir;

    

    if (d)

    {

         printf("\nThe contents in the given directory are:\n\n");

         

         while ((dir = readdir(d)) != NULL)

         {

            if(dir->d_type==DT_REG)

            {

                printf("%s\n",dir->d_name);

            }

         }

         closedir(d);

    }

    else

    {

        printf("Directory Not found!\n");

    }

    return 0;

}
