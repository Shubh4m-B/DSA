#include<iostream>
#include<string>
#include<conio.h>

using namespace std;

class Queue
{
    private:
        int front;
        int rear;
        int arr[5];
    public:
        Queue()
        {
            front=rear=-1;
            for(int i=0;i<5;i++)
            {
                arr[i]=0;
            }
        }

        bool isEmpty()
        {
            if(rear==-1 && front==-1)
                return true;

            else
                return false;
        }

        bool isFull()
        {
            if(rear==4)
                return true;

            else
                return false;
        }

        void enqueue(int val)
        {
            if(isFull())
            {
                cout<<"Queue is Full";
                return;
            }
            if(isEmpty())
            {
                front=rear=0;
                arr[rear]=val;
            }
            else
            {
                rear++;
                arr[rear]=val;
                
            }
        }

        int dequeue()
        {
            if(isEmpty())
            {
                cout<<"Queue is already empty";
                return 0;
            }
            else if(front==rear)
            {
                int a = arr[front];
                arr[front]=0;
                front=rear=-1;
                return a;
            }
            else
            {
                int a = arr[front];
                arr[front]=0;
                front++;
                return a;
            }
            
        }
};

int main()
{
    int choice = 0,num;
    Queue q;
    while(choice!=5)
    {
        cout<<"1.Is Empty"<<endl;
        cout<<"2.Is Full"<<endl;
        cout<<"3.Enter into the Queue"<<endl;
        cout<<"4.Delete from Queue"<<endl;
        cout<<"5.Exit"<<endl<<endl;

        cout<<"Choice:";
        cin>>choice;

        switch(choice)
        {
            case 1 :cout<<q.isEmpty()<<endl;
                    break;
            case 2 :cout<<q.isFull()<<endl;
                    break;
            case 3 :cin>>num;
                    q.enqueue(num);
                    break;
            case 4 :cout<<q.dequeue()<<endl;
                    break;
            case 5 :cout<<"Exiting...";
                    break;
            default:cout<<"Invalid choice!";
        }
    }
    return 0;
}