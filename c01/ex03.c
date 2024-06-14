#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a/b;
    *mod = a%b; 
}

int main(){
    int a = 150,b = 12, div, mod;
    ft_div_mod(a,b,&div,&mod);
    printf("%d/%d = %d\n%d%%%d = %d",a,b,div,a,b,mod);
}