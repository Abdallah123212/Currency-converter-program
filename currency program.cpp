#include <iostream>
using namespace std;                 //The last currency exchange rate update was on March 4th at 6 AM.

int main(){
    string currency[7]={"American Dollar","Egyptian Pound","Saudi Riyal","EURO","British Pound","Russian ruble","Chinese Yuan"};
    double price[7]={49.88,1,13.29,57.90,66.54,0.64,7.23};
    cout<<"Welcome to the currency converter program!"<<"\n"<<"\n";

    cout<<"Please,enter the number of the currency you wish to convert from."<<"\n";
    cout<<"**********************"<<"\n";
    cout<<"* 1- American Dollar *"<<"\n";
    cout<<"* 2- Egyptian Pound  *"<<"\n";
    cout<<"* 3- Saudi Riyal     *"<<"\n";
    cout<<"* 4- EURO            *"<<"\n";
    cout<<"* 5- British Pound   *"<<"\n";
    cout<<"* 6- Russian ruble   *"<<"\n";
    cout<<"* 7- Chinese Yuan    *"<<"\n";
    cout<<"**********************"<<"\n";

    int curFrom;
    cin>> curFrom;
    if(curFrom>0 && curFrom<8){
    cout<<"what currency number would you like to convert "<<currency[curFrom-1]<<" into ?";
    int curTo;
    cin>>curTo;


    if(curFrom==curTo){
            cout<<"Please note that it is not possible to convert a currency into itself";
    }
           else if(curTo>0 && curTo<8){
    cout<<"you are now converting "<<currency[curFrom-1]<<" to "<<currency[curTo-1]<<"\n"<<"\n";
    cout<<"Enter the "<<currency[curFrom-1]<<" value:"<<"\n";
    double value;
    cin>>value;
    if(value>0){
    double output=(value*price[curFrom-1])/(price[curTo-1]);
    cout<<"converting "<<value<<" "<<currency[curFrom-1]<<"s into "<<currency[curTo-1]<<"s= "<<output<<" "<<currency[curTo-1]<<"s."<<"\n"<<"\n";
    cout<<"thank you for using our currency converter program!";
    }else{
        cout<<"Value must be a positive number";
    }

    }else{
        cout<<"Currency number must be an integer between 1 and 7.";
    }

    }else{
        cout<<"Currency number must be an integer between 1 and 7.";
    }
return 0;
    }


