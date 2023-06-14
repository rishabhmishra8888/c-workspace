#include<iostream>
using namespace std;
void RowWiseSum(int arr[][3],int i,int j){
    cout<<"printing sum-> "<<endl;
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
         cout<<sum<<" ";
    }
    cout<<endl;
}
int LargestRowSum(int arr[][3],int i , int j){
    int maxi = INT16_MIN;
    int RowIndex=-1;
    for(int i = 0;i<3;i++){
        int sum = 0;
        for(int j=0;j<3;j++){
            sum += arr[i][j];
        }
        if(sum>maxi){
        maxi=sum;
        RowIndex=i;
    }
    }
   
    cout<<"the maximum sum is "<<maxi<<endl;
    return RowIndex;

}
int main(){
    int arr[3][3];
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    for(int i = 0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<"";
        }
        cout<<endl;
    }
    RowWiseSum(arr,3,3);
    int rownumber=LargestRowSum(arr,3,3);
    cout<<"the maximum row is at index "<< rownumber <<endl;
    
    return 0;
}
