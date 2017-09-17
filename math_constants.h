#ifndef __MATH_CONSTANTS_H__
#define __MATH_CONSTANTS_H__

#include <stdint.h>

const double pi                 = 3.14159265358979323846264338328;
const double euler              = 0.57721566490153286060651209008;
const double pythagoras_const   = 1.41421356237309504880168872421;
const double golden_ratio_phi   = 1.61803398874989484820458683436;
const double euler_mascheroni   = 0.57721566490153286060651209008;

/* sqr(3) also known as Theodorus' constant, named after Theodorus of Cyrene, who proved its irrationality. */
const double square_root_3      = 1.73205080756887729352744634150; 
const double square_root_5      = 2.23606797749978969640917366873;

const double plastic_number     = 1.32471795724474602596090885447;
const double feigenbaum_delta   = 4.66920160910299067185320382157;
const double feigenbaum_alpha   = 2.50290787509589282228390287321;

/*
1	Common mathematical constants
1.1	Archimedes' constant π
1.2	Euler's number e
1.3	Pythagoras' constant √2
1.4	The imaginary unit i
2	Constants in advanced mathematics
2.1	The Feigenbaum constants α and δ
2.2	Apéry's constant ζ(3)
2.3	The golden ratio φ
2.4	The Euler–Mascheroni constant γ
2.5	Conway's constant λ
2.6	Khinchin's constant K
2.7	The Glaisher–Kinkelin constant A
3	Mathematical curiosities and unspecified constants
3.1	Simple representatives of sets of numbers
3.2	Chaitin's constant Ω
3.3	Unspecified constants
3.3.1	In integrals
3.3.2	In differential equations
*/


/*
TENSORS
*/
int matrix_trace() {} /* The trace of a matrix is the sum of the diagonal elements */
int dot() {} /* gives products of vectors, matrices, and tensors */
/* The result of applying Dot to two tensors  and  is the tensor .
 Applying Dot to a rank  tensor and a rank  tensor gives a rank  tensor. */

int levi_civita_tensor = 0; /* gives the d-dimensional Levi-Civita totally
antisymmetric tensor. gives a rank-d tensor with length d in each dimension. */
int hodge_dual = 0; /* gives the Hodge dual of the tensor */

/*
Tensors of rank 2 or higher that arise in applications usually have symmetries
under exchange of their slots. For example, the inertia tensor,
the stress-energy tensor, or the Ricci curvature tensor are
rank-2 fully symmetric tensors; the electromagnetic tensor is a rank-2 antisymmetric
tensor; and the Riemann curvature tensor and the stiffness tensor
are rank-4 tensors with nontrival symmetries. 
*/

#endif



