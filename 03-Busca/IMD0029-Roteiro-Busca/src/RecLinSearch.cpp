//
//  RecLinearSearch.cpp
//  Recursive Linear Search
//
//  Created by Eiji Adachi Medeiros Barbosa 
//

#include "Search.hpp"

int search(int v[], int size, int key)
{
    int result = NOT_FOUND;

    if (size < 0){
    	return result;
    }else if(v[size] == key){
    	return size;
    }else{
    	return search(v, size - 1, key);
    }
}

/* Geralmente dará Segmentation Fault, pois a quantidade de buscas é muito alta e estoura a pilha. 
    Caso aconteça, use o comando "ulimit -s 64000" para aumentar o tamanho da stack.*/
