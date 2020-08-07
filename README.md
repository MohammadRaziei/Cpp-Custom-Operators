# Cpp-Custom-Operators
Cpp-Custom-Operators





### Examples:
Code: 
```c++
std::vector<int> a{1, 2, 3};
std::vector<std::complex<float>> b{0.5, 0.5, 0.5};

show(a);
show(b);
show(a * b);
show(a *= a);
show(a *= 2);
show(a[1]);
```
Output:
```
>> a :
        1, 2, 3,
>> b :
        (0.5,0), (0.5,0), (0.5,0),
>> a * b :
        (0.5,0), (1,0), (1.5,0),
>> a *= a :
        1, 4, 9,
>> a *= 2 :
        2, 8, 18,
>> a[1] :
        8
```
