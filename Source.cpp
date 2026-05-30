#include <iostream>

#include "Functions.h"

int main()
{
//Задача 1. Вывод пирамиды на массиве
    {
        int size1{6};
        int size2{8};
        int size3{10};
        int* arr1 = new int[size1]{1, 3, 6, 5, 9, 8};
        int* arr2 = new int[size2]{94, 67, 18, 44, 55, 12, 6, 42};
        int* arr3 = new int[size3]{16, 11, 9, 10, 5, 6, 8, 1, 2, 4};
        
        std::cout << "Task1: ";
        std::cout << "\nMassive: ";
        MyFunc::print_massive(arr1, size1);
        std::cout << "Pyramid: \n";
        MyFunc::print_pyramid(arr1, size1);

        std::cout << "\nMassive: ";
        MyFunc::print_massive(arr2, size2);
        std::cout << "Pyramid: \n";
        MyFunc::print_pyramid(arr2, size2);

        std::cout << "\nMassive: ";
        MyFunc::print_massive(arr3, size3);
        std::cout << "Pyramid: \n";
        MyFunc::print_pyramid(arr3, size3);

        delete[] arr1;
        delete[] arr2;
        delete[] arr3;
    }   

//Задача 2. «Путешествие» по пирамиде
    {
        int size{6};
        int* arr = new int[size]{1, 3, 6, 5, 9, 8};

        std::cout << "\nTask2: ";
        std::cout << "\nMassive: ";
        MyFunc::print_massive(arr, size);
        std::cout << "Pyramid: \n";
        MyFunc::print_pyramid(arr, size);

        int index{};

        while(true) {
            std::string strCommand;
            std::cout << "\nYou are here: ";
            MyFunc::print_element(arr, index);
            std::cout << "Input command (up, left, rigth, exit): ";
            std::getline(std::cin >> std::ws, strCommand);
            if(strCommand == "up") {
                if(MyFunc::parent_index(arr, size, index)) {
                    std::cout << "OK\n";
                }  
                else {
                    std::cout << "Error! Parent is missing\n";
                }     
            }
            else if(strCommand == "left") {
                if(MyFunc::left_index(arr, size, index)) {
                    std::cout << "OK\n";
                }  
                else {
                    std::cout << "Error! Left is missing\n";
                }      
            }
            else if(strCommand == "right") {
                if(MyFunc::rigth_index(arr, size, index)) {
                    std::cout << "OK\n";
                }   
                else {
                    std::cout << "Error! Right is missing\n";
                }                         
            }
            else if(strCommand == "exit") {
                std::cout << "Goodbye!\n";
                break;
            }
            else {
                std::cout << "Invalid command!\n";
            }
        }

        delete[] arr;

    }    

    std::cin.get();
    return 0; 
}