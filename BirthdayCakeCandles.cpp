/*You are in charge of the cake for a child's birthday. You have decided the cake will have one candle for each year of their total age.
They will only be able to blow out the tallest of the candles. Count how many candles are tallest

Sample Input 0
4
3 2 1 3

Sample Output 0
2

Explanation 0

Candle heights are 3,2,1,3. The tallest candles are 3  units, and there are 2 of them.
*/


#include<iostream>
using namespace std;
int main(){
    int n,arr[100000],mc=0;
    // cout<<"n: ";
    cin>>n;
    // cout<<"array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max =0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(arr[i] == max){
            mc++;
        }
    }
    cout<<mc;
}
