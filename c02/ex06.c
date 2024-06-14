#include <unistd.h>
#include <stdio.h>

int ft_str_is_printable(char *str){
    int i = 0;
    while(str[i]){
        if(!(str[i]>=32 && str[i]<=126)){
            return 0;
        }
        i++;
    }
    return 1;
}

int main(){
    char s1[] = "dezjhbflzbhe";
    if(ft_str_is_printable(s1) == 1){
        printf("%s : is printable",s1);
    }else{
        printf("%s : is not printable",s1);
    }
}