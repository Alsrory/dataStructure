/*      ************     TOTAL DATA STRUCTURE PORJECT ************
/*        -THE FINAL Project OF LEVEL 2
/*        -DEPARTMENT  INFROMATION TECHNOLOGY****
/*       -BUTLT USING Dev-c++ 5.4.9
/*        -By Student :- 
                      1- Wajdi Abdulrahman Ahmed Saeed
                      
                     
*/
#include<iostream>
using namespace std;
typedef double ITEM;
#define size 5
void firstsmeseter();       //this function first smeseter    
void secondsmeseter();      // this function secondsmeseter

struct arrayonedimention{    // this struct of  one dimention array operations
//function to enter elements to the array
	void insert(double arr[])
	{int j; 
		cout<<"\n enter the element of array pelase...\n";
	for (j=0;j<size;j++){
     cin>>arr[j];
	 }
cout<<"\n inser element is finshed...\n";
}
//function to print of array
void print (double arr[]){
	cout<<"\n the element of array is....\n";
	for (int i=0;i<size;i++)
	if(arr[i]!=-1)
	cout<<arr[i]<<"  ";
	cout<<"\n";
}
//FUNCTION TO DELETE FROM ONE DIMENSION ARRAY
void deletitem(double arr[],int item){
bool found=false;
int index=0;int i;
for ( i=0;i<size;i++){
if(item==arr[i]){
index=i;
arr[i]=-1;
found=true;
break;
}}
if(found){
for	(int i=index;i<size-1;i++)
arr[i]=arr[i+1];

arr[size-1]=-1;
cout<<"\n the delet sucss";
}
else{
	cout<<"\n not found the emnet \n";

}
}
};
   /* this struct of  one dimention array  operations by pointers*/                                        
struct onedimentionarraybypointers{  
	//function to insert element to the  1 array
	void insert (int *arr,int size2) {
    for (int i=0;i<size2;i++)
     cin>>arr[i];
      cout<<"\n";
}
//function to print element from the array
    void print (int *arr,int size2){
	for (int i=0;i<size2;i++)
	if(arr[i]!=-1)
	cout<<arr[i]<<"  ";
	
}
//function to delete from the 1 array
    void deletitem (int *arr,int size2,int item){
	bool found=false;
	int index;
	for (int i=0;i<size2;i++){
	if (arr[i]==item){
		found=true;
		index=i;	
		arr[i]=-1;
			
	break ;
}}
if (found)
{for (int i=index;i<size2-1;i++)
{ arr[i]=arr[i+1];

}
arr[size2-1]=-1;
cout<<"delet is successed\n";
}
else {
cout<<"not found .......\n";
	
}	

}
//function to determine maximum element in the 1 array
int maxvalue (int *arr,int size2) {
int	max=*arr;
	for(int i=0;i<size2;i++)
	if (*(arr+i)>max)
	 max=*(arr+i); 
	 cout<<"\n the max volue in array ="<<max;	
}
}; 

                 /*Struct to execute the operation at Tow Dimensional Arrays*/
struct TowDimentionArray{
	double myarray[size][size];
                     //funcation to insert items to Array	
void insert(double arr[][size],int row){
	cout<<"\n enter the data to array\n";
	for(int i=0;i<row ;i++){
	for(int j=0;j<size;j++){
	cin>>arr[i][j];}
    }
	
 }
                     // funcation to print elements of Array 
void print(double arr[][size],int row){
	cout<<"the element of array\n";
	for(int i=0;i<row;i++){
	for(int j=0;j<size;j++){
		if (arr[i][j]!=-1)
	cout<<arr[i][j]<<"   ";}
	cout<<endl;
	}

}
                          //function to get maxmum of diagonl 
double maxofdiagonal(double arr[][size],int row ){
	
	double max=arr[0][0];
	for(int i=0;i<row;i++){
		for(int j=0;j<size;j++){
			if(i==j){
				if(arr[i][j]>max){
					max=arr[i][j];
				}
			}
		}
	}
return max;
}
//funcation to get minimum element in primary diagonal 
double MinimumOfPrimaryDiagonal (double arr[][size],int row){
	double min=arr[0][size-1];
	for(int i=0;i<row;i++){
		for(int j=0;j<size;j++){
			if(i+j==2){
				if(arr[i][j]<min){
				
				min=arr[i][j];
			}
          }
		}
	  }
	return min;
}
//function to delete an element from 2d Array
void deleteitem(double arr[][size],int row,double item){
	bool found=false;
	int rowindex,colindex;
	for(int i=0;i<row;i++){
		for(int j=0;j<size;j++){
			if(arr[i][j]==item){
				found=true;
				rowindex=i;
				colindex=j;
				arr[i][j]=-1;
			}
		}
	}
	if(found){
		for(int i=colindex;i<size-1;i++){
			arr[rowindex][i]=arr[rowindex][i+1];
		}
		arr[rowindex][size-1]=-1;
	}else{
		cout<<"\n the item is not found\n";
	}
			
  }
};
     // Struct to execute the operation at Tow Dimensional Arrays by using pointers
