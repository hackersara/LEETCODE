#include<iostream>
using namespace std;
int main(){
    
    int n;
    cin>>n;
    int arr[n];
     int i;
   // to get input prics in array
     for(i=1;i<=n;i++){
        cin>>arr[i];// 7 1 5 3 6 4
    }
    // prices = [7,1,5,3,6,4]

// find maximum profit from buying and selling stocks.
// minimum price
i=1;
int min=arr[1];
int temp;
while(i<=n){
  if(min>arr[i]){
    min=arr[i];// 1
    temp=i;// 2
    i++;
    }
    else{
        i++;
    }
}
    cout<<" least price is :"<<min<<" on the "<<temp<<" day "<<endl;
    
    // maximum price after buying the stocks
    int max;
    int ans=min;
    for(int k=temp+1;k<=n;k++){
        if (ans < arr[k]) { // prices = [7,1,5,3,6,4]
            ans=arr[k];
            
     }
    
  }
   cout<<"max profit that day:"<<ans - min;
return 0;
}
    
