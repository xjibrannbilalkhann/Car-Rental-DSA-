#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <dos.h>
#include <iomanip> 
#include <cstring>
using namespace std;

struct node{
	char data[30];
	float mileage;
	node*next;
	node*pre;
	
};
class list {
	private:
		
	public:
		node *head, *tail;
	list(){
		head= NULL;
		tail= NULL;

	}	
	float returnmil(int a){
		node * temp;
		int count=1;
		temp=head;
		while(count!=a){
			temp=temp->next;
			count++;
		}
		return temp->mileage;
	}
	void insertStart11(string a, float b){
	node*temp= new node;
	
	//cout<<"\nEnter Car Model : ";
	//cin.ignore();
	//getline(temp->data, 30)=a;
	 //const char *data = a.c_str();
	 //strcpy(data, a.c_str());
	 strcpy(temp->data, a.c_str());
	//strcpy(data, a.c_str());
	//data[] = &a[0];
	//temp->data= value;
	//cout<<"\nEnter Car Mileage : ";
	temp->mileage=b;
	
	temp->pre = NULL;
	if(tail == NULL) {
		temp->next = NULL;
		tail = temp;
	}
	else {
		temp->next = head;
	}
	head = temp;
	
	}
	void insertStart(){
	node*temp= new node;
	
	cout<<"\nEnter Car Model : ";
	cin.ignore();
	cin.getline(temp->data, 30);
	//temp->data= value;
	cout<<"\nEnter Car Mileage : ";
	cin>>temp->mileage;
	
	temp->pre = NULL;
	if(tail == NULL) {
		temp->next = NULL;
		tail = temp;
	}
	else {
		temp->next = head;
	}
	head = temp;
	
	/*temp->pre= NULL;
	temp->next=	head;
	if(head!=NULL){
		head->pre=temp;
		tail = temp;
	}
	else{
		head->pre= temp;
		
	}
	head=temp;*/
	}

	void displayforward(){
		node*temp= new node;
		temp= head;
		while(temp != NULL){
			cout<<"\n\nCar Model : "<<temp->data;
			cout<<"\nCar Mileage : "<<temp->mileage;
			temp=temp->next;
	}
}
/*	void displayforward(){
		node*temp= new node;
		temp= head;
		while(temp != NULL){
			cout<<temp->data<<"\t ";
			temp=temp->next;
		
	}
}*/
	
	string displaymodel(int a){
		node*temp;
		temp=head;
		int count=1;
		string p;
		while(count!=a){
			p=temp->data;
			temp=temp->next;
			
		}
		
			//cout<<temp->data<<"\t\n ";
			//cout<<temp->mileage;
		return p;
	}
	
	void displayPos(int a){
		node*temp;
		temp=head;
		int count=1;
		string p;
		while(count!=a){
			
			temp=temp->next;
			p=temp->data;
			count++;
		}
		
			cout<<"\nCar Model : "<<temp->data<<"\n ";
			cout<<"\nCar Mileage : "<<temp->mileage;
		//return p;
	}
	void displayPos1(int a){
		node*temp;
		temp=head;
		int count=1;
		string p;
		while(count!=a){
			
			temp=temp->next;
			
		}
		p=temp->data;
	cout<<temp->data;
	//		cout<<temp->mileage;
		
	}
	void insertEnd(){
		node*temp= new node;
		//temp->data= value;
	cout<<"\nEnter Car Model : ";
	cin.getline(temp->data, 30);
		
	cout<<"\nEnter Car Mileage : ";
	cin>>temp->mileage;
		temp->pre= tail;
		temp->next= NULL;
		if(tail==NULL){
			head=temp;
		}
		tail->next= temp;
		tail= temp;
	} 
	void deleteStart(){
		node*temp;
		temp= head;
		head= temp->next;
		head->pre= NULL;
		delete temp;
	}
	void deleteEnd(){
		node*temp;
		temp= tail;
		tail= temp->pre;
		tail->next= NULL;
		delete temp;
	}
	void deletePos(int pos)
		{
			node *current;//= new node;
			node *previous;// = new node;
			current = head;
			for(int i=1;i<pos;i++)
			{
				previous = current;
				current = current->next;
			}
			previous->next = current->next;
			current->pre=previous;
			current->next=NULL;
			current->pre=NULL;
			delete current;
		
		}
		int count(){
			int z=0;
			node *temp;
			temp=head;
			
			while(temp!=NULL){
				temp=temp->next;
				z++;
			}
			return z;
		}


};
class customer // customer class
{
	private:
		
	public:
		list l1;
	string customername;
    int carmodel;
   // string carnumber;
    char data;
    // variables defined in this class in public mode.
		void initial(){
		//list l;
		l1.insertStart();
		l1.insertStart();
		l1.insertStart();
		system("CLS");
}


};
class rent : public customer // inhereted class from customer class
{
	private: 
	 int w;
	public:
	int day;
	int rentalfee; // additional int vatiables defined
	//class list;

