#include<stdio.h>
#include<string.h>

#define MAX 1024

int main(int argc, char *argv[]){
	FILE *fp;
	char fline[MAX];
	char *newline;
	int count = 0;
	int occurence = 0;
	
	if(argc != 3){
		printf("Usage: %s <filename> <word>\n", argv[0]);
		return 1;
	}
	fp = fopen(argv[1], "r");
	if(!fp){
		printf("Unable to open the file %s\n", argv[1]);
		return 1;
	}
	while(fgets(fline, MAX, fp)!= NULL){
		count ++;
		if((newline = strchr(fline,'\n')) != NULL){
			*newline = '\0';
		}
		
		if(strstr(fline, argv[2]) != NULL){
			printf("%s: %d %s\n", argv[1],count,fline);
			occurence++;
		}
	}
	if(occurence == 0){
		printf("Not Found the word %s\n", argv[2]);
	}
	fclose(fp);
	return 0;
}
