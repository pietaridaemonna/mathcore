#include <iostream>
#include <memory>
#include "tensor.h"
#include "math_constants.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::unique_ptr<Tensor> tens( new Tensor() );
    tens->inverse();
    tens->transpose();

    std::cout << pi << std::endl;




    std::cout << "exiting" << std::endl;
    return 0;
}