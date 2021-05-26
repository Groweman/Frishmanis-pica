#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main(){
	
	int input;
	char character,choice,receipt;
	int order,quantity;
	float payment,balance;
	time_t now = time(0);
	char* dt=ctime(&now);
	const float set1=23.40;
	const float set2=30.50;
	const float set3=20.30;
	const float set4=25.20;
	
	
	system("cls");
	cout << "\n\n\n\t\t\t -----------Pizza Ordering System------------"<<endl;
	cout << "\t\t\t|                                             |"<<endl;
	cout << "\t\t\t|  Spiediet y lai turpinatu un n lai          |"<<endl;
	cout << "\t\t\t|           beigtu programmu!                 |"<<endl;
	cout << "\t\t\t ---------------------------------------------"<<endl;
	
	input:
	cout << "\n\t\t\tIevadiet [y/n] : ";
	cin >> character;
	
	switch(character){
		case 'Y' :
		case 'y' :
			goto menu;
			break;
		case 'N' :
		case 'n' :
			system("PAUSE");

			exit(EXIT_SUCCESS);	
			break;
		default :
			cout << "\n\t\t\tNav derigs"<<endl;
			goto input;
			break;
					
	}
	
			menu:
			system("cls");	
			cout << "\n\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\t\t\t|                      Pizza Hut - Menu                     |"<<endl;
			cout << "\t\t\t -----------------------------------------------------------"<<endl;
			cout << "\n\t\t\t ------------Izvele A--------\t ------------Izvele B--------"<<endl;
			cout << "\t\t\t| Pizza : Tropical Chicken  |\t| Pizza : Beef Pepperoni    |"<<endl;
			cout << "\t\t\t| Dzeriens : Pepsi          |\t| Dzeriens : Coca Cola      |"<<endl;
			cout << "\t\t\t| Cena : 23.40 EUR          |\t| Cena :  30.50 EUR         |"<<endl;
			cout << "\t\t\t ---------------------------\t ---------------------------"<<endl;
			
			cout << "\n\t\t\t ----------Izvele C----------\t ----------Izvele D----------"<<endl;
			cout << "\t\t\t| Pizza : Deluxe Cheese     |\t| Pizza : Hawaiian Chicken  |"<<endl;
			cout << "\t\t\t| Dzeriens : Sprite         |\t| Dzeriens : Fanta          |"<<endl;
			cout << "\t\t\t| Cena :  20.30 EUR         |\t| Cena :  25.20 EUR         |"<<endl;
			cout << "\t\t\t ---------------------------\t ---------------------------"<<endl;  
		
			choose:
			cout << "\n\t\t\tKuru izveli jus izvelaties? : ";
			cin >> choice;  
			
			
			switch(choice){
				case 'A' :
				case 'a' :	
					cout << "\n\t\t\tDaudzums   : ";
					cin >> quantity; 
					system("cls"); 
					cout << "\n\t\t\tTu izvelejies : A"<<endl;
					cout << "\n\t\t\t ---------------------------"<<endl;
					cout << "\t\t\t| Pizza : Tropical Chicken  |"<<endl;
					cout << "\t\t\t| Dzeriens : Pepsi          |"<<endl;
					cout << "\t\t\t| Cena :  23.40 EUR         |"<<endl;
					cout << "\t\t\t ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\t\t\tDaudzums  : "<<quantity<<endl;
					cout << "\n\t\t\tTava kopeja summa ir "<<(set1*quantity)<<endl;
					do{
						cout << "\n\t\t\tLudzu ievadiet samaksas summa: ";
						cin  >> payment;
	
					if(payment>=(set1*quantity)){
		
						balance=payment-(set1*quantity);
						cout << fixed<<showpoint<<setprecision(2);
						cout << "\n\t\t\tTavs atlikums ir: " << balance;
					}
					
					else{
			
						cout<< "\n\t\t\tNav pietiekami!";
						}
					}while(payment< (set1*quantity));
					x:
					cout << "\n\n\t\t\tVai velaties ceku? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   Pizza Hut                    |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fakss   : 013-363-4357"<<endl;
						cout << "\t\t\t  Kase : R3451            Pasutijums : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Kasiere :  Enija"<<endl;
						cout << "\t\t\t  Maina   :  1.Maina"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Izvele      Daudzums     Cena      Samaksats    |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Izvele A "<<    "  "<<quantity<<"  "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                            "<<endl;
						cout << "\t\t\t  Kopa "<<"                           "<<set1*quantity<<endl;
						cout << "\t\t\t  Samaksats "<<"                      "<<payment<<endl;
						cout << "\t\t\t  atlikums "<<"                       "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tNav derigs!!!"<<endl;
						goto x;
					}
					
					break;
				case 'B' :
				case 'b' :
					cout << "\n\t\t\tDaudzums   : ";
					cin >> quantity;  
					system("cls");
					cout << "\n\t\t\tTu izvelejies : B"<<endl;
					cout << "\n\t\t\t ---------------------------"<<endl;
					cout << "\t\t\t| Pizza : Beef Pepperoni    |"<<endl;
					cout << "\t\t\t| Dzeriens : Coca Cola      |"<<endl;
					cout << "\t\t\t| Cena :  30.50 EUR         |"<<endl;
					cout << "\t\t\t ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\t\t\tDaudzums  : "<<quantity<<endl;
					cout << "\n\t\t\tKopa ir jamaksa "<<(set2*quantity)<<endl;
					do{
					cout << "\n\n\t\t\tIevadiet summu: ";
					cin  >> payment;
	
					if(payment>=(set2*quantity)){
		
					balance=payment-(set2*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tTavs atlikums ir: " << balance<<endl;
		
					}
					else{
			
					cout<< "\n\t\t\tNav pietiekami";
					}
					}while(payment<(set2*quantity));
					y:
					cout << "\n\n\t\t\tVai velaties ceku? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   Pizza Hut                    |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fakss   : 013-363-4357"<<endl;
						cout << "\t\t\t  Pasutijums : R3451            Kase  : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Kasiere :  Amanda"<<endl;
						cout << "\t\t\t  Maina   :  2.maina"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Izvele      Daudzums     Cena      Kopa     |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Izvele B "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "\t\t\t  Kopa "<<"                              "<<set1*quantity<<endl;
						cout << "\t\t\t  Samaksats "<<"                          "<<payment<<endl;
						cout << "\t\t\t  Atlikums "<<"                            "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tNav derigs!!!"<<endl;
						goto y;
					}	
					break;
				case 'C' :
				case 'c' :	
					cout << "\n\t\t\tDaudzums   : ";
					cin >> quantity;  
					system("cls");
					cout << "\n\t\t\tTu izvelejies : C"<<endl;
					cout << "\n\t\t\t ---------------------------"<<endl;
					cout << "\t\t\t| Pizza : Deluxe Cheese     |"<<endl;
					cout << "\t\t\t| Dzeriens : Sprite         |"<<endl;
					cout << "\t\t\t| Cena :  20.30 EUR         |"<<endl;
					cout << "\t\t\t ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\t\t\tDaudzums  : "<<quantity<<endl;
					cout << "\n\t\t\tKopa jamaksa ir: "<<(set3*quantity)<<endl;
					do{
					cout << "\n\n\t\t\tIevadiet savu maksajumu: ";
					cin  >> payment;
	
					if(payment>=(set3*quantity)){
		
					balance=payment-(set3*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tTavs atlikums ir: " << balance<<endl;
		
					}
					else{
			
					cout<< "\n\t\t\tNav pietiekami";
					}
					}while(payment<(set3*quantity));
					z:
					cout << "\n\n\t\t\tVai velaties ceku? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   Pizza Hut                    |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fakss   : 013-363-4357"<<endl;
						cout << "\t\t\t  Kase : R3451            Pasutijums : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Kasieris :  TOM"<<endl;
						cout << "\t\t\t  Maina   :  3.Maina"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Pasutijums      Daudzums     Cena      Kopa     |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Izvele C "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                 "<<endl;
						cout << "\t\t\t  Kopa "<<"                                "<<set1*quantity<<endl;
						cout << "\t\t\t  Maksajums "<<"                           "<<payment<<endl;
						cout << "\t\t\t  Atlikums "<<"                            "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tNav pietiekami!!!"<<endl;
						goto z;
					}	
					break;
				case 'D' :
				case 'd' :	
					cout << "\n\t\t\tDaudzums   : ";
					cin >> quantity;  
					system("cls");
					cout << "\n\t\t\tTu izvelejies D"<<endl;
					cout << "\n\t\t\t ---------------------------"<<endl;
					cout << "\t\t\t| Pizza : Hawaiian Chicken   |"<<endl;
					cout << "\t\t\t| Dzeriens : 7up             |"<<endl;
					cout << "\t\t\t| Cena :  25.20 EUr          |"<<endl;
					cout << "\t\t\t ---------------------------"<<endl;
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tKopa jamaksa ir "<<(set4*quantity)<<endl;
					do{
					cout << "\n\t\t\tIevadiet maksajumu: ";
					cin  >> payment;
	
					if(payment>=(set4*quantity)){
		
					balance=payment-(set4*quantity);
					cout << fixed<<showpoint<<setprecision(2);
					cout << "\n\t\t\tJusu atlikums ir: " << balance<<endl;
		
					}
					else{
			
					cout<< "\n\t\t\tNav pietiekami";
					}
					}while(payment<(set4*quantity));
					s:
					cout << "\n\n\t\t\tVai velaties ceku? Y/N? ";
					cin >> receipt;
					if(receipt=='Y'||receipt=='y'){
						system("cls");
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t|                   Pizza Hut                    |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << endl;
						cout << "                      "<<dt<<endl;
						cout << "\t\t\t  Tel  : 03-339-31206     Fakss   : 013-363-4357"<<endl;
						cout << "\t\t\t  Kase : R3451            Pasutijums : M35042627"<<endl;
						cout << endl;
						cout << endl;
						cout << "\t\t\t  Kasieris :  Janis"<<endl;
						cout << "\t\t\t  Maina   :  4.Maina"<<endl;
						cout << endl;
						cout << "\n\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t| Pasutijums      Daudzums     cena      Kopa     |"<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
						cout << "\t\t\t  Izvele D "<<"   	    "<<quantity<<" 	   "<<set1<<"      "<<set1*quantity<<"	   "<<endl;
						cout << "                                                "<<endl;
						cout << "\t\t\t  Kopa "<<"                               "<<set1*quantity<<endl;
						cout << "\t\t\t  Maksajums "<<"                           "<<payment<<endl;
						cout << "\t\t\t  Atlikums "<<"                            "<<balance<<endl;
						cout << "\t\t\t ------------------------------------------------"<<endl;
					}
					else if(receipt=='N'||receipt=='n'){
						goto inmenu;
					}
					else{
						cout << "\n\t\t\tNepietiekama nauda!!!"<<endl;
						goto s;
					}	
					break;
				default : 
					cout << "\n\t\t\tNav pieejams"<<endl;
					goto choose;
					break;
				}
				
				inmenu:
				cout<<"\n";
				system("PAUSE");
				cout << "\n\n\t\t\tIzvele : "<<endl;
				cout << endl;
				cout << "\t\t\t1. Izvelieties atkal"<<endl;
				cout << "\t\t\t2. Atcelt"<<endl;
				
				cout << "\n\t\t\tIzvelieties :";
				cin >> input;
				
				switch(input){
					case 1 :
						goto menu;
						break;
					case 2 :
						cout << "\n\t\t\t -----------------------------"<< endl;
						cout << "\t\t\t| Paldies naciet velreiz :)   |"<<endl;
						cout << "\t\t\t -----------------------------"<<endl;
						system("PAUSE");
						exit(EXIT_SUCCESS);	
						break;
					default :
						cout << "\n\t\t\tNav pareizi"<<endl;
						goto inmenu;
						break;	
				}
			
		  
	}

