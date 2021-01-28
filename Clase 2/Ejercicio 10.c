#include <stdio.h>



int main(){
    
    int a=10, b=15;
    int *const ptr=&a;//Ya no se podrá cambiar por ser constante
    *ptr=3;
    prt=&b;//no permite esto

    return 0;
}