struct TowDimentionArrayPointer{	
      //funcation to insert items to Array
void insert (int**arr,int row,int col)
{cout<<"enetr the number of the array\n";
for(int i=0;i<row;i++)
for (int j=0;j<col;j++)
cin>>arr[i][j];
}
    // funcation to print elements of Array
void pirnt (int**arr,int row,int col)
{for (int i=0;i<row;i++){
	for(int j=0;j<col;j++)
if (arr[i][j]!=-1)
cout<<arr[i][j]<<" ";
cout<<"\n";
     }
 }
//funcation to get minimum element in primary diagonal 
double MinimumOfPrimaryDiagonal(int **arr,int row,int col){
	double min=arr[0][col-1];
	if(row!=col){
		cout<<"the min number not found\n";
	return 0.0;}
			
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(i+j==2){
				if(arr[i][j]<min){
				
				min=arr[i][j];
			}
          }
		}
	  }
	return min;}

//function to delete an element from 2d Array
double deleteItem (int**arr,int row,int col,int item)
{bool found=false;
int indexrow;
int indexcol;
for(int i=0;i<row;i++){
for(int j=0;j<col;j++)
if (arr[i][j]==item){
indexrow=i;
 indexcol=j;
found=true;
arr[i][j]=-1;
break ;
}}
if (found){
	for (int i=indexcol;i<row-1;i++){
arr[indexrow][i]=arr[indexrow][i+1];
}
arr[ indexrow][col-1]=-1;
cout<<"deletion succcessed\n";
}
else {
cout<<"deletion failed\n";
}
return 0;
}
//function to get maxmum element in Tow Dimensional Arrays 
double maxmumItem(int**arr,int row,int col )
{int i=0,j=0,max;
 max =arr[i][j];
for (i=1;i<row;i++){
for (j=1;j<col;j++)
if (arr[i][j]>max)
max=arr[i][j];}
return max;
}

};
struct student {          // this struct contain infromation of student
	char name [25];
	int ID;
	string level;
	long  number ; 
} ;
struct student2{              // this struct by using poneters
	char name [20];
	long ID;
	int level;
	long phone_number;
}; 
     //creating the unordered List using Record
