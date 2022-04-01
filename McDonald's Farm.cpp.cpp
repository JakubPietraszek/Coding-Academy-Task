#include <iostream>
#include<cstdlib> 
using namespace std;

bool checkNumber(string text) {
 
    for(int i = 0; i < text.length(); i++){ 
        if(text[i]>'9' || text[i]<'0') return false;
    }
    return true;
 
}

int main()
{
    cout<<"If u want to run the program, type \"RUN\"."<<endl;
    string run;
    while(cin>>run){
    if(run=="RUN"){
    string total_length;
    cin>>total_length;
    int total_length_number;
    
    if( checkNumber (total_length) == false){
        cout<<"Inappropriate input!";
        return 0;
    }
    
    else{
        total_length_number = stoi(total_length);
    }
    
    int max_area = 0;
    int max_a = 0;
    int max_b = 0;
    
    for(int a = 0; a <= total_length_number/2; a++){
        int area = a * (total_length_number - 2*a);
        if(area > max_area){
            max_area = area;
            max_a = a;
            max_b= total_length_number - 2*a;
        }
    }
    
    cout<<"The lengths of fence segments equal "<<max_a<<" "<<"and"<<" "<<max_b<<"."<<endl;
    cout<<"The optimal area of the McDonald's farm equals "<<max_area<<".";
    return 0;
    
        }
    }
}


