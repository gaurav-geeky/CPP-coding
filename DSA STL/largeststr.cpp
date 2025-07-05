#include <iostream> 
using namespace std; 

int main() { 

    string s="what is your programming opinion about"; 
    string b , str; 

    cout<< "original : "<<s<<" \n"; 

    for (int i=0; i<s.size(); i++) { 

        if (s[i] != ' ') 
        {
            b.push_back(s[i]); 
        } 
        else { 
            break; 
        }
    } 
    cout<<" backup "<<"\n"; 

    for (int i=0; i<b.size(); i++) { 
        cout<<b[i]; 
    }   

    for (int i=0; i<s.size(); i++) { 
        if (s[i] != ' ') 
        { 
            str.push_back(s[i]); 

            if (i+1 == s.size()  &&  str.size()> b.size()) 
            { 
                b = str; 
            }
        } //                   loop go in this at last becase s=38, 
            //        when i=37  then  +1  = 38;    otherwise else me 

        else 
        { 
            if (str.size()> b.size() ) 
            { 
                b = str; 
            }
            str.clear(); //  it is cleared to save next word to compare . 
        }
    } 

    cout<<" \nfinal output : "<<b;  
    cout<<" \nsize of s : "<<s.size(); 
}


