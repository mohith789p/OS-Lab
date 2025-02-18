#include<stdio.h>
#include<stdlib.h>
#include<dirent.h>

int main(){
    char buff[100];
    DIR *folder;
    struct dirent *file;
    printf("Enter directory name: ");
    scanf("%s", buff);
    folder = opendir(buff);
    if(folder == NULL){
        printf("The given directory does not exist.");
        exit(1);
    }
    printf("Content in the directory %s:\n", buff);
    int i = 0;
    while((file = readdir(folder)) != NULL){
    if(i == 10)
    	break;
        printf("%s\n", file -> d_name);
        i++;
    }
    closedir(folder);
    return 0;
}
