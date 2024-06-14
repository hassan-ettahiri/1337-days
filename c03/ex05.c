#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcat(char *dest, char *src, unsigned int size){
    int i = 0,j=0;
    while(dest[i])i++;
    while(src[j] && i<size-1){
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return i;
}

int main(){
    char dest[50] = "Hello, ";
    char src[] = "world!";

    int result = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n",dest);
    printf("max size: %d\n", result);

}