#include <iostream>
#include <vector>

using namespace std;

void insertion_sort(vector<int>* vector){
    for (size_t pivot = 1; pivot < vector->size(); pivot++){
        int value_pivot = (*vector)[pivot];
        int position = pivot;
        while (position > 0 and (*vector)[position - 1] > value_pivot){
            (*vector)[position] = (*vector)[position-1];
            position -= 1;
        }
        (*vector)[position] = value_pivot;
    }
};

int main(){
    vector<int> vector_test = {5, 6, 2, 3, 1, 7};
    insertion_sort(&vector_test);
    for (size_t position = 0; position < vector_test.size(); position++){
        cout << vector_test[position] << " ";
    }
    return 0;
}