//
// Created by YuXiao on 9/7/18.
//
#include "function.h"
#include <stdio.h>

extern  int n_completion_status;
int main(){
    float x = 1.0;
    float y = 5.0;
    float z;
    z = add_and_multiply(x,y);
    printf("z: %lf n_completion_status:%d",z,n_completion_status);
    return 0;
}