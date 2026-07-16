//Q. Delete the Element at Index pos of the array arr and The logical Size must be Decreased by 1;
#include <iostream>
using namespace std;
int main(){
    int arr[5] = {5 , 4 , 7 , 7, 9} ;
    int pos = 3 ;
    int value = 8 ;
    int size = 5 ;
    for(int i = pos ; i < size-1 ; i++){
        arr[i] = arr[i+1] ;
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " " ;
    }
    
    return 0;
}