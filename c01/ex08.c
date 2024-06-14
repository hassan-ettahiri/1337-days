#include <unistd.h>
#include <stdio.h>

void ft_sort_int_tab(int *tab, int size){
    int i = 0,j;
    while(i<size-1){
        j = i+1;
        while(j<size){
            if(tab[i]>tab[j]){
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(){
    int tab[10] = {1,3,2,9,5,7,6,8,4};
    printf("before: \n");
    for(int i = 0;i<9;i++){
        printf("%d\t",tab[i]);
    }
    printf("\n");
    printf("after: \n");
    ft_sort_int_tab(tab,9);
    for(int i = 0;i<9;i++){
        printf("%d\t",tab[i]);
    }
}