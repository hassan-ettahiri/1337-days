#include <unistd.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src,unsigned int n){
    int i = 0;
    while(i<n){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int main(){
    char s1[] = "dez;jhbflzbhe";
    char s2[100];
    printf("s1 : %s\ns2 : ",s1);
    char *result = ft_strncpy(s2,s1,6);
    int i = 0;
    while(result[i]){
        printf("%c",result[i]);
        i++;
    }
}