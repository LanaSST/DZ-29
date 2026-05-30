#ifndef Functions_H
#define Functions_H

namespace MyFunc {

    void print_pyramid(int* arr, int size);

    void print_element(int* arr, int index);

    bool left_index(int* arr, int size, int & index);

    bool rigth_index(int* arr, int size, int & index);

    bool parent_index(int* arr, int size, int & index);

    void print_massive(int* arr, int size);

}

#endif