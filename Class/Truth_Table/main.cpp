/* 
 * File:   main.cpp
 * Author: Heidy Tamayo
 * Created on January 11, 2016, 8:57 AM
 * Purpose: Display table and compare swaps
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare and initialize variables
    bool x=true;
    bool y=true;
    
    //Create Heading 
    cout<<"X Y  !X !Y  X&&Y  X||Y  X^nY  (X^nY)^nY  (X^nY)^nX !(X&&Y)  !X||!Y  !(X||Y)  !X&&!Y "<<endl;
    
    //First Row
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Second Row
    x=true;y=false;
   cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Third Row
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Fourth Row
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"   ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"     ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<<(x^y?'T':'F')<<"        ";
    cout<<((x^y)^y?'T':'F')<<"           ";
    cout<<((x^y)^x?'T':'F')<<"       ";
    cout<<(!(x&&y)?'T':'F')<<"       ";
    cout<<(!x||!y?'T':'F')<<"        ";
    cout<<(!(x||y)?'T':'F')<<"        ";
    cout<<(!x&&!y?'T':'F')<<"      "<<endl;
    
    //Swap using temp
   /* const char a=2;
    const char b=3;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    b=(a^b)^b=a;
    a=(a^b)^a=b;
    temp=a;
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;*/
    //Swap using exclusive or operator
    
    //Exit stage right
    return 0;
}

