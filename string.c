#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void){
    printf("Name-Bibek Jaiswal\n");
    printf("USN-1AY23CS058\n");
    char*string=(char*)malloc(sizeof (char)*100);
    char*pattern=(char*)malloc(sizeof(char)*50);
    char*replace=(char*)malloc(sizeof(char)*50);
    if(string==NULL||pattern==NULL||replace==NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("enter string");
    scanf("%s",string);
    printf("enter pattern");
    scanf("%s",pattern);
    printf("enter the replacing string");
    scanf("%s",replace);
    
    int m,n,o,i,j;
    m=strlen(string);
    n=strlen(pattern);
    o=strlen(replace);
    int found=0;
    
    for(i=0;i<m-n+1;i++){
        for(j=0;j<n;j++){
            if(string[i+j]!=pattern[j]){
                break;
            }
        }
        if(j==n){
            printf("Pattern found at location%d\n",i+1);
            found=1;
            for(j=0;j<o;j++){
                string[i+j]=replace[j];
            }
            printf("string replaced\n");
            break;
        }
    }
    if(!found){
        printf("pattern not found in the string\n");
    }
    printf("The replaced string is %s\n",string);
    return 0;
}
