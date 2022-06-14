// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


void cipher(string a,int key,string& ans){
    
    
    
    for(int i =0; i<a.length(); i++){
        
        
        if(isdigit(a[i])){
            ans.push_back(a[i]+key);
        }
        
        if(a[i] == ' '){
            ans.push_back(' ');
        }else{
            
            if(a[i]>='A' && a[i]<='Z'){
                char element = a[i] + key;
                ans.push_back(element);
            }
            
            if(a[i]>='a' && a[i]<='z'){
                 char element = a[i] + key;
                ans.push_back(element);
            }
        
        }
        
    }
    
    
    //cout<<ans<<endl;
}


void dec(string a,string& de,int key){
    
    
    for(int i =0; i<a.length(); i++){
        
        
        if(isdigit(a[i])){
            de.push_back(a[i]-key);
        }
        
        if(a[i] == ' '){
            de.push_back(' ');
        }else{
            
            if(a[i]>='A' && a[i]<='Z'){
                char element = a[i] - key;
                de.push_back(element);
            }
            
            if(a[i]>='a' && a[i]<='z'){
                 char element = a[i] - key;
                de.push_back(element);
            }
        
        }
        
    }
    
}

int main() {
   
   string a = "0 All The Best";
   
   string ans;
   cipher(a,1,ans);
   
   char j = 90;
   cout<<j<<endl;
   cout<<ans<<endl<<endl;
   cout<<"Decrpted Text is"<<endl;
   
   //ans = "";
   string de;
   dec(ans,de,1);
   
   
   
   cout<<de;

    return 0;
}