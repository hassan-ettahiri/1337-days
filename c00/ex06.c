#include <unistd.h>

void ft_print_comb2(void){
    int a = '0',b,c,d;
    while(a <= '9'){
        b = '0';
        while(b <= '8'){
            c = a;
            while(c <= '9'){
                d = b + 1;
                while(d <= '9'){
                    write(1,&a,1);
                    write(1,&b,1);
                    write(1," ",1);
                    write(1,&c,1);
                    write(1,&d,1);
                    if(a != '9' || b != '8')write(1,", ",2);
                    d++;
                }
                c++;
            }
            b++;
        }
        a++;
    }
}

int main(){
    ft_print_comb2();
}