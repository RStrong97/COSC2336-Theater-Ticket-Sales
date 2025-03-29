/*	COSC2336 Programing Fundamentals III
	Instructor: Prof Currington
	Students:	Group 5; Bradley Whais, Robert Armstrong, Ayodeji Osungbohun
	Last Updated: 03/29/2025	
	Description:
	This program simulates a theater ticket sales system.
	It allows the user to select a seat, enter customer details,
	and process the ticket sale.
	
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>

using namespace std;

//HOUSEKEEPING

struct seat {
	char isAvailable;
	double price;

	seat(char, double);
	seat();
};

// CLASSES

class TICKETMANAGER {
private:
	seat seatMap[15][30]; // 15 rows and 30 columns
};

// MODULES
seat::seat(char isAvailable, double price) : isAvailable(isAvailable), price(price) {} //uses supplied values for availability and price
seat::seat() : isAvailable(true), price(10.00) {} // Default price is $10.00 and available



// MAINLINE

int main() {

	return 0;
}