	//list l;


	void insertStart1(string a, int b){
		l1.insertStart11(a,b);
/*	node*temp= new node;
	
	//cout<<"\nEnter Car Model : ";
//	cin.ignore();
	//getl
	
	
	
	
	ine(temp->data, 30)=a;
	 const char *data = a.c_str();
	//strcpy(data, a.c_str());
	//data[] = &a[0];
	//temp->data= value;
	//cout<<"\nEnter Car Mileage : ";
	temp->mileage=b;
	
	temp->pre = NULL;
	if(tail == NULL) {
		temp->next = NULL;
		tail = temp;
	}
	else {
		temp->next = head;
	}
	head = temp;
	*/
	}

int login(){
   string pass ="";
   char ch, usr;
   cout<<"\n\n\n\n\n\n\n\n\t\t\t\t\t       CAR RENTAL SYSTEM \n\n";
   cout<<"\t\t\t\t\t------------------------------";
   cout<<"\n\t\t\t\t\t\t     LOGIN \n";	
   cout<<"\t\t\t\t\t------------------------------\n\n";	
   cout << "\t\t\t\t\t\nEnter Password: ";
  // usr = _getch();
   ch = _getch();
   
   while(ch != 13){//character 13 is enter
      pass.push_back(ch);
      cout << '*';
      ch = _getch();
   }//admin
   if(pass == "admin"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted as Admin! \n";
      system("PAUSE");
      system ("CLS");
      return 1;
   }
   //user
   else if(pass=="1234"){
      cout << "\n\n\n\t\t\t\t\t\tAccess Granted as User! \n";
      system("PAUSE");
      system ("CLS");
      return 2;
   }
   else{
      cout << "\n\n\t\t\t\t\t\t\tAccess Aborted...\n\t\t\t\t\t\t\tPlease Try Again\n\n";
      system("PAUSE");
      system("CLS");
      login();
      
   }
}
	
