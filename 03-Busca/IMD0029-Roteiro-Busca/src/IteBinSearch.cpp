//
//  IteBinSearch.cpp
//  Iterative Binary Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{
    // TO-DO
    int result = NOT_FOUND;
    int inicio = 0;
    int fim = size - 1;

    while(inicio <= fim){
    	int meio = (inicio + fim)/2;

    	if (key < v[meio]){
    		fim = meio - 1;
    	}else if(key > v[meio]){
    		inicio = meio + 1;
    	}else{
    		return meio;
    	}
    }

    return result;


}
