#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	char name[30],address[100] ,pizza1[]="Veggie Deluxe" ,pizza2[]="Chicken BarBQ" ,pizza3[]="Peri Peri" ,pizza4[]="Creamy Max",
	roll1[]="Chicken Chatni Roll", roll2[]="Paneer Bonanza Roll", roll3[]="Veg Roll ",roll4[]="Egg Roll",
	bur1[]="Zinger Burger",bur2[]="Chicken Burger",bur3[]="Veg Makhni Burger",bur4[]="Chilli Chatka Special";
	char sand1[]="Club Sandwich", sand2[]="Chicken Crispy Sandwich", sand3[]="Extreme Veg Sandwich",sand4[]="Super Cheese Sandwich";
	char momo1[]="Paneer Special Momo",momo2[]="Super Veggie Momo",momo3[]="Tandoori sizzled Momo",momo4[]="Chilli chicken Momo";
	char nood1[]="Paneer Loaded Noodles",nood2[]="Veg Deluxe Noodles",nood3[]="Onion Mushroom Noodles",nood4[]="Chilli chicken Noodles";
	char hotb1[]="Cream Latte",hotb2[]="Premium Espresso",hotb3[]="Hot Americano",hotb4[]="Warm Tea";
	char coldd1[]="Iced Tea",coldd2[]="Cold Coffee",coldd3[]="Minty Lemonade",coldd4[]="No Sugar Coke";
	char icec1[]="Tuti Fruity",icec2[]="Creamy Chocolate ",icec3[]="Black Currant",icec4[]="Simple Vanilla",gotostart ;
	int choice=0,pchoice,pchoice1, quantity;
	beginning:
	system("CLS");
	cout<<"\t\t\t----------Hugs & Mugs Cafe----------\n\n";
	cout<<"Please Enter Your Name: \n";
	cin.getline(name, 20);
	cout<<"Please Enter Your Address: ";
	cin.getline(address, 80);
	cout<<"Hello "<<name<<"\n\nWhat would you like to order?\n\n";

	cout<<"\t\t\t\t------------------OUR ZIGGLY MENU----------------------\n\n";

	cout<<"1. Pizzas\n";
	cout<<"2. Burgers\n";
	cout<<"3. Sandwich\n";
	cout<<"4. Rolls\n";
	cout<<"5. Momos\n";
	cout<<"6. Noodles\n";
	cout<<"7. Hot Beverages\n";
	cout<<"8. Soft Drinks\n";
	cout<<"9. Ice Creams\n\n";
	cout<<"\nPlease Enter your Choice: ";
	cin>>choice;

	if(choice==1)
	 {
		cout<<"\n1) "<<pizza1<<"\n";
		cout<<"2) "<<pizza2<<"\n";
		cout<<"3) "<<pizza3<<"\n";
		cout<<"4) "<<pizza4<<"\n";
		cout<<"\nPlease Enter which Flavour would you like to have?:";
		cin>>pchoice;
		if(pchoice>=1 && pchoice<=4)
		{
			cout<<"\n1) Small Rs.250\n"<<"2) Regular Rs.500\n"<<"3) Large Rs.900\n";
			cout<<"\nChoose Size Please:";
			cin>>pchoice1;
			if(pchoice1>=1 && pchoice1<=3)
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 250*quantity;
			break;

			case 2: choice = 500*quantity;
			break;

			case 3: choice = 900*quantity;
			break;


			      }
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 50 Minutes";
			 cout<<"\n\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<pizza2;
			 cout<<"\nYour Total Bill is "<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<pizza4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 45 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;

			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}



		}

	 }


	 else if(choice==2)
	 {
		cout<<"\n1 "<<bur1<<".............................Rs.180"<<"\n";
		cout<<"2 "<<bur2<<" ......................Rs.150"<<"\n";
		cout<<"3 "<<bur3<<" ......................Rs.160"<<"\n";
		cout<<"4 "<<bur4<<" ..................Rs.135"<<"\n";
		
		cout<<"\nPlease Enter which Burger you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 180*quantity;
			break;

			case 2: choice = 150*quantity;
			break;

			case 3: choice = 160*quantity;
			break;

			case 4: choice = 135*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe \n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<bur2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 45 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<bur4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;


			}
			cout<<"\nWould you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}

 }
}
	else if(choice==3)
	 {
		cout<<"\n1  "<<sand1<<".................... Rs.240"<<"\n";
		cout<<"2  "<<sand2<<" ...............Rs.160"<<"\n";
		cout<<"3  "<<sand3<<" .................Rs.100"<<"\n";
		cout<<"4  "<<sand4<<" .................Rs.120"<<"\n";
		
		cout<<"\nPlease Enter which Sandwich you would like to have?:";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nPlease Enter Quantity: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 240*quantity;
			break;

			case 2: choice = 160*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			case 4: choice = 120*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<sand2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			  case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<sand4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;


			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


	 else if(choice==4)
	 {
		cout<<"\n1 "<<roll1<<"................. Rs.150"<<"\n";
		cout<<"2 "<<roll2<<" ................Rs.100"<<"\n";
		cout<<"3 "<<roll3<<" ......................Rs.120"<<"\n";
		cout<<"3 "<<roll4<<"........................Rs.110"<<"\n";
		
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nHow Much Rolls Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 120*quantity;
			break;

			case 4: choice = 110*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<roll2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<roll4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;



			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


 

     else if(choice==5)
	 {
		cout<<"\n1 "<<momo1<<" .......................Rs.80"<<"\n";
		cout<<"2 "<<momo2<<" .......................Rs.90"<<"\n";
		cout<<"3 "<<momo3<<" ....................Rs.120"<<"\n";
		cout<<"3 "<<momo4<<"...................... Rs.110"<<"\n";
		
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nHow Much Momo  Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 80*quantity;
			break;

			case 2: choice = 90*quantity;
			break;

			case 3: choice = 120*quantity;
			break;

			case 4: choice = 110*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<momo1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<momo2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<momo3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<momo4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;



			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


 
else if(choice==6)
	 {
		cout<<"\n1 "<<nood1<<".................... ..Rs.120 "<<"\n";
		cout<<"2 "<<nood2<<"...........................Rs.100"<<"\n";
		cout<<"3 "<<nood3<<" .......................Rs.140"<<"\n";
		cout<<"3 "<<nood4<<".........................Rs.160"<<"\n";
		
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nHow Much Noodles Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 120*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 140*quantity;
			break;

			case 4: choice = 160*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<nood1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<nood2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 45 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<nood3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<nood4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;



			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


 
else if(choice==7)
	 {
		cout<<"\n1 "<<hotb1<<" .......................Rs.150"<<"\n";
		cout<<"2 "<<hotb2<<"....................... Rs.110"<<"\n";
		cout<<"3 "<<hotb3<<".........................Rs.100"<<"\n";
		cout<<"3 "<<hotb4<<"........................Rs.60"<<"\n";
		
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nHow Much Hot Beverages Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 110*quantity;
			break;

			case 3: choice = 100*quantity;
			break;

			case 4: choice = 60*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<hotb1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 45 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<hotb2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 40 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<hotb3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 35 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<hotb4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 30 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;



			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


 
else if(choice==8)
	 {
		cout<<"\n1 "<<coldd1<<".......... Rs.120"<<"\n";
		cout<<"2 "<<coldd2<<" ............Rs.100"<<"\n";
		cout<<"3 "<<coldd3<<" ............Rs.90"<<"\n";
		cout<<"3 "<<coldd4<<" ............Rs.110"<<"\n";
		
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nHow Much Cold Drinks Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 120*quantity;
			break;

			case 2: choice = 100*quantity;
			break;

			case 3: choice = 90*quantity;
			break;

			case 4: choice = 110*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<coldd1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<coldd2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<coldd3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<coldd4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;



			}
			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			}
			}


 
else if(choice==9)
	 {
		cout<<"\n1 "<<icec1<<"................. Rs.150"<<"\n";
		cout<<"2 "<<icec2<<".................... Rs.120"<<"\n";
		cout<<"3 "<<icec3<<" ....................Rs.80"<<"\n";
		cout<<"3 "<<icec4<<".................... Rs.90"<<"\n";
		
		cout<<"\nPlease Enter which you would like to have?: ";
		cin>>pchoice1;
		if(pchoice1>=1 && pchoice1<=4)
		{
			cout<<"\nHow Much Ice Creams Do you want: ";
			cin>>quantity;
			switch(pchoice1)
			{
			case 1: choice = 150*quantity;
			break;

			case 2: choice = 120*quantity;
			break;

			case 3: choice = 80*quantity;
			break;

			case 4: choice = 90*quantity;
			break;

			}
			system("CLS");
			switch (pchoice1)
			{
			 case 1:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<icec1;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 2:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<"  "<<icec2;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 3:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<icec3;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 20 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;
			 case 4:
			 cout<<"\t\t--------Your Order---------\n";
			 cout<<""<<quantity<<" "<<icec4;
			 cout<<"\nYour Total Bill is"<<choice<<"\nYour Order Will be delivered in 25 Minutes";
			 cout<<"\nThank you For Ordering From Hugs & Mugs Cafe\n";
			 break;

            }

			cout<<"Would you like to order anything else? Y / N:";
			cin>>gotostart;
			if(gotostart=='Y' || gotostart=='y')
			{
			  goto beginning;
			  //return 0;
			}
			

			}
	 }
			

			else
			{
				system("CLS");
				cout<<"Please Select Right Option: \n";
				cout<<"Would You like to Start the program again? Y / N: " ;
				cin>>gotostart;

				if(gotostart=='Y' || gotostart=='y')
				{
				  goto beginning;
			  //return 0;
			}
			}

     getch();

	 }

