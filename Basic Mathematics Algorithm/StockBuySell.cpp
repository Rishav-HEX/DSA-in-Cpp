//Given an array of Stocks Bbuyed at days so for that Array/ Stock retuurn the maximum profit at any day of Buying Stock
#include <iostream>
using namespace std;
int main(){

    int stocks[] = {7,1,5,3,6,4};
    int bestBuy = stocks[0] ;
    int MaxProfit = 0 ;

    int n = 6;
    for(int i = 1 ; i < n ; i++){
        if(stocks[i] > bestBuy){
            MaxProfit = max(MaxProfit , stocks[i] - bestBuy);
        } 
        bestBuy = min(bestBuy , stocks[i]);
    }

    cout << MaxProfit ;
}