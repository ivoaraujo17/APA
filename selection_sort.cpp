#include <iostream>
#include <vector>

using namespace std;

void selection_sort(vector<int>* vector){
    for (size_t start = 0; start < vector->size(); start++){
        int minimum_value_position = start;
        for (size_t position = start + 1; position < vector->size(); position++){
            if ((*vector)[position] < (*vector)[minimum_value_position]){
                minimum_value_position = position;
            };
        };
        int starting_position_value = vector->at(start);
        (*vector)[start] = (*vector)[minimum_value_position];
        (*vector)[minimum_value_position] = starting_position_value;
    }
};

int main(){
    vector<int> vector_test = {5, 6, 2, 3, 1, 7};
    selection_sort(&vector_test);
    for (size_t position = 0; position < vector_test.size(); position++){
        cout << vector_test[position] << " ";
    }
    return 0;
}