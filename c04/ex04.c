#include <unistd.h>
#include <stdio.h>

void ft_putnbr_base(int nbr, char *base){
    int tab[100];
    int len = 0, j = 0, flag = 0;
    if(nbr<0){
        nbr*=-1;
        write(1,"-",1);
    }
    while(base[len]){
        int d = len+1;
        while(base[d]){
            if(base[d] == base[len])flag = 1;
            d++;
        }
        if(base[len] == '+' || base[len] == '-')flag = 1;
        len++;
    }
    if(len <= 1)flag = 1;
    if(flag == 0){
        while(nbr!=0){
            tab[j] = base[(nbr%len)];
            nbr/=len;
            j++;
        }
        int k = j-1;
        while(k>=0){
            write(1,&tab[k],1);
            k--;
        }
    }
}

int main(){
    char base[] = "0123456789ABCDEF";
    int nbr = -255;
    ft_putnbr_base(nbr,base);
}