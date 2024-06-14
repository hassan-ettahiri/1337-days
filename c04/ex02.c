#include <unistd.h>

void ft_putnbr(int nb){
    int tab[100];
    int i = 0;
    while(nb){
        tab[i] = nb%10;
        nb=nb/10;
        i++;
    }
    int j = i-1;
    while(j>=0){
        int val = tab[j] + '0';
        write(1,&val,1);
        j--;
    }
}

int main(){
    ft_putnbr(42);
}