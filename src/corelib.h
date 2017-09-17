


 /*
   They identified three mother structures: algebraic, topological, and order.

   The set of real numbers has several standard structures:

   an order: each number is either less or more than any other number.
   algebraic structure: there are operations of multiplication and addition that make it into a field.
   a measure: intervals along the real line have a specific length, which can be extended to the Lebesgue measure on many of its subsets.
   a metric: there is a notion of distance between points.
   a geometry: it is equipped with a metric and is flat.
   a topology: there is a notion of open sets.

   There are interfaces among these:

   Its order and, independently, its metric structure induce its topology.
   Its order and algebraic structure make it into an ordered field.
   Its algebraic structure and topology make it into a Lie group, a type of topological group.
 */


#define SET(i)
#define CARDINALITY(set) /* the number of elements in the set */


#define IDEAL(set)
/*  
  ideal is a special subset of a ring. Ideals generalize certain subsets of the integers,
  such as the even numbers or the multiples of 3. Addition and subtraction of even numbers
  preserves evenness, and multiplying an even number by any other integer results in another
  even number; these closure and absorption properties are the defining properties of an ideal.
  An ideal can be used to construct a quotient ring similarly to the way that, in group theory,
  a normal subgroup can be used to construct a quotient group. 
*/

#define EXPONENTS(a, ex)
#define ROOTS(a)
#define MULTIPLICATION(a, b)
#define DIVISION(a, b)
#define ADDITION(a, b)
#define SUBTRACTION(a, b)