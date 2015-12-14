#include <iostream>
#include<iostream>
#include<cstdlib>
#include<cmath>
#include <sstream>

using namespace std;

/*declaring Global Variables */

	double subT,total,carTax,tradeIn ,stereo,leather,GPS,carPrice;
  	double tax = 0.06;
    int mainMenu, select, menus; 
    string choice , carTrade ,carName;
    
   

	void errorMessage(){
    		cout << "No Option exist !";
    		
		}
		
	void standard(){
		cout<<"--------------Standard Car Selected-------------\n";
         cout<<"------Please select one of the cars below-------\n";
         cout<<"\t1 Toyota Corolla  £100 \n";
         cout<<"\t2 Toyota RAV4 £200\n";
         cout<<"\t3 2015 Volvo S60  £300\n";
         cout<<"\t4 2015 Volvo S80 £400\n";
         carName =  " Standard Car "; 
	}
	
	void sport(){
			cout<<"--------------Sport Car Selected-------------\n";
         cout<<"------Please select one of the cars below-------\n";
         cout<<"\t1 Sport 1 £500 \n";
         cout<<"\t2 Sport 1 £600\n";
         cout<<"\t3 Sport 1 £700\n";
         cout<<"\t4 Sport 1 £800\n";
         carName =  " Sport Car "; 
		 
	}
	
	void custo(){
		cout<<"--------------Customised Car Selected-------------\n";
         cout<<"------Please select one of the cars below-------\n";
         cout<<"\t1 Customised 1  £900\n";
         cout<<"\t2  Customised 2 £1000\n";
         cout<<"\t3  Customised 3 £1100\n";
         cout<<"\t4  Customised 4 £1200\n";
         carName =  " Customised Car "; 
	}
	
	void access(){
		cout<<"Do you want additional accessories y/n \n";
	}
	


	void print (){
			
						subT=carPrice+stereo+leather+GPS + tradeIn;
						carTax=subT*tax;
						total=carTax+subT;
						cout<<"-------------"<<carName<<"--------------\n";
						cout<<"Your chosen car is Toyota Corolla \n";
						cout<<"Car Trade = " <<tradeIn<<"\n";
						cout<<"-----------------------------------------\n";
						cout<<"-----------------------------------------\n";
						cout<<"Stereo System = " <<stereo<<"\n";
						cout<<"Leather Interior = " <<leather<<"\n";
						cout<<"GPS = " <<GPS<<"\n";
						cout<<"-----------------------------------------\n";
						cout<<"SubTotal="<<subT<<"\n";
						cout<<"Tax="<<carTax<<"\n";
						cout<<"------------------------------------------\n";
						cout<<"Total="<<total<<"\n";
						exit(0);
			
																					
	}

		
	
int main()
{
		/*Changing the Background */
	system("color 6f");  
	  
	string Confirm,items,stro,lthr,gps;
	string input = "";
    int mainMenu, Selection;
    
    /*  Main menu display by home   */
		 cout<<"\tWelcome to car showroom\n";
    cout<<"--------------Please select your favorite car---------------\n";
    cout<<"Menu:\t\n1: Standard \t\n2: Sports \t\n3: Customised\n4: Exit\n";
    cin>>menus;
	  

	/*case for standard cars*/
    switch (menus)
{
  case 1:
     	
     	
     	standard();
     	stand:
		 cin>>Selection;
		 if (Selection == 1 ){
			//access();
			carPrice = 100.0;
			goto trade;	
		 }else if(Selection == 2){
		 	//access();
		 	carPrice = 200.0;
		 	goto trade;
		 }else if(Selection == 3){
		 	//access();
		 	carPrice = 500.0;
			 goto trade;
		 }else if(Selection == 4){
		 	//access();
		 	carPrice = 400.0;
			 goto trade;
		 }else {
		 	cout <<"No Only Select numbers from 1 to 5, please try again: \n ";
		 	goto stand;
		 };
		 
     break;
  case 2:
  	
  		sport();
  		spor:	
		 cin>>Selection;
		 if (Selection == 1 ){
		 	//access();
		 	carPrice = 500.0;
			goto trade;
		 }else if(Selection == 2){
		 	//access();
		 	carPrice = 600.0;
		 	goto trade;
		 }else if(Selection == 3){
		 	//access();
		 	carPrice = 700.0;
		 	goto trade;
		 }else if(Selection == 4){
		 	//access();
		 	carPrice = 800.0;
		 	goto trade;
		 }else {
		 	cout <<"No Only Select numbers from 1 to 5, please try again: \n ";
		 	goto spor;
		 };		 
     break;
     
	 case 3: 	 	 
    	 custo();
    	 cust:
		 cin>>Selection;
		if (Selection == 1 ){
			//access();
			carPrice = 900.0;
			goto trade;
		 }else if(Selection == 2){
		 	//access();
		 	carPrice = 1000.0;
		 	goto trade;
		 }else if(Selection == 3){
		 	//access();
		 	carPrice = 1100.0;
		 	goto trade;
		 }else if(Selection == 4){
		 	//access();
		 	carPrice = 1200.0;
		 	goto trade;
		 }
		  else {
		 	cout <<"No Only Select numbers from 1 to 5, please try again: \n ";
		 	goto cust;
		 };	
 
	 break; 
	 case 4: 
	 	exit(0);
	 break;
	  
  default:
     errorMessage();
	};
	
	trade:
		cout << "Woul you like you car to be traded ? Y/N \n";
		cin >> carTrade; 
	if ( carTrade == "y" || carTrade == "Y"){
		
		string mystr;
		cout << "Insert amount for  trading in ? \n ";
		cin >> tradeIn;  
		if(tradeIn < 0.0 ) {
				cout << " Insert a positive value \n ";
  				goto trade;
		} else {
			goto mainMenu;
		}
		
	}else if (carTrade == "N" || carTrade == "n"){
		goto mainMenu;
		tradeIn = 0;
	} else {
		errorMessage();
	}; 
	 
	
	mainMenu:
	cout<< "Would you like additional items Y/N \n"; 	
	cin >> items;	
	if (items == "y" || items =="Y"){
		goto ster;
	} else if (items == "n" || items =="N"){
		print();
		exit(0);
	}else{
		cout << " Only Y / N \n";
		goto mainMenu;	
	} ;
	
	ster:
	cout<<"Do you want stereo system?\n";
         	cin>>stro;
         		if (stro=="y" || stro=="Y")
         		{stereo = 30.50;
         		goto lea;
         		
				 }
				 else if (stro=="n" || stro=="N")
				 {
				 stereo = 0.0;
				 goto lea;
				 }
				 else {
				 	cout<<"You can only type <y> or <n>.\n";
				 	goto ster;
				 };
				 
				 lea:
				 	cout<<"Do you want Leather Interior\n";
				 	cin>>lthr;
				 	if (lthr=="y" || lthr=="Y")
				 	{
				 		leather = 530.99;
				 		goto gp;
					 }
					 else if (lthr=="n" || lthr=="N")
					 {
					 	leather = 0.0;
					 	goto gp;
					 }
					 
					 else{"You can only type y for yes and n for No\t";
					 	goto lea;
					 };
					 
				gp:
					 cout<<"Do you want (GPS)?\n";
					 cin>>gps;
					 if (gps=="y" || gps=="Y")
					 {
					 	GPS = 301.90;
					 }
					 else if (gps=="n" || gps=="N")
					 {
					 	GPS = 0.0;
					 }
					 
					 else
					 {
					 	goto gp;
					 };
			print();
	;
		
}	
