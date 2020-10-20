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
            esle if(front==rear)
            {
                int a = arr[front];
                arr[front]=0;
                front=rear=-1;
                return a;
            }
            else
            {
                a = arr[front];
                arr[front]=0;
                front++;
                return a;
            }
            
        }
}