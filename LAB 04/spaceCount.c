#include<stdio.h>

int main(int argc, char* argv[]){
	FILE *fp;
	char ch;
	int sc = 0;
	
	if(argc != 2){
		printf("Usage: %s <filename>\n", argv[0]);
		return 1;
	}
	fp = fopen(argv[1], "r");
	if(fp == NULL){
		printf("Unable to open the file %s\n", argv[1]);
	} else {
		while((ch = fgetc(fp)) != EOF){
			if(ch == ' '){
				sc++;
			}
		}
		printf("Number of spaces: %d\n",sc);
		fclose(fp);
	}
	return 0;
}
