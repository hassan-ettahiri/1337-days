#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    unsigned int i = 0;
    while(i<size-1 && src[i]){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    while(src[i]){
        i++;
    }
    return i;
}

int main(){
    char src[] = "Hello, world!";
    char dest[100];
    
    unsigned int length = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);
    printf("Length of source: %d\n", length);

    if (length <= sizeof(dest)) {
        printf("Warning: String was truncated!\n");
    }
}