	int data()
	{
		int  a, b, d;
		string c;
	a=login();
	if(a==1){
do{	//admin
	cout<<"\n\nPress 1 to add cars to the list\n";
	cout<<"Press 2 to delete car from the list\n";
	cout<<"Press 3 to display all cars available\n";
//	cout<<"Press 4 to ";
	cin>>b;
	if(b==1){
		//string a;
		cout<<"\n\nEnter the Car Model : ";
		//cin>>c;
		l1.insertStart();
	}
	else if(b==2){
		cout<<"\n\nEnter the car index to delete : ";
		cin>>d;
		l1.deletePos(d);		
	}
	else if(b==3){
		l1.displayforward();
	}
	
	cout<<"\n\nPress 1 to goto the Admin Menu \nPress any Key to continue\nYour Choice : ";
	cin>>w;
}while(w==1);

return 1;
	}
	else if(a==2){
		//user
	cout << "\t\t\t\tPlease Enter your Name: "; //taking data from the user
    cin >> customername;
    cout<<endl;
    
    
        cout <<"\t\t\t\tPlease Select a Car"<<endl; //giving user a choice to select among three different models
        l1.displayforward();
	//	char x='A';
       // int q= l1.count();
		/*for(int i=1; i<=q; i++){
		cout<<"\t\t\t\tEnter "<<x<<" for "<<l1.displayPos(i)<<endl;
        */
		cout<<endl;
        cout<<"\t\t\t\tChoose a Car from the above options: ";
        cin >>carmodel;
        cout<<endl;
		//}while(carmodel>l1.count());
    	
 cout<<"\n\n--------------------------------------------------------------------------\n\n"<<endl;
 if(carmodel==1)
 {
 	system("CLS");
 //string z=l1.displayPos1(1);
		
	cout<<"You have choosed ";
l1.displayPos(1);
		 ifstream inA("A.txt"); //displaying details of model A
         char str[200];
         while(inA) {
         inA.getline(str, 200);  
         if(inA) cout << str << endl;
}
sleep(2);
  }
  if(carmodel==2)
  {
  	system("CLS");
  
		cout<<"You have choosed ";
		l1.displayPos(2);
		cout<<endl;
		 ifstream inB("B.txt"); //displaying details of model B
         char str[200];
         while(inB) {
         inB.getline(str, 200);  
         if(inB) cout << str << endl;
         
     }
     sleep(2);
 }
 if(carmodel==3)
 {
 	system("CLS");
	     cout<<"You have choosed ";
		 l1.displayPos(3);
		 cout<<endl;
		 ifstream inC("C.txt"); //displaying details of model C
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
     sleep(2);
}if(carmodel==4)
 {
 	system("CLS");
	     cout<<"You have choosed ";
		 l1.displayPos(4);
		 cout<<endl;
		 ifstream inC("C.txt"); //displaying details of model C
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
     sleep(2);
}  if(carmodel==5)
 {
 	system("CLS");
	     cout<<"You have choosed ";
		 l1.displayPos(5);
		 cout<<endl;
		 ifstream inC("C.txt"); //displaying details of model C
         char str[200];
         while(inC) {
         inC.getline(str, 200);  
         if(inC) cout << str << endl;
     }
     sleep(2);
}
//if(carmodel !=1 && carmodel !=2 &&  carmodel !=3 )
     
  //    cout<<"Invaild Car Model. Please try again!"<<endl;
    //    }
//if(carmodel ==1 && carmodel ==2 &&  carmodel ==3 ){

    cout<<"\n\n--------------------------------------------------------------------------\n\n"<<endl;
    cout << "Please provide following information: "<<endl; 
	//getting data from user related to rental service
   // cout<<"Please select a Car No. : ";
  //  cin >> carnumber;
    cout<<"Number of days you wish to rent the car : ";
    cin >> day;
    cout<<endl;
	return 2;
}
}
	void calculate()
	{
		sleep(1);
		system ("CLS");
		cout<<"Calculating rent. Please wait......"<<endl;
		sleep(2);
		if(carmodel == 1||carmodel==1)
        rentalfee=day*800*l1.returnmil(1);
        if(carmodel == 2 ||carmodel==2)
        rentalfee=day*800*l1.returnmil(2);
        if(carmodel == 3 ||carmodel==3)
        rentalfee=day*800*l1.returnmil(3);
        if(carmodel == 4 ||carmodel==4)
        rentalfee=day*800*l1.returnmil(4);
    	if(carmodel == 5 ||carmodel==5)
        rentalfee=day*800*l1.returnmil(5);
        if(carmodel == 6 ||carmodel==6)
        rentalfee=day*800*l1.returnmil(6);
    
    
    }
void showrent()
    {
    	//string o = l1.displayPos1(1);
    cout << "\n\t\t                       Car Rental - Customer Invoice                  "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	| Invoice No. :"<<"------------------|"<<setw(10)<<"#Cnb81353"<<" |"<<endl;
    cout << "\t\t	| Customer Name:"<<"-----------------|"<<setw(10)<<customername<<" |"<<endl;
    cout << "\t\t	| Car Model :"<<"--------------------|"<<setw(10);
	l1.displayPos1(1);
	cout<<" |"<<endl;
   // cout << "\t\t	| Car No. :"<<"----------------------|"<<setw(10)<<carnumber<<" |"<<endl;
    cout << "\t\t	| Number of days :"<<"---------------|"<<setw(10)<<day<<" |"<<endl;
    cout << "\t\t	| Your Rental Amount is :"<<"--------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	| Caution Money :"<<"----------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	| Advanced :"<<"---------------------|"<<setw(10)<<"0"<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout <<"\n";
    cout << "\t\t	| Total Rental Amount is :"<<"-------|"<<setw(10)<<rentalfee<<" |"<<endl;
    cout << "\t\t	 ________________________________________________________"<<endl;
    cout << "\t\t	 # This is a computer generated invoce and it does not"<<endl;
    cout << "\t\t	 require an authorised signture #"<<endl;
    cout <<" "<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    cout << "\t\t	You are advised to pay up the amount before due date."<<endl;
    cout << "\t\t	Otherwise penelty fee will be applied"<<endl;
    cout << "\t\t	///////////////////////////////////////////////////////////"<<endl;
    int f;
    system("PAUSE");
    
    system ("CLS");
    
     ifstream inf("thanks.txt");

  
  char str[300];

  while(inf) {
    inf.getline(str, 300);
    if(inf) cout << str << endl;
  }
  inf.close();
	}

};
class welcome //welcome class
{
	public:
	int welcum()
	{
 ifstream in("welcome.txt"); //displaying welcome ASCII image text on output screen fn1353

  if(!in) {
    cout << "Cannot open input file.\n";
  }
  char str[1000];
  while(in) {
    in.getline(str, 1000);  // delim defaults to '\n' cp
    if(in) cout << str << endl;
  }
  in.close();
  sleep(1);
  cout<<"\nStarting the program please wait....."<<endl;
  sleep(1);
  cout<<"\nloading up files....."<<endl;
  sleep(1); //function which waits for (n) seconds
  system ("CLS"); //cleares screen
}

};



int main()
{int a;
rent obj2; 	
//welcome obj1; //object created for welcome class
//obj1.welcum(); //welcum function is called

//object created for rent class and further member functions are called
//obj2.login();
//obj2.initial();

obj2.insertStart1("Honda", 5.5);

obj2.insertStart1("Toyota", 3.3);

obj2.insertStart1("Nissan", 7.8);

obj2.insertStart1("Tesla", 70);

a=obj2.data();
if(a==2){
  system ("CLS"); //cleares screen

obj2.calculate();
obj2.showrent();

    system("PAUSE");
    
    system ("CLS");
    obj2.data();
}
else if(a==1){
	  system ("CLS"); //cleares screen

	obj2.data();
}
//return 0; //end of the program
}


