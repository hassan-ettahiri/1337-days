#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str){
    int i = 0,tab[20],neg_sign = 0,flag=0,num=0;
    while(str[i]){
        if(str[i]== ' '){
        }else if(str[i] == '-' && flag == 0)neg_sign++;
        else if(str[i] >= '0' && str[i]<='9'){
            num=num*10+(str[i]-'0');
            flag = 1;
        }else if(str[i] == '+' && flag == 0){

        }else{
            break;
        }
        i++;
    }
    if(neg_sign%2 != 0){
        num*=(-1);
    }
    return num;
}

int main(){
    char s[] = "-a56ab567";
    printf("%d",ft_atoi(s));
}