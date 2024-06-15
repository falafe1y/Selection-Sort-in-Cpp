#include <iostream>
#include <vector>

using namespace std;

void SelectionSort(vector<int> *arr, int size) {
    for (int i = 0; i < size-1; i++) {
        int min = i;
        for (int j = i+1; j < size; j++)
        if ((*arr)[j] < (*arr)[min]) {
            min = j;
        }
        swap((*arr)[min], (*arr)[i]);
    }
}

void SelectionSort(int (*arr)[], int size) {
    for (int i = 0; i < size-1; i++) {
        int min = i;
        for (int j = i+1; j < size; j++)
        if ((*arr)[j] < (*arr)[min]) {
            min = j;
        }
        swap((*arr)[min], (*arr)[i]);
    }
}