#include<iostream>
#include<vector>
using namespace std;

#define up 1
#define diagonal 2

void knapsack01(vector<int> w, vector<int> v, int n, int capacity){
    //we can either take the entire item or can't take at all
    int P[n+1][capacity+1];
    int b[n+1][capacity+1];

    //initialize 1st row
    for(int i = 0; i <= capacity; i++) P[0][i] = 0;
    //initialize 1st column
    for(int j = 0; j <= n; j++) P[j][0] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= capacity; j++){
            if( j < w[i]){
                //we can't take the item
                P[i][j] = P[i-1][j];
                b[i][j] = up;
            }else{
                //we can either take the entire item or skip the item
                if( v[i] + P[i-1][ j-w[i]] > P[i-1][j] ){
                    //taking the item will give us maximum profit
                    P[i][j] = v[i] + P[i-1][j-w[i]];
                    b[i][j] = diagonal;
                }else{
                    //skipping the item will give us maximum profit
                    P[i][j] = P[i-1][j];
                    b[i][j] = up;
                }

            }
        }
    }

    cout << "Maximum profit:" << P[n][capacity] << endl;
    int i = n, j = capacity;
    cout << "Selected items:" << endl;
    while( i>0 && j>0){
        if(b[i][j] == diagonal){
            //we had taken the item
            cout<<"w:"<<w[i]<<", v:"<<v[i]<<endl;
            j = j - w[i];
        }
        i--;
    }

}

int main(){
    vector<int> w = {0, 2, 1, 3, 2};
    vector<int> v = {0, 12, 10, 20, 15};
    int n = 4;
    int capacity = 5;
    knapsack01(w, v, n, capacity);

}
