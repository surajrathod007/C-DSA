#include<iostream>
#include<vector>
using namespace std;




int main(){

    

    string par;
    cout<<"Enter Parent Name : "<<endl;

    cin>>par;

    char choice;
    cout<<"Enter does it has child ? Y/N";
    cin>>choice;

    if(choice == 'N'){
        cout<<"Total members : 1"<<endl;
        cout<<"Commision Details "<<endl;
        cout<<par<<" :250 INR"<<endl;
    }else{

        string child;
        vector<string> v;
        cout<<"Enter child name seperate by comma , "<<endl;
        cin>>child;
        string temp;
        for(int i = 0; i<child.length();i++){

            if(child[i] == ','){
                v.push_back(temp);
                temp = "";
            }
             else if(child[i] != ' '){
                temp+=child[i];
             } 
             
             //else{

               
            //     temp+=child[i];
            // }
                //temp+=child[i];

            
        }

        v.push_back(temp);
        cout<<endl<<endl<<endl;
        // for(auto a : v){
        //     cout<<a<<endl;
        // }

        cout<<"Total Members : "<<v.size()+1<<endl;
        cout<<par<<" :"<<v.size()*500<<endl;
        for(auto a : v){
            cout<<a<<" :250 INR"<<endl;
        }

        //cout<<temp<<endl;

        

    }
}