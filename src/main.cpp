#include <iostream>
#include <memory>
#include "tensor.h"

int main() {
    std::cout << "Hello, World!" << std::endl;

    std::unique_ptr<Tensor> tens( new Tensor() );
    tens->inverse();
    tens->transpose();




    std::cout << "exiting" << std::endl;
    return 0;
}