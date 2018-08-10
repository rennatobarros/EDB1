//
//  RecBinSearch.cpp
//  Recursive Binary Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int binSearch(int[], int, int, int);

int search(int v[], int size, int key)
{
    // TO-DO
    return binSearch(v, key, 0, size - 1);
}

int binSearch(int v[], int key, int inicio, int fim){
	int result = NOT_FOUND;

	if (inicio > fim){
		return result;
	}

    int meio = (inicio + fim)/2;

    if(key < v[meio]){
    	return binSearch(v, key, inicio, meio - 1);
    }else if(key > v[meio]){
    	return binSearch(v, key, meio + 1, fim);
    }else{
    	return meio;
    }
}