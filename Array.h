//
// Created by slaventy on 08.12.2020.
//

#ifndef CLASS_ARRAY_ARRAY_H
#define CLASS_ARRAY_ARRAY_H
#include <iostream>
#include <cstdlib>
#include <ctime>
class Array{
    int *a, m;

public:
    Array(int mm, int t, int d);
    Array(int *a, int b);
    Array(Array & arr);
    ~Array(){delete [] a; m = 0;};
    Array & operator = (Array & arr);
    int & operator [](int i);

    bool Test();
    bool operator == (Array);
    friend std::istream & operator >> (std::istream &  in, Array & arr);
    friend std::ostream & operator << (std::ostream & out, Array & arr);
};
#endif //CLASS_ARRAY_ARRAY_H
