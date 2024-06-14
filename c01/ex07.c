#include <unistd.h>
#include <stdio.h>

void ft_rev_int_tab(int *tab, int size){
    int i = 0,j = size-1;
    while(i<j){
        int temp = tab[i];
        tab[i] = tab[j];
        tab[j] = temp;
        i++;
        j--;
    }
}

int main(){
    int tab[10] = {1,2,3,4,5,6,7,8,9};
    printf("before: \n");
    for(int i = 0;i<9;i++){
        printf("%d\t",tab[i]);
    }
    printf("\n");
    printf("after: \n");
    ft_rev_int_tab(tab,9);
    for(int i = 0;i<9;i++){
        printf("%d\t",tab[i]);
    }
}