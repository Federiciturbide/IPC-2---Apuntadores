#include <stdio.h>

int main(){
    
    int *ptr_int;
    float *ptr_float;
    int value;
    ptr_int = &value;
    ptr_float = &value;//No funciona por diferente tipo de datos
    return 0;
}