#include <iostream>
#include <string>
using namespace std;

class Stack
{
    private:
        int top;
        int arr[5];

    public:
        Stack()
        {
            top=-1;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }              

        bool isEmpty()
        {
            if(top==-1)
                return true;

            else
                return false;
        }

        bool isFull()
        {
            if(top==4)
                return true;

            else
                return false;            
        }

        void push(int val)
        {
            if(isFull())
                cout<<"Stack is full"<<endl;

            else{
                top++;
                arr[top]=val;
                cout<<"Value inserted"<<endl;
            }
        }

        int pop()
        {
            if(isEmpty())
            {
                 cout<<"Stack is Empty";
                 return 0;
            }

            else
            {
                int popped = arr[top];
                arr[top]=0;
                top--;
                return popped;
            }
            
        }

        int count()
        {
            return top+1;
        }

        int peak(int pos)
        {
            if(isEmpty())
            {
                 cout<<"Stack is Empty";
                 return 0;
            }
            else{
                return arr[pos];
            }
        }

        void change(int pos, int val)
        {
            arr[pos]=val;
            cout<<"Value changed";
        }
        void display()
        {
            if(isEmpty())
            {
                 cout<<"Stack is Empty";
            }
            else{
                for(int i=4;i>=0;i--)
                {
                    cout<<arr[i]<<endl;
                }
            }
        }
};

int main()
{
    int choice=0,value,pos;
    Stack s1;

    while(choice!=9)
    {
        cout<<"1.Check for Underflow"<<endl;
        cout<<"2.Check for Overflow"<<endl;
        cout<<"3.Push"<<endl;
        cout<<"4.Pop"<<endl;
        cout<<"5.Count"<<endl;
        cout<<"6.Peak"<<endl;
        cout<<"7.Change"<<endl;
        cout<<"8.Dispay"<<endl;
        cout<<"9.Exit"<<endl<<endl;

        cout<<"Choice:";
        cin>>choice;

        switch(choice)
        {
            case 1: cout<<s1.isEmpty();
                    break;

            case 2: cout<<s1.isFull();
                    break;

            case 3: cin>>value;
                    s1.push(value);
                    break;

            case 4: cout<<s1.pop();
                    break;

            case 5: cout<<s1.count();
                    break;

            case 6: cin>>pos;
                    cout<<s1.peak(pos);
                    break;

            case 7: cin>>pos>>value;
                    s1.change(pos,value);
                    break;

            case 8: s1.display();
                    break;
                    
            case 9: cout<<"Exiting...";
                    exit(0);

            default: cout<<"Invalid choice"<<endl;
        }
    }
    return 0;
}