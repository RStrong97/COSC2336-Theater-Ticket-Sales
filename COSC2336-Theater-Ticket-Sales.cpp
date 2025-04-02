/*	COSC2336 Programing Fundamentals III
	Instructor: Prof Currington
	Students: Group 5; Bradley Whais, Robert Armstrong, Ayodeji Osungbohun
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
#include <vector>
#include <ctime>

using namespace std;

//HOUSEKEEPING

const string SEATMAPFILE = "seatAvailability.dat";
const string ROWPRICES = "seatPrices.dat";
const string SALEDATA = "salesData.dat";

struct seat {
	char isAvailable;
	double price;

	seat(char, double);
	seat();
};
struct saleRecord {
	int row;
	int column;
	double price;
	string date;

	saleRecord(int, int, double, string); // Constructor with row, column, price, and date
	saleRecord(int, int, double); // Constructor with row, column, and price only, generates date automatically
};

// CLASSES

class TicketManager {
private:
	seat seatMap[15][30]; // 15 rows and 30 columns

	//file operations
	void loadPriceData(); // Load seat prices from file                   // ARMSTRONG
	void loadSalesData(); // Load sales data from file                    // ARMSTRONG
	void loadSeatAvailability(); // Load seat availability from file      // ARMSTRONG
	void saveSalesData(); // Save sales data to file                      // ARMSTRONG
	void saveSeatAvailability(); // Save seat availability to file        // ARMSTRONG

	//internal functions
	bool purchaseTickets(int, int, int); // Process ticket purchase       // ARMSTRONG
	bool pointOfSale(double); // Handle payment processing                // ARMSTRONG

public:
	TicketManager(); //constructor

	//menu operations
	void displayMenu(); // starts the menu handler

	void displaySeats(); // Display the seat map
	void requestTickets(); // Request tickets from the user
	void displaySalesReport(); // Display sales report
	void quit(); // Quit the program

	~TicketManager(); //destructor
};

// MODULES
seat::seat(char isAvailable, double price) : isAvailable(isAvailable), price(price) {} //uses supplied values for availability and price
seat::seat() : isAvailable('#'), price(10.00) {} // Default price is $10.00 and available

saleRecord::saleRecord(int r, int c, double p) : row(r), column(c), price(p) {
	// Get current date
	time_t now = time(0);
	date = ctime(&now); // Convert to string
	date.erase(date.length() - 1); // Remove newline character
}

TicketManager::TicketManager() {
	//DONT uncomment modules in the constructor until they are finished (or the program will not compile)
	
	//this->loadPriceData(); // Load seat prices from file
	//this->loadPriceData(); // Load seat prices from file
	//this->loadSeatAvailability(); // Load seat availability from file
}

TicketManager::~TicketManager() {
	//DONT uncomment modules in the destructor until they are finished (or the program will not compile)
	
	//this->saveSalesData(); // Save sales data to file
	//this->saveSeatAvailability(); // Save seat availability to file
}

void TicketManager::loadPriceData()
{
	ifstream priceFile(ROWPRICES);
	if (!priceFile) {
		cerr << "Error opening price file." << endl;
		return;
	}

	for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 30; ++j) {
			priceFile >> seatMap[i][j].price;
		}
	}

	priceFile.close();
}

void TicketManager::loadSalesData() {}
void TicketManager::loadSeatAvailability() {}
void TicketManager::saveSalesData() {}
void TicketManager::saveSeatAvailability() {}

bool TicketManager::purchaseTickets(int row, int column, int quantity) {}
bool TicketManager::pointOfSale(double saleAmount) {}

void TicketManager::displayMenu() {}

void TicketManager::displaySeats() {}
void TicketManager::requestTickets() {}
void TicketManager::displaySalesReport() {}
void TicketManager::quit() {}


// MAINLINE

int main() {
	cout << "TEST";
	return 0;
}
