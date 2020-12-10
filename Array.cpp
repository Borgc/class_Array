//
// Created by slaventy on 08.12.2020.
//

#include "Array.h"

Array::Array(int mm, int t, int d){
    if(t <= 0 || t > 3){
        a = nullptr;
        m = 0;
    } else {
        a = new int[mm];
        m = mm;
        switch (t) {
            case 1:
                srand(static_cast<unsigned int>(time(0)));
                for(int i = 0; i < mm; i++){
                    a[i] = rand() %d;
                }

                break;
            case 2:
                for(int i = 0; i < mm; i++){
                    a[i] = i;
                }
                break;
            case 3:
                for(int i = 0; i < mm; i++){
                    a[i] = mm - i;
                }
                break;
        }
    }
}

Array::Array(int *mas, int n){
    if(mas){
        a = new int[n];
        for(int i = 0; i < n; i++){
            a[i] = mas[i];
        }
    }
}
Array::Array(Array & arr){
    a = new int[arr.m];
    for(int i = 0; i < m; i++){
        a[i] = arr.a[i];
    }
}
Array & Array::operator = (Array & arr){
    if(a != arr.a){
        m = arr.m;
        delete [] a;
        a = new int[arr.m];
        for(int i = 0; i < m; i++){
            a[i] = arr.a[i];
        }
    }
}
std::ostream & operator << (std::ostream & out, Array & arr){
    for(int i = 0; i < arr.m; i ++){
        out << arr.a[i] << ' ';
    }
    return out;
}
int & Array::operator [](int i){
    return this->a[i];
}

bool Array::operator == (const Array & arr){
    
}

bool Array::Test(){
    for(int i = 1; i < m; i++){
        if(a[i-1] > a[i])return false;
    }
    return true;
}

