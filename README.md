# C++ Off-by-One Error Example

This repository demonstrates a common off-by-one error when working with `std::vector` in C++.  The error occurs when iterating over the vector and accidentally accessing an element beyond its valid bounds. This often leads to segmentation faults or other undefined behavior.

The `bug.cpp` file contains the erroneous code. The `bugSolution.cpp` demonstrates the corrected code.

## How to run

1. Clone this repository.
2. Compile the code using a C++ compiler (like g++):
   ```bash
   g++ bug.cpp -o bug
   g++ bugSolution.cpp -o bugSolution
   ```
3. Run the executables:
   ```bash
   ./bug
   ./bugSolution
   ```

Observe the different outputs. The first will crash, whereas the second will correctly print the vector's elements.