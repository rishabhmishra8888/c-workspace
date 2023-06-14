#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout <<"enter the values of a and b "<<endl;
    cin>>a>>b;
    //creating 2D array
    int**arr=new int*[a];
    for(int i=0;i<a;i++){
        arr[i]=new int[b];
    }
//taking input
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cin>>arr[i][j];
        }
    }
    //giving output
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing memory
     for(int i=0;i<a;i++){
        delete []arr[i];
    }
    delete[]arr;




    return 0;
}