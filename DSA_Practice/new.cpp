
#include <stdio.h>
#include <iostream.h>
#include <fstream.h>
#include <string.h>

#include <conio.h>

class Node
{
public:
int data;
Node*Next;
};
# define max_entries 25
Node* HashTable[max_entries]={NULL};
Node* Top[max_entries]={NULL};

const genrate_hash_key(const data)
{
return (data%max_entries);
}
void insert_data()
{
int data;
cout<<"\t Enter a value";
cin>>data;
int index=genrate_hash_key(data);
Node* Entry=new Node;
if(!Entry)
{
cout<<"factale Error unable to allocate memory to stored new elemnt "<<endl;
cout<<"press any key to return to menu";
getch();
return;
}
if(HashTable[index]==NULL)
{
Entry->data=data;
Entry->Next=NULL;
HashTable[index]=Entry;
Top[index]=Entry;
}
else
{
Entry->data=data;
Entry->Next=NULL;

Top[index]->Next=Entry;
Top[index]=Entry;
}
cout<<"press any key return to menu";
getche();
}
void print_data()
{
clrscr();
cout<<endl;
Node*Print;
for(int index=0;index<max_entries;index++)
{
if(index<10)
{
cout<<"\t HashTable[0"<<index<<"]:";

}
else
{
cout<<"\t HashTable[0"<<index<<"]:";
}
Print=HashTable[index];
if(Print!=NULL)
{
while(Print!=NULL)
{
cout<<Print->Next;
Print=Print->Next;

if(Print!=NULL)
cout<<",";
}
cout<<endl;
}
else
cout<<"_"<<endl;
}
cout<<"press any key to return to menu";
getche();
}
void search_data()
{
int data;
cout<<endl;
cout<<"Enter a value";
cin>>data;
int flag=0;
int index=genrate_hash_key(data);
Node*Print=HashTable[index];
if(Print!=NULL)
{
while(Print!=NULL)
{
if(Print->data==data)
flag++;
Print=Print->Next;
}
if(flag)

cout<<"The search elemnt is found"<<flag<<"times";
}
if(!flag)
cout<<"The search elemnt is not found"<<endl;
cout<<"press any key to return to menu";
getche();
}
void show_working()
{
char key=NULL;
do
{
clrscr();
gotoxy(10,5);
cout<<"impementation of hashing"<<endl;
gotoxy(10,8);
cout<<"selectd one of the listed operation"<<endl;
gotoxy(15,10);
cout<<"Press \'I\' to insert an elemnt"<<endl;
gotoxy(15,12);
cout<<"Press \'p\'print HashTable & data"<<endl;
gotoxy(15,14);
cout<<"Press \'S\'to search an elemnt"<<endl;
gotoxy(15,16);
cout<<"Press \'E\'to Exit"<<endl;
Input:
gotoxy(10,20);
cout<<" ";
gotoxy(10,20);

cout<<"Enter your choice:";
key=getche();
if(int(key)==27 || key=='e' || key=='E')
break;
else if(key=='i' || key=='I')
insert_data();
else if(key=='p' || key=='P')
print_data();
else if(key=='s' || key=='S')
search_data();
else goto Input;
}
while(1);
}