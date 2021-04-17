#include<stdio.h>
#include<stdlib.h>

struct project{
	int data;
	struct project *next;
};
struct project *start=NULL,*temp,*node,*first,*last,*med,*k;

void ADD ();
void addbeg();
void addend();
void addintm();

void MODIFICATION ();
void modbeg();
void modend();
void modintm();

void REMOVE();
void rembeg();
void remend();
void remintm();

int menu(int s);
int create();
void traverse();	


int main()
{
	int choice;
	do{
		printf("\nPress 1 to perform addition operation on linked list");
		printf("\nPress 2 to perform modification operation on linked list");
		printf("\nPress 3 to perform remove operation on linked list");
		printf("\npress 4 to show linked list");
		printf("\npress 5 to create linked list");
		printf("\npress 0 to close");
		printf("\n\nEnter your choice : ");
		scanf("%d",&choice);
		if(choice==0)
		exit(1) ;
		else if(choice==1)
		ADD ();
		else if(choice==2)
		MODIFICATION ();
		else if(choice==3)
		REMOVE();
		else if(choice==4)
		menu(4);
		else if(choice==5)
		menu(5);
		else
		{
			printf("\nINVALID INPUT \n");
		}
	}
	while(choice!=0);
	return 0;
}

int menu(int s)
{
	if(s==4)
	traverse();
	if(s==5)
	create();
	return 0;
}

int create()
{
	char choice;
	do
	{
		node=(struct project*)malloc(sizeof(struct project));
		printf("Enter data in your linked list : ");
		scanf("%d",&node->data);
		node->next=NULL;
		if(start==NULL)
		{
			temp=node;
			start=node;
		}
		else
		{
			temp->next=node;
			temp=temp->next;
		}
		printf("\nDo u want to create a new node(enter 'y' or 'Y' for yes):");
		fflush(stdin);
		scanf("%c",&choice);
	}while(choice=='Y'||choice=='y');
	return 0;
}

void traverse()
{
	printf("\nLinked list :");
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		if(temp->next==NULL)
		{
			printf("%d",temp->data);
		}
		else
		{	
		printf("%d->",temp->data);
     	}
	}
	printf("\n");
	if(start==NULL)
	{
	  printf("is empty\n");
	}
}

void ADD ()
{
	if(start==NULL)
	{
		printf("\nCreate linked list first\n");
		menu(5);
		menu(4);
	}	
	int choice;
	do{
		printf("\nPress 1 to perform addition in the beggeining");
		printf("\nPress 2 to perform addition in the end");
		printf("\nPress 3 to perform addition at any position");
		printf("\npress 4 to show linked list");
		printf("\nPress 0 to close program");
		printf("\nEnter Your Choice ");
		scanf("%d",&choice);
		if(choice==0)
		exit(1);
		else if(choice==1)
		addbeg();
		else if(choice==2)
		addend();
		else if(choice==3)
		addintm();
		else if(choice==4)
		menu(4);
		else
		{	
		printf("\nINVALID INPUT\n");
		}
	}while(choice);
}

void addbeg()
{
	first=(struct project*)malloc(sizeof(struct project));
	printf("\nEnter element to add = ");
	scanf("%d",&first->data);
	first->next=start;
	start=first;
	menu(4);
}

void addend()
{
	last=(struct project*)malloc(sizeof(struct project));
	printf("\nEnter element to add = ");
	scanf("%d",&last->data);
	node->next=last;
	last->next=NULL;
	node=last;
	menu(4);
}

void addintm()
{
	int i,j=1;
	printf("\nEnter position where you want to add  = ");
	scanf("%d",&i);
	if(i==1)
	{
		addbeg();
	}
	else
	{
	med=(struct project*)malloc(sizeof(struct project));
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		
		if(i==j)
		{
			printf("\nEnter element you want to add = ");
			scanf("%d",&med->data);
			k->next=med;
			med->next=temp;
		}
		j++;
		
		
		printf("%d",j);
		k=temp;
	}
	
	if(i>=j)
	{
	   printf("\nINVALID OPTION");
    }
	menu(4);
   }
}

void REMOVE()
{
    if(start==NULL)
	{
		printf("\ncreate linked list first\n");
		menu(5);
		menu(4);
	}		
	int choice;
	do{
		printf("\nPress 1 to deleting first node");
		printf("\nPress 2 to delete last node");
		printf("\nPress 3 to delete at any position");
		printf("\npress 4 to show linked list");
		printf("\nPress 0 to close program");
		printf("\nEnter Your Choice ");
		scanf("%d",&choice);
     	if(choice==0)
		exit(1);
		else if(choice==1)
		rembeg();
		else if(choice==2)
		remend();
		else if(choice==3)
		remintm();
		else if(choice==4)
		menu(4);
  	    else
		{	
		printf("\nINVALID INPUT\n");
		}
	}while(choice!=0);
	exit(0);
}

void rembeg()
{
	first=start;
	start=start->next;
	menu(4);
}

void remend()
{
	temp=start;
	last=(struct project*)malloc(sizeof(struct project));
	while(temp->next!=NULL)
	{
		last=temp;
		temp=temp->next;
	}
	last->next=NULL;
	menu(4);
}

void remintm()
{
	int i,j=1;
	printf("\nEnter position where you want to remove = ");
	scanf("%d",&i);
	if(i==1)
	{
		rembeg();
	}
	else
	{
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		
		if(i==j)
		{
			k->next=temp->next;
			temp=k;
		}
		j++;
		k=temp;
    }
	if(i>=j)
	{
	   printf("\nINVALID OPTION\n");
    }    
    menu(4);
    }
}

void MODIFICATION ()
{
	if(start==NULL)
	{
		printf("\ncreate linked list first\n");
		menu(5);
		menu(4);
	}			
	int choice;
	do{
		printf("\nPress 1 to modify first node");
		printf("\nPress 2 to modify last node");
		printf("\nPress 3 to modify at any position");
		printf("\npress 4 to show linked list");
		printf("\nPress 0 to close program");
		printf("\nEnter Your Choice ");
		scanf("%d",&choice);
     	if(choice==0)
		exit(1);
		else if(choice==1)
		modbeg();
		else if(choice==2)
		modend();
    	else if(choice==3)
		modintm();
		else if(choice==4)
		menu(4);
		else
		{	
		printf("\nINVALID INPUT\n");	
		}	
	}while(choice!=0);
	exit(0);
}

void modbeg()
{
	int num;
	printf("\nEnter element you want to modify on beginning : ");
	scanf("%d",&num);
	start->data=num;
	menu(4);
}

void modend()
{
	int num;
	last=(struct project*)malloc(sizeof(struct project));
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		last=temp;
	}
	printf("\nEnter element you want to modify on end : ");
	scanf("%d",&num);
	last->data= num;
	menu(4);
}

void modintm()
{
	int i,j=1,num;
	printf("\nEnter position where you want to modify = ");
	scanf("%d",&i);
	for(temp=start;temp!=NULL;temp=temp->next)
	{
		
		if(i==j)
		{
			printf("\nEnter element you want to modify: ");
	        scanf("%d",&num);
	        temp->data = num;
		}
		j++;
		
    }
	if(i>=j)
	{
	   printf("\nINVALID OPTION\n");
    }    
    menu(4);
}

