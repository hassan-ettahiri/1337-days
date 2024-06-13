#include <unistd.h>

void ft_putchar(int c){
    write(1, &c, 1);
}

void ft_putnbr(int nb){
    int cpt = 0;
    if(nb < 0){
        nb = nb*(-1);
        ft_putchar('-');
    }
    int i = nb;
    while(i > 9){
        cpt++;
        i/=10;
    }
    int num=nb;
    while(cpt >= 0){
        int j=cpt;
        int cpt1 = 1;
        int num1 = num;
        while(j > 0){
            num1/=10;
            j--;
            cpt1*=10;
        }
        ft_putchar(num1+48);
        num%=cpt1;
        cpt--;
    }
}


void ft_print_combn(int n){

    int lenght = 1;
    int nbr = n;
    for(int i = 0; i<n ; i++){
        lenght*=10;
    }
    lenght-=1;

    for(int i = 1; i <= lenght; i++){
        int cpt = n-1;
        int len = i;
        int boolean = 0;
        while(len / 10 != 0){
            cpt--;
            len/=10;
        }
        len = i;
        while(len / 10 != 0){
            if((len%10) > ((len/10)%10)){
                len/=10;
            }else{
                boolean = 1;
                len/=10;
            }
        }
        if( boolean == 0 ){
            for(int j = 0; j<cpt ; j++){
                ft_putchar('0');
            }

            ft_putnbr(i);
            int k = 9;
            len  = i;
            int j = 0;
            while(j < n){
                if((len%10) == k){
                    k--;
                    len/=10;
                    j++;
                }else{
                    boolean =1;
                    break;
                }
            }
            if(boolean == 1){
                ft_putchar(',');
                ft_putchar(' ');
            }

        }
    }
}


int main() {
    ft_print_combn(2);
    return 0;
}
