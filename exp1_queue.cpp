#include<bits/stdc++.h>
using namespace std;
int Front=-1,rear=-1,a[100],ch,n,x;

void enqueue(int n)
{
    if(rear==n-1)
    {
        cout<<"Queue overflow"<<endl;
        return;
    }
      else
        {
            if(Front==-1)
            {
                Front=0;
            }
            cout<<"Enter element to insert in queue: ";
        cin>>x;
        rear++;
        a[rear]=x;
        }

}
void dequeue()
{
    if((Front==-1&&rear==-1)||(Front>rear))
    {
        cout<<"Queue underflow!"<<endl;
        return;
    }


   else
   {
       if(Front==-1||Front>rear)
       {
           Front=0;
       }
        cout<<a[Front]<<" is deleted"<<endl;
        Front++;
   }

}
void display()
{
    if(((Front==-1)&&(rear==-1))||(Front==-1)||(Front>rear))
    {
        cout<<"Queue is empty!"<<endl;
        return;
    }

   else
    {
        cout<<"Elements in queue are: "<<endl;
        for(int i=Front;i<=rear;i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
   }


}
int main()
{
    cout<<"Enter size of queue: ";
    cin>>n;
     cout<<"select from below choices: "<<endl;
        cout<<"1. enqueue 2. dequeue 3.display"<<endl;
    do
    {

        cout<<"Enter choice: ";
        cin>>ch;
        switch(ch)
        {
        case 1:
            {
                enqueue(n);
                break;
            }
        case 2:
            {
                dequeue();
                break;
            }
        case 3:
            {
                display();
                break;
            }
        default:
            {
                cout<<"enter correct choice!"<<endl;
            }
        }
    }while(ch<4);

}
