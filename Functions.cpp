#include <iostream>
#include "Functions.h"

namespace MyFunc {

    void print_pyramid(int* arr, int size) {
        for(int i = 0; i < size; ++i) {
            print_element(arr, i);
        }

    }

    void print_element(int* arr, int index) {
        if(index == 0) {
            std::cout << "root " << arr[index] << "\n";
        }
        else if(index % 2 == 0) { //четный
            std::cout << "right(" << arr[(index-1)/2] << ") " << arr[index] << "\n";
        }
        else {
            std::cout << "left(" << arr[(index-1)/2] << ") " << arr[index] << "\n";
        }
    }

    void print_massive(int* arr, int size) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }  
        
    bool left_index(int* arr, int size, int & index) {
        if(index >= size) {
            return false;
        }
        auto new_index = 2 * index + 1;
        if(new_index >= size) {
            return false;
        }
        index = new_index;
        return true;
    }

    bool rigth_index(int* arr, int size, int & index) {
        if(index >= size) {
            return false;
        }
        auto new_index = 2 * index + 2;
        if(new_index >= size) {
            return false;
        }
        index = new_index;
        return true;
    }

    bool parent_index(int* arr, int size, int & index) {
        if(index == 0) {
            return false;
        }   
        auto new_index = (index-1) / 2;
        index = new_index;
        return true;
    }
 
}