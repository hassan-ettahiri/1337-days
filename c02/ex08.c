#include <unistd.h>
#include <stdio.h>

char *ft_strlowcase(char *str){
    int i = 0;
    while(str[i]){
        if(str[i]>='A' && str[i]<='Z'){
            str[i] = str[i] + ('a'- 'A');
        }
        i++;
    }
    return str;
}

int main(){
    char s1[] = "JGKhfrejhHGFVHG";
    printf("%s ",s1);
    char *result = ft_strlowcase(s1);
    printf("to uppercase: %s",result);
}