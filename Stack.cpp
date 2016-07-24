#include <iostream>
#include "Stack.h"

using namespace std;

int main()
{
    int choice, item;
    stack stck;
    while (1)
    {

        cout<<"\n(1) Push"<<endl;
        cout<<"(2) Pop"<<endl;
        cout<<"(3) Display"<<endl;
        cout<<"(4) Exit"<<endl;
        cout<<"Enter your Choice: " ;
        cin>>choice;

        switch(choice)
        {
        case 1:
            cout<<"\nEnter value to be pushed into the stack: ";
            cin>>item;
            cout<<"\n";
            top = stck.push(top, item);
            break;
        case 2:
            top = stck.pop(top);
            break;
        case 3:
            stck.display(top);
            break;
        case 4:
            exit(1);
            break;
        default:
            cout<<"\n Sorry Wrong Choice!\n"<<endl;
        }
    }
    return 0;
}

