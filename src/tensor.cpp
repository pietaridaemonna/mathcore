//
// Created by peterducai on 9/17/17.
//

#include "tensor.h"
#include <iostream>
#include <math.h>


Tensor::Tensor() {std::cout << "creating tensor" << std::endl;}
Tensor::~Tensor() {std::cout << "destroying tensor" << std::endl;}

int Tensor::get_rank(){
    std::cout << "rank of tensor" << std::endl;
}

int Tensor::num_of_elements() {
    int num = pow(3, order); return num;
}

void Tensor::inverse() { std::cout << "inverse tensor" << std::endl; }
void Tensor::transpose() { std::cout << "transposed tensor" << std::endl; }
