#include <unistd.h>
#include <stdio.h>

int ft_str_is_numeric(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i]>='0' && str[i]<='9')){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char s1[] = "46532";
    if(ft_str_is_numeric(s1) == 1){
        printf("%s : is number",s1);
    }else{
        printf("%s : is not number",s1);
    }
}