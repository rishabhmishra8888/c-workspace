#include<iostream>
using namespace std;
//to print row wise sum
void PrintSum(int arr[][4],int i , int j){
    cout<<"printing the sum of the given row->"<<endl;
 for(int i=0;i<3;i++){
    
    int sum = 0;
        for(int j=0;j<4;j++){
            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
        cout<<endl;
}



int main(){
    int arr[3][4];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"the sum of the the above given rows are"<<endl;
    PrintSum(arr,3,4);
}