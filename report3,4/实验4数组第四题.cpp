﻿#include<iostream>
using namespace std;
#include <iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1) {
            list3[k++] = list1[i++];
        }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
    int mergedSize = size1 + size2;
    for (int pass = 0; pass < mergedSize - 1; pass++) {
        for (int index = 0; index < mergedSize - pass - 1; index++) {
            if (list3[index] > list3[index + 1]) {
                int temp = list3[index];
                list3[index] = list3[index + 1];
                list3[index + 1] = temp;
            }
        }
    }
}
int main() {
    const int MAX_SIZE = 80;
    int list1[MAX_SIZE];
    int list2[MAX_SIZE];
    int list3[MAX_SIZE * 2];
    int size1, size2;
    cout << "Enter list1: ";
    cin >> size1;
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }
    cout << "Enter list2: ";
    cin >> size2;
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }
    merge(list1, size1, list2, size2, list3);
    cout << "The merged list is ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << list3[i] << " ";
    }
    cout << endl;
    return 0;
}