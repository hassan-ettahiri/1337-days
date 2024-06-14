#include <unistd.h>
#include <stdio.h>

char *ft_strcat(char *dest, char *src){
    int i = 0,j=0;
    while(dest[i])i++;
    while(src[j]){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return dest;
}

int main(){
    char dest[50] = "Hello, ";
    char src[] = "world!";

    char *result = ft_strcat(dest, src);

    printf("Concatenated string: %s\n", result);

}