#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char s1[100]={'\0'},s2[100]={'\0'};
    gets(s1);
    int i=0;
    int lenth=strlen(s1);
    for(i=lenth-1;i>=0;i--){
        s2[lenth-i-1]=s1[i];
    }
    if(strcmp(s1,s2)==0){
        printf("是回文");
    }
    else{
        printf("不是回文");
    }
}