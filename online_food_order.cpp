#include<bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
  int returnbill(void);
  int values=returnbill();
  cout<<"Your Total order bill amount is =  "<<values<<endl;
  cout<<"Thank You For Placing Order!!! ,Have a nice day"<<endl;
}
int returnbill(){
    char start;
    char item;
    int value;
    int bill=0;
    char other;
    cout<<"------------------------------ WELCOME TO ONLINE FOOD ORDER ---------------------------------"<<endl;
    cout<<"-----------------------------  Please Follow The Instructions Carefully ---------------------"<<endl;
    cout<<"Step 1: Please Type 's' or 'S' to start Your Order"<<endl;
    cout<<"Step 2: You can order Veg and Non-veg item any of your choice"<<endl;
    cout<<"Step 3: Type 'a' or 'A' for veg items"<<endl;
    cout<<"Step 3: Type 'b' or 'B' for Non-veg item"<<endl;
    cout<<"Step 4: You can take your bill after your order"<<endl;
    cout<<endl;
    restart:
    cout<<"Enter input to start your order: "<<endl;
    cin>>start;
    if(start=='s' || start=='S'){
        restarts:
        cout<<"Please select Veg and non-veg item any of your choice"<<endl;
        cout<<"(a) Veg item             (b) Non-Veg item"<<endl;
        cout<<endl;
        cout<<"Enter item options any of your choice: "<<endl;
        cin>>item;
        if(item=='a' || item=='A'){
            relay:
            cout<<"Please select option 1,2,3,4,5 any of your choice"<<endl;
            cout<<"1 : Veg-Thali : Price : Rs-250"<<endl;
            cout<<"2 : Burger : Price: Rs-50"<<endl;
            cout<<"3: Noodles : Price: Rs-100"<<endl;
            cout<<"4: Paneer Tikka: Price : Rs-200"<<endl;
            cout<<"5: Spring Roll : Price : Rs-150"<<endl;
            cout<<endl;
            cout<<"Enter input value any of your choice, so that order proceed: "<<endl;
            cin>>value;
            if(value==1){
                bill=bill+250;
            }
            else if(value==2){
                bill=bill+50;
            }
            else if(value==3){
                bill=bill+100;
            }
            else if(value==4){
                bill=bill+200;
            }
            else if(value==5){
                bill=bill+150;
            }
            else{
                cout<<"Please input correct value, try again!!!"<<endl;
                goto relay;
            }
            cout<<"Do you want to add more items on your order type y or n"<<endl;
            cout<<"Enter input y or n: "<<endl;
            cin>>other;
            if(other=='y' || other=='Y'){
                goto restarts;
            }
            else{
                return bill;
            }
        }
        else if(item=='b' || item=='B'){
            relays:
            cout<<"Please select option 1,2,3,4,5 any of your choice"<<endl;
            cout<<"1 : Non-veg Thali : Price : Rs-250"<<endl;
            cout<<"2 : Non-Veg briyani : Price: Rs-50"<<endl;
            cout<<"3: : Non-veg Tikka : Price: Rs-100"<<endl;
            cout<<"4: Non-veg Curry : Price : Rs-200"<<endl;
            cout<<"5: Non-veg noodles : Price : Rs-150"<<endl;
            cout<<endl;
            cout<<"Enter input value any of your choice, so that order proceed: "<<endl;
            cin>>value;
            if(value==1){
                bill=bill+250;
            }
            else if(value==2){
                bill=bill+50;
            }
            else if(value==3){
                bill=bill+100;
            }
            else if(value==4){
                bill=bill+200;
            }
            else if(value==5){
                bill=bill+150;
            }
            else{
                cout<<"Please input correct value, try again!!!"<<endl;
                goto relays;
            }
            cout<<"Do you want to add more items on your order type y or n"<<endl;
            cout<<"Enter input y or n: "<<endl;
            cin>>other;
            if(other=='y' || other=='Y'){
                goto restarts;
            }
            else{
                return bill;
            }
        }
        else{
            cout<<"Please type correct input, Try again"<<endl;
            goto restarts;
        }
    }
    else{
        cout<<"You have enter wrong charcter ,Please type again with correct character"<<endl;
        goto restart;
    }
    return bill;
}