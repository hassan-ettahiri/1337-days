#include <unistd.h>
#include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb){
    int i = 0,j=0;
    while(dest[i])i++;
    while(j<nb){
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

    char *result = ft_strncat(dest, src, 3);

    printf("Concatenated string: %s\n", result);

}