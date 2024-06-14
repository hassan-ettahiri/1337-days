#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2){
    int i = 0;
    while(s1[i] || s2[i]){
        if(!(s1[i] == s2[i])){
            return s1[i]-s2[i];
        }
        i++;
    }
    return 0;
}

int main(){
    char s1[] = "orange";
    char s2[] = "apple";
    int res = ft_strcmp(s1,s2);
    printf("%d",res);
}