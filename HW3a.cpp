//This is a code for currency exchange from EUR-SEK

#include <iostream>

using namespace std;

int exchange(float sek){
	float commission;
	
	float eur;
	commission=0.2;
	eur = sek*0.105*0.8;
	
	return eur;
}

int choise(int response){
	if (response == 'Y'){
		cout<< "Thank you for the exchange and have a nice day!";
	}
	else if (response == 'N'){
		cout<< "Have a nice day and we hope to see you again!";
	}
	return 0;
}

	

int main(){
	float sek;
	float proffit;
	cout << "The interest of todays exchange rate is 1 EUR = 9.159 SEK" << endl;
	cin >> sek;
	proffit = sek*0.105 - exchange(sek);
	cout << "This is the amount of euros you will recieve: " << exchange(sek) << endl; 
	cout<< "And our commission for the sum you wanted to exchange will be " << proffit << " EUR, which is 2.0 %"<<endl;
	cout<< "If you want to exchange this amount enter Y and if not enter N"<<endl;
    char response;
	cin >> response;
	cout << choise(response);
	return 0;
	
}
	
	
	
