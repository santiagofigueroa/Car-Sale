#include<iostream>
#include<cstdlib>
#include<cmath>
using namespace std;
//Producing estimates for new cars;
int main()
{
	/*declaring Variables */
	
    system("color 6f");		/*Changing the Background */
    int mainMenu, Selection; 
    
    string Confirm,items,stro,lthr,gps;
    double subT,total,carTax,tradeIn,tradeOut,stereo,leather,GPS,carPrice;
    double tax = 0.06, trade = 0.0;
    home:
    	/*main menu*/
    
    cout<<"\tWelcome to car showroom\n";
    cout<<"--------------Please select your favorite car---------------\n";
    cout<<"Menu:\t\n1: Standard \t\n2: Sports \t\n3: Customised\n4: Exit\n";
    cin>>mainMenu;
    
    /*case for standard cars*/
    
    switch (mainMenu)
    {
    case 1:
         cout<<"--------------Standard Car Selected-------------\n";
         cout<<"------Please select one of the cars below-------\n";
         cout<<"\t1 Toyota Corolla \n";
         cout<<"\t2 Toyota RAV4 \n";
         cout<<"\t3 2015 Volvo S60 \n";
         cout<<"\t4 2015 Volvo S80 \n";
		 cin>>Selection;
		 cout<<"\t5 Would you be trading your old car?\n";
		 cin>>Selection;
         cout<<"\t Enter trade in Value\n";
	
        
         
         
         /*Accessories menu*/
        ster:  
         cout<<"Do you want additional accessories>\n";
         cin>>items;
         if (items=="Y" || items=="y")
         {
         	stereo:
         	cout<<"Do you want stereo system?\n";
         	cin>>stro;
         		if (stro=="y" || stro=="Y")
         		{stereo==30.50;
         		
				 }
				 else if (stro=="n" || stro=="N")
				 {
				 stereo==0.0;
				 }
				 else {
				 	cout<<"You can only type <y> or <n>.\n";
				 	goto ster;
				 }
				 
				 lea:
				 	cout<<"Do you want Leather Interior\n";
				 	cin>>lthr;
				 	if (lthr=="y" || lthr=="Y")
				 	{
				 		leather=530.99;
					 }
					 else if (lthr=="n" || lthr=="N")
					 {
					 leather=0.0;
					 }
					 
					 else{"You can only type y for yes and n for No\t";
					 	goto lea;
					 }
					 gp:
					 cout<<"Do you want (GPS)?\n";
					 cin>>gps;
					 if (gps=="y" || gps=="Y")
					 {
					 	GPS=301.90;
					 }
					 else if (gps=="n" || gps=="N")
					 {
					 	GPS=0.0;
					 }
					 
					 else
					 {
					 	goto gp;
					 }
				}
	
	if (Confirm=="Y" || Confirm=="y")
	{
					if (Selection==1)
					{
						carPrice=995;
						subT=carPrice+stereo+leather+GPS;
						carTax=subT+tax;
						total=carTax+subT;
						cout<<"-------------Standard Cars--------------\n";
						cout<<"Your chosen car is Toyota Corolla \n";
						cout<<"Stereo System\n";
						cout<<"Leather Interior\n";
						cout<<"GPS\n";
						cout<<"-----------------------------------------\n";
						cout<<"SubTotal="<<subT<<"\n";
						cout<<"Tax="<<carTax<<"\n";
						cout<<"------------------------------------------\n";
						cout<<"Total="<<total<<"\n";
								
					}
					
					else if (Selection==2)
					{	subT=995;
							carTax=subT+tax;
							total=carTax+subT;
							cout<<"The cost of Air condition system plus tax is "<<total<<"\n";
							
					}
					
					else if (Selection==3)
					{ subT=1495;
					carTax=subT+tax;
					total=carTax+subT;
					cout<<"The cost of Screen tax is "<<total<<"\n";
					}
					
					else if(Selection==4)
					{ subT=1500;
					carTax=subT+tax;
					total=carTax+subT;
					cout<<"The cost of Screen tax is "<<total<<"\n";
					}
					
					else if (Selection==5)
					{ subT=1500;
					carTax=subT+tax;
					total=carTax+subT;
					cout<<"The cost of trading in an old car plus tax is "<<total<<"\n";
					}
					
				}
			}
		}
