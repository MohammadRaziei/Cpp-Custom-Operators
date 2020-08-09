# Cpp-Custom-Operators
Cpp-Custom-Operators

### How to use

Just download [CustomOperators.h](CustomOperators/CustomOperators.h) from [here](https://github.com/MohammadRaziei/Cpp-Custom-Operators/raw/master/CustomOperators/CustomOperators.h) and put it into your project directory. now you can easily add it into your project with `#include "CustomOperators.h"` command. enjoy it :)



### Examples:

There is some example for testing the operators in [main](CustomOperators/main.cpp) that you can run it to see more about its functionality.

__Code__: 
```c++
std::vector<int> vectInt{1, 2, 3};
std::vector<float> vectFloat{0.5, 1.5, -0.5};
std::vector<float> vectDouble{0.5, 7.5, 9.5};
std::vector<std::complex<float>> vectCompFloat{{0.5, 1}, {1.5, 2}, {-0.5, 3}};

show(vectInt);
show(vectFloat);
show(vectCompFloat);
show(vectDouble);
show(vectInt + vectCompFloat);
show(vectFloat / vectCompFloat);
show(vectDouble - 0.5);
show(vectInt *= vectInt);
show(vectInt *= 2);
show(vectInt[1]);
```
__Output__:
```
>> vectInt :
        [TYPE] std::vector<int>
        1, 2, 3

>> vectFloat :
        [TYPE] std::vector<float>
        0.5, 1.5, -0.5

>> vectCompFloat :
        [TYPE] std::vector<std::complex<float>>
        (0.5,1), (1.5,2), (-0.5,3)

>> vectDouble :
        [TYPE] std::vector<float>
        0.5, 7.5, 9.5

>> vectInt + vectCompFloat :
        [TYPE] std::vector<std::complex<float>>
        (1.5,1), (3.5,2), (2.5,3)

>> vectFloat / vectCompFloat :
        [TYPE] std::vector<std::complex<float>>
        (0.2,-0.4), (0.36,-0.48), (0.027027,0.162162)

>> vectDouble - 0.5 :
        [TYPE] std::vector<double>
        0, 7, 9

>> vectInt *= vectInt :
        [TYPE] std::vector<int>
        1, 16, 81

>> vectInt *= 2 :
        [TYPE] std::vector<int>
        4, 64, 324

>> vectInt[1] :
        [TYPE] int
        64
```
