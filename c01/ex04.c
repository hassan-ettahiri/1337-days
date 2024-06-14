#include <unistd.h>
#include <stdio.h>

void ft_div_mod(int *a, int *b){
    int temp = *a;
    *a = *a/(*b);
    *b = temp%(*b); 
}

int main(){
    int a = 1570002,b = 13;
    printf("a = %d, b = %d\n",a,b);
    do{
        ft_div_mod(&a,&b);
        printf("a = %d, b = %d\n",a,b);
    }while(b != 0);
}