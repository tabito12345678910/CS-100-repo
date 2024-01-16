#include "../header/triangle.hpp"
#include "../header/rectangle.hpp"
#include <iostream>
#include <string>

using namespace std;

int main(){
    //test
    /*
    Triangle tri;
    tri.set_base(2);
    tri.set_height(2);
    if(tri.area()==2){
        cout<<"Triangle area = 2"<<endl;
    }
    else{
        cout<<"Wrong area"<<endl;
    }


    Rectangle rect;
    rect.set_width(2);
    rect.set_height(2);
    if(rect.area()==4){
        cout<<"Rectangle area = 4"<<endl;
    }
    else{
        cout<<"Wrong area"<<endl;
    }
    */

    cout<<"Enter rectangle or triangle to choose which area you want to find"<<endl;
    cout<<"Enter anything else to quit program"<<endl;
    string input;
    cin>>input;

    if(input == "rectangle"){
        cout<<"Enter desired height as a integer"<<endl;
        int h;
        if(!(cin>>h)||h<0){
            cout<<"Invalid Input"<<endl;
            return 0;
        }
        cout<<"Enter desired width as a integer"<<endl;
        int w;
        if(!(cin>>w)||w<0){
            cout<<"Invalid Input"<<endl;
            return 0;
        }
        Rectangle rect;
        rect.set_width(w);
        rect.set_height(h);
        cout<<"Rectangle area = "<<rect.area()<<endl;

    }
    else if(input == "triangle"){
        cout<<"Enter desired height as a integer"<<endl;
        int h;
        if(!(cin>>h)||h<0){
            cout<<"Invalid Input"<<endl;
            return 0;
        }
        cout<<"Enter desired base as a integer"<<endl;
        int b;
        if(!(cin>>b)||b<0){
            cout<<"Invalid Input"<<endl;
            return 0;
        }
        Triangle tri;
        tri.set_base(b);
        tri.set_height(h);
        cout<<"Triangle area = "<<tri.area()<<endl;
    }

    return 0;
    
}