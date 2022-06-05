#include <iostream> 
using namespace std; 
#define S 5

template <class T>
T hitungJmlElemenMatrix(T arr[]) { 
T sum = arr[0];
for(int i=1; i<S; i++) { 
sum = sum + arr[i];
} 
return sum; 
} 

int main() { 
int arr[S] = {1, 2, 3, 4, 5};
cout << hitungJmlElemenMatrix(arr) << endl; 
double arr2[S] = {1.5, 2.1, 3.2, 4.0, 5.3}; 
cout << hitungJmlElemenMatrix(arr2) << endl; 
return 0;
}

