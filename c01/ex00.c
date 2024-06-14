#include <unistd.h>
#include <stdio.h>

void ft_ft(int *nbr){
    *nbr = 42;
}

int main(){
    int c;
    ft_ft(&c);
    printf("%d",c);
}