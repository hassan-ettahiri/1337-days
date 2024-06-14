#include <unistd.h>
#include <stdio.h>

int ft_str_is_alpha(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char s1[] = "dezjhbflzbhe";
    if(ft_str_is_alpha(s1) == 1){
        printf("%s : is alpha",s1);
    }else{
        printf("%s : is not alpha",s1);
    }
}