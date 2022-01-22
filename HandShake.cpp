/* Link to Question:
https://www.hackerrank.com/challenges/handshake/problem?h_r=internal-search
*/

#include<iostream>
using namespace std;
int main(){
    int t,arr[1000];
    // cout<<"t: ";
    cin>>t;
    // cout<<"array: ";
    for(int i=0;i<t;i++){
        cin>>arr[i];
    }
    for(int i=0;i<t;i++){
        if(arr[i]==1){
            cout<<"0";
        }
        else{
            cout<<endl<<arr[i]*arr[i-1]/2;
            // cout<<endl;
        }
    }
    
}


/* just the function:
int handshake(int n) {
if(n==0){
    return 0;
}
    else{
        return n*(n-1)/2;
    }
}
*/
