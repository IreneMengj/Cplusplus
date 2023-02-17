/*
Use C++ to realize an address book management system
The following functions need to be implemented in the system:

* Add a contact: Add a new person to the address book. The information includes name, gender, age, phone number, and home address. A maximum of 1000 people are recorded
* Display contacts: Displays information about all contacts in the address book
* Delete contact: Deletes a contact by name
* Contact Search: Displays information about a specified contact by name
* Modify Contact: Modify the specified contact by name
* Delete contacts: Deletes all information in the address book
* Exit address book: Exit the current address book

*/
#include<iostream>
using namespace std;

struct contact
{
    string name;
    string sex;
    int age;
    string phone;
    string address;
};



int main(){

    contact arr[1000];
    int n=0;
    int length=sizeof(arr)/sizeof(arr[0]);
    string nameinput;
    int i=0;
    
    while(true){
        cout<<"Welcome to your address book"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"1.Add a contact"<<endl;
        cout<<"2.Display contacts"<<endl;
        cout<<"3.Delete contact"<<endl;
        cout<<"4.Contact Search"<<endl;
        cout<<"5.Modify Contact"<<endl;
        cout<<"6.Delete contacts"<<endl;
        cout<<"7.Exit address book"<<endl;
        cout<<"*****************************"<<endl;
        cout<<"Please choose the above functions"<<endl;
        int option=0;
        cin>>option;
        switch (option)
        {
        case 1:
            if(n<1000){
                string name;
                cout<<"Please add name"<<endl;
                cin>>name;
                arr[n].name=name;
                cout<<"Please add sex"<<endl;
                cin>>arr[n].sex;
                cout<<"Please add age"<<endl;
                cin>>arr[n].age;
                cout<<"Please add number"<<endl;
                cin>>arr[n].phone;
                cout<<"Please add address"<<endl;
                cin>>arr[n].address;
            }
            n++;
            
            break;
        case 2:
            
            if(n==0){
                cout<<"please enter contact first"<<endl;
            }else{
                for(int i=0;i<n;i++){
                cout<<"contact name: "<<arr[i].name<<
                ", contact sex: "<<arr[i].sex<<
                ", contact age: "<<arr[i].age<<
                ", contact phone: "<<arr[i].phone<<
                ", contact address: "<<arr[i].address<<endl;
                }
            }
            break;
        case 3:
            if(n==0){
                cout<<"please enter contact first"<<endl;
            }else{
                cout<<"please enter one name"<<endl;
            cin>>nameinput;
            for(;i<n;i++){
                if(nameinput.compare(arr[i].name)==0){
                    for(int j=i;j<n-1;j++){
                        arr[j]=arr[j+1];
                    }
                   n--; 
                }else{
                   cout<<"this contact doesn't exist."<<endl; 
                }
            }
            }
            
            break;    
        case 4:
         if(n==0){
                cout<<"please enter contact first"<<endl;
            }else{
                cout<<"please enter one name"<<endl;
                cin>>nameinput;
                for(;i<n;i++){
                    if(nameinput.compare(arr[i].name)==0){
                    cout<<"contact name: "<<arr[i].name<<
                    "contact sex"<<arr[i].sex<<endl;
                    }else{
                        cout<<"this contact doesn't exist."<<endl;
                    }
                }
            }   
            break;  
        case 5:
            if(n==0){
                cout<<"please enter contact first"<<endl;
            }else{
                cout<<"please enter one name"<<endl;
                cin>>nameinput;
                for(;i<n;i++){
                    if(nameinput.compare(arr[i].name)==0){
                        cout<<"please enter name again"<<endl;
                        cin>>arr[i].name;
                        cout<<"please enter age again"<<endl;
                        cin>>arr[i].age;
                    }else{
                        cout<<"this contact doesn't exsit"<<endl;
                    }

                }
            }
            
            break; 
        case 6:
            n=0;
            cout<<"all information deleted"<<endl;
            break;            
        case 7:
            cout<<"system exits..."<<endl;
            return 0;
            break;
        default:
            break;
        }

    }
    

    }

