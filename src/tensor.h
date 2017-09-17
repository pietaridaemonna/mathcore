//
// Created by peterducai on 9/17/17.
//

#ifndef _TENSOR_H
#define _TENSOR_H


class Tensor {
private:
    int order;
public:
    Tensor();
    ~Tensor();

    int get_rank();
    int num_of_elements();
    void inverse();
    void transpose();
};


#endif // TENSOR_H
