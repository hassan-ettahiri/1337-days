#include <unistd.h>
#include <stdio.h>

char *ft_strstr(char *str, char *to_find){
    int i = 0,j = 0;
    int cpt = 0, len = 0;
    while(to_find[len])len++;
    while(str[i]){
        if(cpt == len-1){
            break;
        }
        if(str[i] == to_find[j]){
            cpt++;
            i++;
            j++;
        }else{
            j = 0;
            i++;
        }
    }
    if(cpt == len-1){
        return &str[i-cpt];
    }
    return NULL;
}

int main(){
    char haystack[] = "Hello, world!";
    char needle[] = "world";
    
    char *result = ft_strstr(haystack, needle);
    
    if (result) {
        printf("Substring found at position: %ld\n", result - haystack);
        printf("The substring is: %s\n", result);
    } else {
        printf("Substring not found.\n");
    }

}