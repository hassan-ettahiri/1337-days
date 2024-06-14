#include <unistd.h>
#include <stdio.h>
#include <string.h>

void ft_putstr_non_printable(char *str){
    int i = 0;
    while(str[i]){
        if(str[i] <= 31){
            char c = str[i];
            int k = c;
            char res[4];
            if(k/16<10)res[0] = k/16+'0';
            else res[0] = (k/16)%10+'a';
            if(k%16<10)res[1] = k%16+'0';
            else res[1] = (k%16)%10+'a';
            write(1,"\\",1);
            write(1,&res[0],1);
            write(1,&res[1],1);
        }else{
            write(1,&str[i],1);
        }
        i++;
    }
}

int main(){
    char string[] = "Coucou\ntu vas bien ?";
    ft_putstr_non_printable(string);
}