#include <unistd.h>
#include <stdio.h>
#include <string.h>

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(*(src+i) != '\0'){
        *(dest+i) = *(src+i);
        i++;
    }
    *(dest+i) = '\0';
    return dest;
}

int main(){
    char s1[] = "dez;jhbflzbhe";
    char s2[500];
    printf("s1 : %s\ns2 : ",s1);
    char *result = ft_strcpy(s2,s1);
    int i = 0;
    while(result[i]){
        printf("%c",result[i]);
        i++;
    }
}