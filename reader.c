#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE* fp;
    fp = fopen("textfile.txt","r");
    if(fp==NULL){
        printf("the file is not opened");
	exit(0);
    }
    char content[200];
    fgets(content,200,fp);
    printf("%s",content);
    fclose(fp);
    fp=fopen("writefile.txt","w");
    fputs("written text",fp);
    fclose(fp);
    return 0;
}


