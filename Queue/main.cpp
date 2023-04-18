#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int queue[8], n=8, front=-1,rear=-1;
void Enqueue()
{
	int value;
	if(rear==n-1)
	{
		cout<<"Overflow";
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		cout<<"Enter value: ";
		cin>>value;
		rear++;
		queue[rear]=value;
	}
	
}

void Display()
{
	if(front==-1 || front>rear)
	{
		cout<<"Underflow";
	}
	else
	{
		cout<<"Queue: ";
		for(int i=front; i<=rear; i++)
		{
			cout<<queue[i]<<" ";
		}
	}
}

void Dequeue()
{
	if(front==-1 || front>rear)
	{
		cout<<"Underflow";
	}
	else
	{
		cout<<"Element delete is: "<<queue[front]<<endl;
		front++;
	}
}
int main(int argc, char** argv) 
{
	int ch;
	cout<<"----------------"<<endl;
	cout<<"1.Enqueue()"<<endl;
	cout<<"2.Dequeue()"<<endl;
	cout<<"3.Display()"<<endl;
	cout<<"4.Exit()"<<endl;
	cout<<"----------------"<<endl;
	
	do
	{
		cout<<"Enter choice: ";
		cin>>ch;
		switch(ch)
		{
			case 1:
				Enqueue();
				break;
				
			case 2:
				Dequeue();
				break;
				
			case 3:
				Display();
				break;
				
			case 4:
				cout<<"Exit"<<endl;
				
			default:
				cout<<"Invalid choice";
				
		}
	}while(ch!=4);
	return 0;
}