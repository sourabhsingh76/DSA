#include <bits/stdc++.h>
using namespace std;
 
void swap_pointers(int** a, int** b){             //double pointer
    int* temp = *a;
    *a = *b;                                          //doubt
    *b = temp;                                   
}           
 
int main(){
    int a = 5, b = 10;
    int* a_ptr = &a, *b_ptr = &b;
    cout << a_ptr << " " << b_ptr << endl;
    cout << *a_ptr << " " << *b_ptr << endl;
    swap_pointers(&a_ptr, &b_ptr);
    cout << *a_ptr << " " << *b_ptr << endl;
    cout << a_ptr << " " << b_ptr << endl;
 
    return 0;
}