#include <unistd.h>
#include <stdio.h>

void ft_swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a = 2,b = 3;
    printf("a = %d , b = %d\n",a,b);
    ft_swap(&a,&b);
    printf("a = %d , b = %d",a,b);
}