#include "Benchmark.h"
#include <iostream>

int main()
{
    std::cout << "Benchmarking..." << std::endl;
    Benchmark b(100);
    b.run();

    std::cout << "Press Enter to leave benchmark...";
    std::cin.get();
    return 0;
}
