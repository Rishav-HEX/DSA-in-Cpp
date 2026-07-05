#include <iostream>
using namespace std;

int lowerBound(int arr[] , int target , int n)
{
    int low = 0 ;
    int high = n-1;
    int ans = n;

    while(low < high){
        int mid = low + (high-low)/2 ;

        if(target <= arr[mid]){
            ans = mid;
            high = mid - 1 ;
        }
        else{
            low = mid + 1;
        }
    }
return ans;
}
int main(){
    int ar[] = {2,3,4,4,6,7};
    int Search = 4 ;
    int size = 6;
    cout << " Element Found at index "<< lowerBound(ar,Search,size) <<" " << endl ;
return 0 ;
}