struct UnOrderedList{
	int currentposition;
	int listItem[size];
	
//funcation to insert element to list
	void insert(int item){
		if(isFull()){
			cout<<"\n the list is full we cannot insert element\n";
			return;
		}
		listItem[currentposition++]=item;	
	}
//funcation to delete element from List
void deleteItem(int item){
	if(isEmpty()){
		cout<<"\n cannot delete from Empty list  \n";
		return;
	}
	int index=0;
	bool found=false;
	while (index!=currentposition){
		if(item==listItem[index]){
			int start=index;
			found=true;
			while(start!=currentposition){
				listItem[start]=listItem[start+1];
			start++;	
			}
			break;
		}
		index++;
	}
	if(found){
	currentposition=currentposition-1;
	cout<<"\n Item delete successfully\n";
	return;	
	}
	cout<<"\n No item found in the list\n";
}
//funaction to get next element
int getNextItem(int item){
	int indexIfIsFound=search(item);
	if(indexIfIsFound!=-1&&indexIfIsFound<currentposition)
	return listItem[indexIfIsFound+1];
	return 0;
}
//funcation to search about an element
int search(int item){
	if(isEmpty()){
		cout<<"\n the list is Empty\n";
		return -1;
	}
	int index=0;
	bool found =false;
	while(index!=currentposition){
		if(item==listItem[index]){
			found=true;
			break;
		}
		index++;
	}
	if(found){
		return index;
		}else{  cout<<"not found elemnent  .....\n";
		return -1;}
	}

//funcation to remove  all element from the list 
	void makeEmpty(){
		for(int i=0;i<currentposition;i++){
			listItem[i]=0;
		}
		currentposition=0;
	}	
	bool isFull(){
		return currentposition==size-1;
	}
	bool isEmpty(){
		return currentposition==-1;
	}
	int length(){
		return currentposition+1;
	}
	// funcation to print all element in the list
	void print(){
		if(isEmpty()){
			cout<<"\n the List is Empty\n";
			return ;
		}
		for(int i=0;i<currentposition;i++){
		cout<<listItem[i]<<"   ";}
	
     	cout<<"]\n";
	
	}
	
		
};
struct orderedlist{              // this struct of sorted list

int currentposition;            // this poneter in list  
int listitem[size];           // this size of sorted list

void insert(int item){     // function added item into list

if (isfull()){
cout<<" \n the list is full";
return;
}
if (isEmpty()){

listitem[currentposition++]=item;
cout<<" item add is succecflly";
return;
}
bool added=false;
int index=0;

while(index<currentposition){

if(listitem[index] > item ){
int start=currentposition;
while(start>index){

listitem[start]=listitem[start-1];
start--;
}

listitem[index]=item;
added=true;
break;
}
index++;
}
               
	// if item not added then add the last one

if(!added)
listitem[currentposition]=item;
cout<<"\n item are added successfully";
currentposition++;
}

void deleteitem(int item){          // this funcation delete item from list

if(isEmpty()){

cout<<" we can't deleted from empty list ";
return;
}
int index=0;
bool found=false;

while(index!=currentposition){

if(item==listitem[index]){

int start=index;
found=true;

while(start!=currentposition){

listitem[start]=listitem[start+1];
start++;
 }
break;
}
index++;
}
if(found) {
currentposition=currentposition-1;
cout<<" item delet succcessclly";
return; 
}
cout<<"\n no item found in list";
}
int getNextitem(int item){         // this funcation  get Next item frtom lis

int indexifisfound=search(item);
if(indexifisfound!=-1 && indexifisfound < currentposition)
return listitem[indexifisfound+1];

return 0;
}
int search(int item){

if(isEmpty()){

cout<<"\n the list is empte ";
return -1;
}
int index=0;
bool found=false;

while(index!=currentposition){

if(item==listitem[index]){

found=true;
break;
}
index++;
}
if(found)
return index;
return -1;
}

void makeEmpty(){                         //the function to make empty
for (int i=0 ; i< currentposition ; i++){

listitem[i]=0;
}
cout<<"\n the list are clearde ";
currentposition=0;
}
bool isfull(){

 int n =currentposition ==size-1;
return n;
}
bool isEmpty(){
return currentposition==0;
}
int lenght(){
return currentposition;
}
void print(){
if(isEmpty()){
cout<<"\n is empty list";
return;
}
 int index=0;
 cout<<"\n ";
 
 while(index!=currentposition){
 
 cout<<listitem[index]<<"  ";
 index++;
 }
 }
 };
 struct stack{                 //this struct of stack operation 
	int Top;
	int StackData[size] ;
	void Initialize(){
		Top=-1;
	}
	bool IsFull(){
		return Top==size-1;
	}
	bool IsEmpty(){
		return Top==-1;
	}
//function to add data to the stack
void push(int item){
	if(IsFull()){
		cout<<"\n the stack overFlow";
		return;
	}
	StackData[++Top]=item;
}
//function to pop data from the stack
int POP(){
if(IsEmpty()){
	cout <<"\n the stack underFlow";
	return 0;
}
return StackData[Top--];
}
//funcation to get peek() of the stack
int peek(){
	if(IsEmpty()){
	cout <<"\n the stack underFlow";
	return 0;	
	}
	return StackData[Top];
}
//function  get the number of elemenet on the stack
int getSize(){ return Top+1;} 
// function that transe the stack using 2 stack
void transStack(){
	if(IsEmpty()){
		cout <<"\n the stack underFlow";
		return;
	}
	stack s1,s2;
	s1.Initialize();
	s2.Initialize();
	while (!IsEmpty()){
		s1.push(POP());
	}
	while(!s1.IsEmpty()){
		s1.push(s1.POP());
	}
	while (!s2.IsEmpty()){
		push(s2.POP());
	}
	cout<<"\n Stack are transed Successfully";
}
//function to delete an Item from the stack
void DeleteItem(int item){
	if (IsEmpty()){
		cout<<"\n stack underflow";
		return;
	}
	int data;
	stack s1;
	s1.Initialize();
	bool found=false;
	while(!IsEmpty()){
		data=POP();
		if(data==item){
			cout<<"\n Item are deleted successfully";
			found=true;
			break;	
		}
		s1.push(data);
	}
	if (!found)
	cout<<"\n element  "<<item<<"  are not found";
	//now push the poped item to the stack again
	while(!s1.IsEmpty())
	push(s1.POP());
}
            // function to get maximum element in the stack
int getMax(){
	if (IsEmpty()){
		cout<<"\n stack underflow";
		return 0;
	}
	int max=peek();
 stack s1;
 s1.Initialize();
	s1.push(POP());
	while(!IsEmpty()){
		if(peek()>max){
			max=peek();
		}
		s1.push(POP());
	}
//return allthe value of stack from the other stack
while(!s1.IsEmpty())
push(s1.POP());
return max;
}
//function to get min element on stack
int getMin(){
if(IsEmpty()){
	cout<<"\n stack underflow";
	return 0;
}
int min=peek();
stack s1;
s1.Initialize();
s1.push(POP());
while (!IsEmpty()){
	if(peek()<min){
		min=peek();
	}
s1.push(POP());	
}
while(!s1.IsEmpty())
push(s1.POP());
return min;
}
           // function to print all element of the stack
void print(){
	if(IsEmpty()){
cout<<"\n stack underflow";
return;
	}
	int index=Top;
	while(index!=-1){
		cout<<StackData[index--]<<"  ,  ";
	}
	cout<<" }\n";
}

};
 //end struct defination
 struct Queue{
	int front ,rear;
	int queueItem[size];
	void Initialize(){
	front=-1;
	rear=-1;	
	}
	// function to insert item to the queue
	void enqueue(int item){
	if(isFull()){
		cout<<"\n the queue is full\n";
		return ;
	}
	queueItem[++rear]=item;	
	}
	bool isFull(){
	if( rear==size-1);
		return 0;
	}
	bool isEmpty(){
	if( rear==front);
	return 0;
	}
//	function to delete item from the queue
	void dequeue(){
		if(isEmpty()){
			cout<<"\n the queue is empty\n";
			return;
		}
	queueItem[++front];
	cout<<"\n remove element from queue is true\n";
	}
	//funcation to search about item in the queue
 int search(int item){
	if(isEmpty()){
		cout<<"\n the queue is empty\n";
		return 0;
	}
	int index=front+1;
	bool found=false;
	while(index<=rear){
		if(item==queueItem[index]){
			int start=index;
			found=true;
			cout<<"\n the element is found in the ";
			return start+1;
		break;
		}
		index++;
if(found){
	cout<<"\n not found the element in the queue\n";
return 0;	
}	
	}  }
// function to delete any item from the queue	
void deleteing (int item){
if(isEmpty()){
cout<<"\n the queue is empty\n";
			return;			
		}
		int index=front+1;
		bool found=false;
		while(index<=rear){
			if(item==queueItem[index]){
				int start=index;
				found=true;
				while(start>front){
			queueItem[start]=queueItem[start-1]	;
			start--;}
				break;
			}
			index++;
		}
		if(found){
		queueItem[++front];
	}   else 
	cout<<"\n not found item in the queue \n";
		}
	//function to print of the queue	
 void print(){
 	if(isEmpty()){
cout<<"\n the queue is empty\n";
			return;	
	 }
	 int index=front+1;
	 while(index<=rear){
	 cout<<queueItem[index]<<"  ";
	 index++;	
	 }
       
cout<<"\n\n";	 
 }
}; //the end of sturct
//###############        THE FUNCTION OF LINKED LIST     ################
struct Node {
	double data;
	Node *next;
	Node (){
		data=0,0;
		next=NULL;
	}
	Node(ITEM e){
		data=e;
		next=NULL;
	}
	
};//   end of node declartion
//     linked list ADT
struct LinkedList{
Node *Head;
LinkedList(){
Head=NULL;	
}
//FUNCTIONTO ADDED ITEM TO THE FIRST  OF LINKED LIST
void addfirst(Node *e){
	if(IsEmpty()){ 
	Head=e;
	cout<<"\n empty list-node are added first successfully-\n";
	return;	
	}
	e->next=Head;
	Head=e;
	cout<<"\t node are added first successfully\n";
}
//Function to added node to the last of linked list
void addlast(Node * e)	{
	if(IsEmpty()){
		Head=e;
	cout<<"\n empty list-node are added last successfully-";
	return;		
	}
	Node *n=Head;
	while(n->next!=NULL){
		n=n->next;
	}
	n->next=e;
	cout<<"\n node are added to the last list";
}
//Function to added item after any item in the linkwd list
void addafter(Node *pre,Node *e ){  //function to added after same node
	if(IsEmpty()){
	cout<<"\n empty list";
	return;		
	}
	e->next=pre->next;
	pre->next=e;
	cout<<"\n Node"<<e->data<<"  are added after  successfully \n";
	
}
// function to search about any node
Node* search(Node* e){
if(IsEmpty()){
	cout<<"\n empty list";
	return NULL;		
}
	Node * n=Head;
	while(n!=NULL){
	if(n->data==e->data){
		break;
	}
	n=n->next;	
	}cout<< n;
return n ;		
}
//function to delete node from the first of linked list
void removefirst(){
	if(IsEmpty()){
	cout<<"\n empty list";
	return;		
	}
Node * n=Head;
Head=n->next;
n->next=NULL;
delete n;	
}
// function to delete node from the last of linked list
void removelast(){
	if(IsEmpty()){
	cout<<"\n empty list";
	return;		
	}
if(getsize()==1){
removefirst();
return;		
}
Node* n=Head;
while(n->next->next!=NULL){
	n=n->next;
}
Node* temp=n->next;
n->next=NULL;
delete temp;
}
//faniction to delete node from any position  
void removeNode(Node* e){
	if(IsEmpty()){
	cout<<"\n empty list";
	return;		
	}
	Node* n=search(e);
	if(n!=NULL){
	Node* i;
	for(i=Head; i->next->data!=n->data;i=i->next){	
	}
	i->next=n->next;
	n->next=NULL;
	delete	n;		
	}
}
//faniction to print NODE
void print(){
if(IsEmpty()){
	cout<<"\n empty list";
	return;		
	}
	Node* n=Head;
	cout<<"\n the element of linked list are : \n";
	while(n!= NULL)	{
		cout<<"["<<n->data<<"]"<<"---> ";
		n=n->next;
	}
}
//faniction to ditermen the linth of linkedlist
int getsize(){
	if(IsEmpty()){
	cout<<"\n empty list";
	return 0;		
	}
	Node* n=Head;
	int i=0;
	while(n!=NULL){
		n=n->next;
		i++;
	}
	return i;
}

bool IsEmpty(){ return Head==NULL;
}
};  //the end sturct
//##################### the main function #####################
int main(){
 int choice; 
cout<<"----------------------------------------------------------------------------\n";
cout<<"\n **************************************************************************\n";
cout<<"\t************     TOTAL DATA STRUCTURE PORJECT ************\n";
cout<<"\n *****************************************************************\n";
cout<<"\t\t[ * ]\t THE PORJECT ENTERANCE CHICE [*]\n";
cout<<"\t\t[ 1 ] - FIRST SEMSTER .\n";
cout<<"\t\t[ 2 ] - SECOND SEMSTER .\n";
cout<<"\t\t[ 3 ] - EXIT PORGAM .\n\n";
cout<<"**********************************************************************************************\t\n";
  do { cout<<"***this chosen in main function** ";
   cout<<"\n enter  your choice ... :-\t";
  cin>>choice;
   
   switch (choice){
   	case 1: firstsmeseter();   break;
   	case 2: secondsmeseter();  break;
    case 0:    break;
   	default :cout<<"\n the choice ["<<choice<<"]you entered is illagei";
   }     //END SWITCH 
  }while (choice!=3);      //END DO;	 
return 0;
}  //the end of function main
void  firstsmeseter(){       //THE FUNCATION OF  FIRST SEMESTER 
     int choice;
 do{   
    cout<<"\n ****************************************************\n";
    cout<<"\t ****** This function is first smeseter ************\n";
    cout<<" [ 1 ]- The Opration On ONE ARRAY  DIMENTION \n";
    cout<<" [ 2 ]- The Opration On ONE ARRAY  DIMENTION By using Pointers \n";
    cout<<" [ 3 ]- The Opration On TWO ARRAY  DIMENTION \n";
    cout<<" [ 4 ]- The Opration On TWO ARRAY  DIMENTION By Using Pointers \n";
    cout<<" [ 5 ]- The Opration By using struct -------\n";
    cout<<" [ 6 ]- The Opration By using Pointers ofstruct-------\n";  
    cout<<" [ 7 ]- The Opration On Unsorted list ---------\n";
    cout<<" [ 8 ]- The Opration On Ordered list ---------\n";
    cout<<" [ 9 ]- The Opration On the stack ---------\n";
    cout<<" [10 ]- The Opration On THE QUEUE ---------\n";
    cout<<" [11 ]- THE Opration On THE LINKED LIST -----\n";
    	cout<<"\n enter number chooce please\n";
	cin>>choice;
switch(choice){
	case 1:{                                            //CASE 1 USING ARRAY ONE DIMENTION 
	double arr[size],item;
	arrayonedimention array;
    	cout<<"\n the one dimention array operations\n";
 array.insert (arr);
	cout<<"\n enter the number to delet\n";
	cin>>item;
	array.deletitem(arr,item);
	 array.print (arr);

		break;
	}
	case 2:{onedimentionarraybypointers pointersarray1;  // CASE 2 USING ARRAY ONE DIMENTION BY POINTERS
	int *arr,size2,item;
	cout<<"enter the size of array=\n";
	cin>>size2;
	arr=new int[size2];
	cout<<"insert the elemenet of array\n";
	pointersarray1.insert(arr,size2);	
	cout<<"\n enter item to delete=\n";
	cin>>item;
	pointersarray1.deletitem(arr,size2,item);
	pointersarray1.print(arr,size2);
	pointersarray1.maxvalue(arr,size2);

		break;
	}
	case 3:{TowDimentionArray arr;          /* this case  using  Tow Dimention  Array */
double myarray[size][size];

cout<<"\n Enter elements to the Array ";
arr.insert(myarray,size);	

	cout <<"\nThe element of the Array\n";
	arr.print(myarray,size);
	
cout<<"\n the max element of main diagoal =    "<<arr.maxofdiagonal(myarray,size);
	
cout<<"\n the min element of primary diagoal =   "<<arr.MinimumOfPrimaryDiagonal(myarray,size);	
double number;
cout<<"\n enter an element to delete from array \n";
cin>>number;
arr.deleteitem(myarray,size,number);
cout<<"\n the array element after delteing item is\n";
arr.print(myarray,size);	
       
		break;
	}
	case 4:{int **arr ,row,col ,item,m;   //CASE 3 INPELMENATION  OPERATION OF TWO Dimention Array Pointer array
TowDimentionArrayPointer array;
cout<<"enter the row and column of the array\n";
cin>>row>>col;
arr=new int*[row];
for(int i;i<row;i++)
arr[i]=new int [col];
array.insert(arr,row,col);
array.pirnt(arr,row,col);
cout<<"\nthe min element\n"<<array.MinimumOfPrimaryDiagonal(arr,row,col);
cout<<"\nenter the item to delet\n";
cin>>item;
array.deleteItem (arr,row,col,item);
m=array.maxmumItem(arr,row,col);
cout<<"the value of max \n"<<m<<"\n\n";
for (int i=0; i<row;i++){
for(int j=0;j<col;j++)
if (arr[i][j]!=-1)
cout<<arr[i][j]<<" ";
cout<<"\n";   
      }
   
		break;
}
case 5:{
 student s[size];
for( int i=0;i<size;i++){
cout<<"enter data of student"<<i+1<<endl;
cout<<"enter student name\n";
cin>>s[i].name;
cout<<"enter ID number of student\n";
cin>>s[i].ID;
cout<<"enter student level\n";
cin>>s[i].level;
}

for(int i=0;i<size;i++){
cout<<"the data of student"<<i+1;
cout<<"\nstudent name:";
cout<<s[i].name<<endl;
cout<<"\nstudent :";
cout<<s[i].ID<<endl;
cout<<"\nstudent level:";
cout<<s[i].level<<endl;}
	break;
}
case 6:{student2 *s;
int i,sizes;
cout<<"enter number of student\n";
cin>> sizes;
s=new student2[sizes];
for( i=0;i<sizes;i++){
cout<<"enter data of student"<<i+1<<endl;
cout<<"enter student name\n";
cin>>s[i].name;
cout<<"enter ID number of student\n";
cin>>s[i].ID;
cout<<"enter student level\n";
cin>>s[i].level;
}

for(int i=0;i<sizes;i++){
cout<<"the data of student"<<i+1;
cout<<"\nstudent name:";
cout<<s[i].name<<endl;
cout<<"\nstudent ID:";
cout<<s[i].ID<<endl;
cout<<"\nstudent level:";
cout<<s[i].level<<endl;}


	break;
}
case 7:{                 //This Case Of   Operation of the Unsorted list 
      	
	UnOrderedList list;
	list.currentposition=0;
	int choice;
	do{
		cout<<"\n      Operation of the Unsorted list    ";
	cout<<"\n 1- insert an elements to the Unsorted list .";
	cout<<"\n 2- print all item  in the stack ." ;
	cout<<"\n 3- search about an item in Unsorted list.";
	cout<<"\n 4- delete an item from Unsorted list . ";
	cout<<"\n 5- get next Item  to the input element  .";
	cout<<"\n 6 removed all elements from Unsorted list.";
	cout<<"\n 0-Exit from loop.\n";
	cout<<"\n enter number from 1 to 7 to choice an operation\n";
cin>>choice;	
	switch(choice){
case 1:{
	int data;
    cout<<"\n enter item to inster to the list\n";
	cin>>data;
	list.insert(data);
	}
	break;
case 2:{
	cout<<"\n the elements that are storing in an Unsorted list are \t[";
	list.print();	
		
	}
	break;
case 3:{
	cout<<"\n enter item to search  ";
	int element;
	cin>>element;
    int isFound=list.search(element);
    cout <<"\n the element is found on position="<<isFound<<"\n";	

	}
	break;
case 4:{
	cout<<"\n enter data to delete from list ";
    int data1;
    cin>>data1;
   list.deleteItem(data1);
	}
	break;
case 5:{
	cout<<"\n enter element to find the next element";
    int data2;
    cin>>data2;
    int next=list.getNextItem(data2);
    cout<<"\n the next item of"<<data2<<"is"<<next;	
	}
	break;
case 6:{
    list.makeEmpty();
}

default:{		
    cout<<"\n ## please choice the operation tow time ##\n";
     }
   }
}while(choice!=0);	

	break;
}
	case 8:{int choice = 0;         // CASE 8INMELENTATIONA OPERATION ORDERED lIST
  
   orderedlist list;
   
   list.currentposition=0;
   
   do{
   cout<<"\n     ordered list opration   \n ";
   cout<<"\n ********************* ";
   cout<<"\n [01] insert an element to the list ";
   cout<<"\n [02] search an element on the list ";
   cout<<"\n [03] check the size ";
   cout<<"\n [04] remove the element in list ";
   cout<<"\n [05] get the next element on the list ";
   cout<<"\n [06] print the element";
   cout<<"\n [07] make the list empty ";
   cout<<"\n [08] exit ";
   cout<<"\n ******************************";
   cout<<"\n enter your chois from 1 to  8 \n";
   
   cin>>choice;
   
   switch(choice){
   case 1 : {
   
   cout<<"\n enter data.......";
   
   int data;
   cin>>data;
   list.insert(data);
   }
   break; 
   
   case 2 :{
   cout<<"\n enter data to search.......";
   int data;
   cin>>data;
   int isfound=list.search(data);
   if(isfound>0)
   cout<<" \n item is found on "<<isfound+1;
   else
   cout<<"\n item "<<data <<" ara not found";
   }
   break;
   
   case 3 : {cout<<"\n the list size is "<<list.lenght();
   }
   break ;
   
   case 4 :{
   cout<<"\n enter data to remove.....";
   int data;
   cin>>data;
   list.deleteitem(data);
   }
   break;
   
   case 5 :{ 
   cout<<"\n enter data to get next item....";
   int data;
   cin>>data;
   int next=list.getNextitem(data);
   if(next!=0)
   cout<<"\n the next item of"<<data<<" is "<<next;
   else
   cout<<"\n no item next to the"<<data<<" item.";
   }
   break;
   
   case 6 :{
   list.print();
   }
   break;
   
   case 7 :{
   list.makeEmpty();
   }
   break;
   
   case 8 :{
   goto END;
   }
   break;
   
   default : {
   cout<<"\n choice [ "<<choice<<" ] you enterd is illegel.....";
   }
   }
   }
   
   while(choice!=8);
   
   END:	
		
		break;}	
     case 9:{
     		stack Stack;
	Stack.Initialize();
	int choice;
do{
	cout<<"\n    STACK OPERATION   : ";
	cout<<"\n 1- insert an elements to the Stack .";
	cout<<"\n 2- removed an item  from the stack ." ;
	cout<<"\n 3- determine the size of the stack.";
	cout<<"\n 4- transform the elements of the stack .";
	cout<<"\n 5- delete an item from the stack . ";
	cout<<"\n 6- get maximum an element in the stack .";
	cout<<"\n 7- get minimum an elementin the stack . " ;
	cout<<"\n 8-print element of the stack .";
	cout<<"\n 0-Exit from loop.\n";
	cout<<"\n enter number from 1 to 9 to choice an operation\n";
cin>>choice;
switch(choice){
	
case 1:{
  cout<<"\n enter an item to add to the stack   ";		
  int data;
  cin>>data;
  Stack.push(data);		
	}break;
case 2:{
   Stack.POP();
   }break;
case 3:{
   cout<<"\n the size of stack = "<<Stack.getSize();
  }	break;
case 4:{
   Stack.transStack();	
  }	break;
case 5:{
	cout<<"\n enter item to delete from the stack ";
  int data;
  cin>>data;
  Stack.DeleteItem(data);
   }break;
case 6:{
    cout<<"\n the max item in stack = "<< Stack.getMax();	
	}break;
case 7:{
   cout<<"\n the min item in stack = "<< Stack.getMin();		
	}break;
case 8:{
	cout<<"\n the element of the stack is{ ";
    Stack.print();	
   }break;

default :{
     cout<<"\n ** please choice number tow time**\n";
	
      }		
   }
}
 while(choice!=0);
		

     	break;
     }
case 10:{
	Queue queue;
queue.Initialize();
int choice;
do{
	cout<<"\n*********  opreation of queue  **********";
	cout<<"\n 1- insetr item to the queue";
	cout<<"\n 2- remove item from the queue";
	cout <<"\n 3- print items of queue";
	cout<<"\n 4-search about element ";
	cout<<"\n 5- delete any element from the queue ";
	cout<<"\n choice number from 1 to 3\n ";
cin>> choice;
switch(choice){
case 1:{
cout<<"\n enter element to the queue\n";
int data;
cin>>data;
queue.enqueue(data);}break;
case 2:{

	queue.dequeue();}
	break;
case 3:{
 cout<<"\n the item in the queue is \n";
queue.print();
         }break;
  case 4:{
  cout<<"\n enter element to search";
  int data;
  cin>>data;
 int searching;
searching =queue.search(data);
 cout<<" the position= "<<searching<<"     \n";}	
	break; 
case 5:{
	cout<<"\n enter element to delete";
int data;
cin>>data;
queue.deleteing(data);
}break;	      
default :{
	
cout<<"error\n";
} 
	}
}while(choice!=0);

	break;

} 
case 11:{	LinkedList *list=new LinkedList();
	int choice;
	double data;
	Node*node;
	do{
cout<<"\n    linked list OPERATION   : ";
	cout<<"\n 1- add NODE TO FIRST .";
	cout<<"\n 2-ADD NODE TO LAST." ;
	cout<<"\n 3- Add node after samme node .";
	cout<<"\n 4_ search node if is found .";
	cout<<"\n 5- remove first node ";
	cout<<"\n 6- remove last node .";
	cout<<"\n 7- remove a sepicefy node" ;
	cout<<"\n 8-print ";
	cout<<"\n 9-return size .";
	cout<<"\n enter number from 1 to 9 to choice an operation \n";
	cin>>choice;
	switch(choice){
	case 1:{ cout<<"\n enter element to the first node\n";
    cin>> data; 
	list->addfirst(new Node(data));}
    
		break;
	case 2:{
		ITEM e;
	cout<<"\n enter element to the first node\n";
	cin>>e;	
	Node *data=new Node(e);
	list->addlast(data);}
		break;
	case 3:{cout<<"\n enrer the elment to after node ";
	cin>>data;
	node=list->search(new Node(data));
	if(node){
		cout<<"\n node is found plaese enter data\n";
		cin>>data;
		list->addafter(node,new Node(data));
	}
	cout<<"\n not found node with Data\n";
	}
		break;
case 4:{
	cout<<"\n enter element to the search node\n";
	cin>>data;	
	
  list->search( new Node(data));
  
  }
	break;
case 5:{
list->removefirst();}	
	break;
case 6:{
	list->removelast();}
	break;
case 7:{
	ITEM e;
	cout<<"\n enter element to removed  node\n";
	cin>>e;	
	Node *data=new Node(e);
	list->removeNode(data);}
	break;
case 9:{ cout<<"\n the size=";
int	sizs=list->getsize();
	cout<<sizs;}
	break;
case 8:{
	list->print();}
	break;
defualt :{
cout<<"\n error";
}	
	}
		
	}while(choice!=0);
	break;
}
default :cout<<"\n the choice ["<<choice<<"] you enderd is illagel\n";	
 break;	
} 


}while(choice!=0);
  
 } 

void  secondsmeseter(){
	cout<<"\n this function not any poration now\n";
	cout<<"\n we con using poration in this function at later in  second smeseter \n";
}

