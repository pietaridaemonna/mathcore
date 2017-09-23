#ifndef MCORE_MATRIX_H
#define MCORE_MATRIX_H

#include <stdlib.h>
#include <math.h>

enum indices {
    int indi;
    string descr;
};

//TODO: check
//All matrices are not tensors, although all tensors of rank 2 are matrices.!!!
//Tensor must follow the conversion(transformation) rules, but matrices generally are not.

class Tensor {
public:
    Tensor();
    int upper_indices[22];
    int lower_indices[22];

    int order; // TODO: Rank?
    indices upper;
    indices lower;
    
    int num_of_elements() {return pow(3, order);}
    void inverse() {}
    void transpose() {}
    void eigenvalues() {} //TODO:

    bool is_toeplitz() {} // matrices whose entries are constant along each diagonal
    bool is_persymmetric() {} // symmetric about its northeast-southwest diagonal
    bool is_positive_definite() {} //TODO:
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



// Some famous tensors[edit]
// The metric tensor, or just the metric, 2nd rank covariant symmetric, is very commonly used to define the "inner product" or "dot product" of two vectors. Being a symmetric bilinear function of two vectors, it is just the right thing for defining a dot product.

// The Levi-Civita tensor, Nth rank covariant, completely antisymmetric (N is the dimension of the space), measures the area/volume/hypervolume of the rectangle/parallelogram/parallelopiped/parallelotope spanned by N vectors. It has the unusual property of having its sign depend on the "handedness" of the space. As such, it is a pseudo-tensor.

// Faraday's tensor, 2nd rank contravariant antisymmetric, is the tensor that explains electrodynamics and Maxwell's Equations in 4-dimensional relativistic spacetime. Its components are the components of the classical electric and magnetic fields.

// The stress tensor, 2nd rank covariant symmetric, is the tensor in 3 dimensions that describes the mechanical stresses on an object.

// The Maxwell stress tensor, 2nd rank contravariant symmetric, is the tensor in 3 dimensions that describes the classical stress of the electric and magnetic fields. The Electromagnetic stress-energy tensor generalizes this to 4 dimensions in relativity and describes the energy and momentum densities of the electromagnetic field.

// Riemann's tensor, 4th rank mixed, is made from the derivatives (gradients) of the metric tensor in different parts of space (that is, a tensor field), and describes the curvature of the space.

// The stress-energy-momentum tensor 2nd rank covariant symmetric, is the tensor in 4-dimensional relativistic spacetime that describes all the stresses, forces, momenta, matter, and energy.

// Ricci's tensor and Einstein's tensor, 2nd rank covariant symmetric, are simplified versions of Riemann's tensor, describe the curvature of spacetime, and make General relativity work. The principle of gravitation in General relativity simply says that Einstein's tensor is 8πK times the stress-energy-momentum tensor, where K is Newton's constant of gravitation.