#include <unistd.h>
#include <stdio.h>

int ft_str_is_lowercase(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i]>='a' && str[i]<='z')){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char s1[] = "dezjhbflzbhe";
    if(ft_str_is_lowercase(s1) == 1){
        printf("%s : is lowercase",s1);
    }else{
        printf("%s : is not lowercase",s1);
    }
}