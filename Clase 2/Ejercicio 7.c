#include <stdio.h>

int main(){
    
    float *ptr_float;
    printf("El valor apuntado por ptr_float es %f",*ptr_float );
    //no da error pero tampoco da direccion
    *ptr_float=10.5;
    return 0;
}