#include <iostream> 
using namespace std; 

int main() {
    string a; 
    cout<<"which website: "<<endl; 
    cin>>a; 

    if(a=="amazon") {
        cout<<"wel to amazon home : "<<endl; 
        cin>>a; 
        if(a=="cloth") {
            cout<<" kids, men, women : "<<endl; 
            cin>>a;  
            if(a=="kids") {
                cout<<"diapers only :";
            }
            else if(a=="mens") {
                cout<<"trousers and shoes";
            } 
            else {
                cout<<"not available :";
            }
        } 
        else if(a=="food") {
            cout<<"there is only junk food "; 
            cin>>a; 
            if(a=="burger") {
                cout<<"cheese or paneer"; 
                cin>>a; 
                if (a=="cheese") {
                    cout<<"cheese khatam ho gya, kuchh aur bol :";
                } 
                else {
                    cout<<" no other items available:"; 
                }
            } 
            else if (a=="sandwich") {
                cout<<"grilled or salad";
            } 
            else {
                cout<<"fried rice only :"; 
            }

        } 
        else {
            cout<<"no other item available: yet :"<<endl; 
        }
    } 
    else if(a=="flipkart") {
        cout<<"wel to flipkart home: "<<endl; 
            cin>>a; 
            if(a=="gadgets") {
                cout<<"mobile or laptop"<<endl;
                cin>>a; 
                if (a=="mobile") {
                    cout<<" redmi,  realme etc:"<<endl; 
                } 
                else {
                    cout<<" laptop chor bazar ke hain "; 
                }
            } 
            else {
                cout<<"no such item there"; 
            }
    }
    else {
        cout<<"no such shopping mart: "<<endl;
    }

}