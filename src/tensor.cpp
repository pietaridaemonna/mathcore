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



/* The trace of a matrix is the sum of the diagonal elements */
/* gives products of vectors, matrices, and tensors */
/* The result of applying Dot to two tensors  and  is the tensor .
 Applying Dot to a rank  tensor and a rank  tensor gives a rank  tensor. */

/* gives the d-dimensional Levi-Civita totally
antisymmetric tensor. gives a rank-d tensor with length d in each dimension. */
/* gives the Hodge dual of the tensor */

/*
Tensors of rank 2 or higher that arise in applications usually have symmetries
under exchange of their slots. For example, the inertia tensor,
the stress-energy tensor, or the Ricci curvature tensor are
rank-2 fully symmetric tensors; the electromagnetic tensor is a rank-2 antisymmetric
tensor; and the Riemann curvature tensor and the stiffness tensor
are rank-4 tensors with nontrival symmetries. 
*/
