//
// Created by YuXiao on 9/7/18.
//

#include "function.h"

int n_completion_status =10;

float add(float x, float y){
    float z = x+y;
    return z;
}

float add_and_multiply(float x, float y){
    float z = add(x,y);
    z*= MUTIPLIER;
    return z;
}