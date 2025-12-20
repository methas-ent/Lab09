#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	int n;
	double PrevBalance,Interest,Total,Payment ,NewBalance , Percent ;

	cout << "Enter initial loan: ";
	cin >> PrevBalance;

	cout << "Enter interest rate per year (%): ";
	cin >> Percent;

	cout << "Enter amount you can pay per year: ";
	cin >> Payment;

	cout<<endl;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	
	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	

	for(int i = 1 ; PrevBalance > 0; i++){
		
		Interest = PrevBalance * (Percent/100.0);
		Total = PrevBalance + Interest;
		// Payment = (Total < Payment) ? Total : Payment;
		if(Total < Payment){
			Payment = Total;
		}else{
			Payment = Payment;
		}
		NewBalance = Total - Payment;

		

		cout << fixed << setprecision(2); 
		cout << setw(13) << left << i; 
		cout << setw(13) << left << PrevBalance;
		cout << setw(13) << left << Interest;
		cout << setw(13) << left << Total;
		cout << setw(13) << left << Payment;
		cout << setw(13) << left << NewBalance;
		cout << "\n";	

		PrevBalance = NewBalance;
		
		
	}
	
	
	
	return 0;
}


// cout << fixed << setprecision(2); 
	// cout << setw(13) << left << 1; 
	// cout << setw(13) << left << 1000.0;
	// cout << setw(13) << left << 50.0;
	// cout << setw(13) << left << 1050.0;
	// cout << setw(13) << left << 100.0;
	// cout << setw(13) << left << 950.0;
	// cout << "\n";	