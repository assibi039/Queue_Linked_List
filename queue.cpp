#include<iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class List
{
    private:
        struct node *f, *r;
    public:
        List()
        {
            f=NULL;
            r=NULL;
        }
        node* cnode(int num)
        {
            struct node *temp;
            temp=new (struct node);
            temp->data=num;
            temp->next=NULL;
            return temp;
        }
        void enqueue(int num)
        {
            struct node *temp;
            temp=cnode(num);
            if(r==NULL)
            {
            	f=temp;
            	r=temp;
            }
            else
            {
                r->next=temp;
                r=r->next;
            }
        }
        
        void dequeue(int num)
        {
        	struct node *a, *b;
  			f=f->next;
  			
        }
        
        void display()
        {
            struct node *temp;
            temp=f;
            while(temp!=NULL)
            {
                cout<<temp->data<<" ";
                temp=temp->next;
            }
        }
};
int main()
{
    List l;
    int ch,a;
    while(1)
    {
    cout<<"Enter the choice \n 1. Enqueue 2. Dequeue 3. display \n";
    cin>>ch;
    switch(ch)
    {
    	case 1:
    	cout<<"Enter the element to insert \n";
    	cin>>a; 
    	l.enqueue(a);
    	break;
    	case 2:
    	l.dequeue(a);
    	break;
    	case 3:
    	l.display();
    	break;
    	default:
    	return 0;
    }
	}
}

