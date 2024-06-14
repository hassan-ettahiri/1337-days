#include <unistd.h>
#include <stdio.h>

char *ft_strupcase(char *str){
    int i = 0;
    while(str[i]){
        if(str[i]>='a' && str[i]<='z'){
            str[i] = str[i] - ('a'- 'A');
        }
        i++;
    }
    return str;
}

int main(){
    char s1[] = "dezjhbflzbhe";
    printf("%s ",s1);
    char *result = ft_strupcase(s1);
    printf("to uppercase: %s",result);
}