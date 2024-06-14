#include <unistd.h>
#include <stdio.h>

int ft_str_is_uppercase(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i]>='A' && str[i]<='Z')){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char s1[] = "JFJYHTFGH";
    if(ft_str_is_uppercase(s1) == 1){
        printf("%s : is uppercase",s1);
    }else{
        printf("%s : is not uppercase",s1);
    }
}