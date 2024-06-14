#include <unistd.h>
#include <stdio.h>

char *ft_strcapitalize(char *str){
    int i = 0;
    while(str[i]){
        if(str[i]>='a' && str[i]<='z' && !(str[i-1]>='A' && str[i-1]<='Z' || str[i-1]>='a' && str[i-1]<='z') ){
            if(!(str[i-1]>='0' && str[i-1]<='9')){
                str[i] = str[i] - ('a'- 'A');
            }
        }
        i++;
    }
    return str;
}

int main(){
    char s1[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    printf("%s \n",s1);
    char *result = ft_strcapitalize(s1);
    printf("%s",result);
}