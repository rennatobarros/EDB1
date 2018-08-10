//
//  main.cpp
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include <iostream>
#include <fstream>
#include <chrono>

#include "Search.hpp"

using namespace std;

void readInput(const string, int, int[]);

const string MY_PATH = "./input.txt";

int main(int argc, const char * argv[]) {
    
    if(argc != 2){
        cout << "ERROR: Expected argument defining the size of the input vector." << endl;
        return -1;
    }
    
    int size = atoi(argv[1]);
    
    int *v = new int[size];
    readInput(MY_PATH, size, v);
    
    cout << "Size\tTime" << endl;

    auto t1 = chrono::high_resolution_clock::now();
    
    // Always search for an element that doesn't exist in input vector
    search(v, size, -1);

    auto t2 = chrono::high_resolution_clock::now();
    
    // d should be the elapsed time
    long double d = 0.0;
    d = chrono::duration<long double, std::micro>(t2 - t1).count();
        
    cout << size << "\t" << d << endl;
    
    delete[] v;
    
    return 0;
}

void readInput(const string path, int size, int v[]){
    ifstream file(path);
    
    if(!file.good())
    {
        cout << "ERROR: File does not exist: " << path << endl;
        exit(-1);
    }
    
    for( int i = 0; i < size; i++){
        int x;
        file >> x;
        v[i] = x;
    }
    
    file.close();
}
