#include <unistd.h>
#include <stdio.h>

int ft_putstr(char *str){
    int i = 0;
    while(str[i]){
        write(1,&str[i],1);
        i++;
    }
    return i;
}

int main(){
    char s[] = "apple";
    ft_putstr(s);
}