// Referencesandhacking.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;



void safeaccount(int goodaccount, int terroraccount); // the safe account
void hackeraccount(int& goodaccount, int&terroraccount); //the hacking account



int main() //main function 
{
	int terrorbalance = 123456789; //the terorists ludicrous balance
	int innocentbalance = 28; // the innocents balance
	cout << "The original balance of the accounts\n";
	cout << "The terrorists orginally had $" << terrorbalance << " in their account \n"; //displayed unalter balance
	cout << "And the innocents originally had $" << innocentbalance << " in their account\n\n\n";


	cout << "This is the accounts used in a normal safe fasion \n";
	safeaccount(innocentbalance, terrorbalance); //runs the balances through the normal account process
	cout << "The terrorists have $" << terrorbalance << " in their account \n";
	cout << "And the innocents have $" << innocentbalance << " in their account\n\n\n";


	cout << "This is the accounts put through our special hacking program \n";
	hackeraccount(innocentbalance, terrorbalance); // runs the balances through the hacking program
	cout << "The terrorists now have $" << terrorbalance << " in their account \n";
	cout << "And the innocents now have $" << innocentbalance << " in their account\n\n\n";


    return 0;
}


void safeaccount(int goodaccount, int terroraccount) { //safe use of bank account balance
	int temp1 = goodaccount;
	int temp2 = terroraccount;
}

void hackeraccount(int& goodaccount, int&terroraccount){ //the hacking account program
	int temp = goodaccount; //holds the good account baalnce in temp int
	goodaccount = terroraccount; //makes the good account contain the money of the terror account
	terroraccount = temp; //gives the terror account the good accounts balance

}