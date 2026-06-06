#include<iostream>
#include<vector>
using namespace std;

void DPCoinChange(vector<int> coins, int d, int M){
    //we have d types of coins and each coin is available in infinite number
    int P[M+1];
    int b[M+1];
    P[0] = 0; b[0]=0;

    for(int m = 1; m <= M; m++){
        P[m] = INT_MAX;
        for(int i = 0; i < d; i++){
            if(m >= coins[i]){
                if( 1+P[m-coins[i]] < P[m] ){
                    P[m] = 1+P[m-coins[i]];
                    b[m] = coins[i];
                }
            }
        }
    }

    cout << "Min no of coins:" << P[M] << endl;
    cout << "Chosen coins: " ;
    int i = M;
    while(i > 0){
        cout << b[i] <<", ";
        i = i - b[i];
    }
}

int main(){
    vector<int> coins = {1, 2, 6};
    int d = 3;//we have 3 types of coins available
    int M = 11; //changed coins
    DPCoinChange(coins, d, M);
}
