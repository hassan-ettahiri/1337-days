#include <unistd.h>
#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n){
    int i = 0;
    while(i<n){
        if(!(s1[i] == s2[i])){
            return s1[i]-s2[i];
        }
        i++;
    }
    return 0;
}

int main(){
    char s1[] = "appleferlflkerhlfe";
    char s2[] = "appleferlkfnlernjlfrn";
    int res = ft_strncmp(s1,s2,10);
    printf("%d",res);
}