// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void solve(string loc[],string source,string destination){
    
    int s = 6 , d = 3;
    
    for(int i = 0; i<8;i++){
        if(loc[i] == source){
            s = i;
        }
        
        if(loc[i] == destination){
            d = i;
        }
    }
    
    
    
    
    
    int arr[8] = {800, 600, 750, 900, 1400, 1200, 1100, 1500};
    
    
    
    int sum = 0;
    
    for(int i = s+1; i<=d; i++){
        sum+= arr[i];
    }
    if(s>d){
        
        for(int i = s+1; i<8; i++){
        sum+= arr[i];
    }
        
        for(int i =0; i<=d;i++){
            sum+=arr[i];
        }
    }
    
    
    cout<<sum<<endl;

    cout<<(sum*5)/1000<<endl;
    
    
}

int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    
    string location[] = {"TH","GA","IC","HA","TE","LU","NI","CA"};
    
    
    solve(location,"NI","HA");
    

    return 0;
}