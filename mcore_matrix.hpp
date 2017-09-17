#ifndef MCORE_MATRIX_H
#define MCORE_MATRIX_H

enum indices {
    int indi;
    string descr;
}

class Tensor {
public:
    Tensor();

    int order;
    indices upper;
    indices lower;
    
    int num_of_elements() {return pow(3, order);}
    void inverse() {}
    void transpose() {}
};




// g        - a metric tensor
// h        - the inverse of a metric tensor
// T        - a tensor
// Indices  - a list of integers, referring to the arguments of T

// metric tensor 
// g is a symmetric, covariant, rank 2, non-degenerate tensor. 
// The inverse of g is a symmetric, contravariant, rank 2 non-degenerate tensor.




//
// a tensor with rank r+s may be of mixed type (r,s), consisting of r 
// so-called "contravariant" (upper) indices - column vector - ket
// and s "covariant" (lower) indices. - row vector - bra
//





// While the distinction between covariant and contravariant indices must be made
// for general tensors, the two are equivalent for tensors in three-dimensional
// Euclidean space, and such tensors are known as Cartesian tensors.

// Objects that transform like zeroth-rank tensors are called scalars,
// those that transform like first-rank tensors are called vectors,
// and those that transform like second-rank tensors are called matrices.
// In tensor notation, a vector v would be written v_i, where i=1, ..., m,
// and matrix is a tensor of type (1,1), which would be written a_i^j in tensor notation.

// Tensors may be operated on by other tensors (such as metric tensors, the permutation tensor,
// or the Kronecker delta) or by tensor operators (such as the covariant derivative).
// The manipulation of tensor indices to produce identities or to simplify expressions
// is known as index gymnastics, which includes index lowering and index raising as special cases.
// These can be achieved through multiplication by a so-called metric tensor g_(ij), g^(ij), g_i^j, etc., e.g.,



// jcobi tensor J_(nualphabeta)^mu=J_(nubetaalpha)^mu=1/2(R_(alphanubeta)^mu+R_(betanualpha)^mu), 
// where R is the Riemann tensor.

// Tensors are generalizations of scalars (that have no indices), 
// vectors (that have exactly one index), and matrices (that have exactly two indices)
// to an arbitrary number of indices.
// A scalar is a tensor of zero order and a vector is a tensor of first order. 
// The order of the tensor determines the number of elements present 
// in it(3n elements where n is the order).



// Object scalar = {0.43f, 10}; //One Object, with first=0.43f and second=10
// Object anArray[] = {{13.4f, 3}, {43.28f, 29}, {5.934f, 17}}; //An array of three Objects

struct VectorSpace {
    int order;
};

#endif