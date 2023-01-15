/*
Question:
	Create two classes that have the following
	properties:
	
	Class name: 'Oem'
	Data members: name, brand, price, dolarExchangeRate, taxRate
	Constructors: Write two overloaded constructors:
		- The first is an empty constructor.
		- Second, with 3 parameters to initialize all of the
		  data members: take the name, brand and price (dollar basis)
		  as parameters and initialize every necessary fields,
		  initialize dolarExchangeRate with 3.72 and taxRate with 0.18
		  
		  
	Member functions:
		- Write a function named 'SetPrice' with a void return type.
		  This function takes 3 parameters and calculates the price 
		  in TL basis. You can call this method in your constructor.
		  
	Class named 'CPU' which inherits from 'Oem' class uses public extension.
	Extra data members: serialNumber, clockSpeed, cache, memory width
	There will be two overloaded constructors:
		- First one is empty
		- Second one takes 7 parameters to initialize all of the data members:
		  Take name, brand, price (dollar basis) and call the base constructor with
		  these, serialNumber, clockSpeed, cache, and memory width. Assign them 
		  properly.
		  
		  
Sample Run:
	Brand: Intel
	Name: I7
	Serial Number: 7700k
	Clock Speed: 4.2Ghz
	Cache: 8mb
	Memory Width: 62 mb
	Price as TL: 6475.84
*/

#include <iostream>
using namespace std;

// Base class.
class Oem{
	protected:
		string obj_name;
		string obj_brand;
		double obj_price;
		double obj_exchange;
		double obj_tax;
		
	public:
		// Constructors.
		Oem(){
			obj_exchange = 3.72;	// Default.
			obj_tax = 0.18;			// Default.
		}
		Oem(string param_name, string param_brand, double param_price){
			obj_name = param_name;
			obj_brand = param_brand;
			obj_price = param_price;
			obj_exchange = 3.72;  // Default.
			obj_tax = 0.18;		  // Default.
		}
		
		
		// Methods.
		// Calculates the price in TL basis.
		void setPrice(void){
			double swap = obj_price*obj_exchange + obj_price*obj_exchange*obj_tax; // DOESNT WORK CORRETCTLY
			obj_price = swap;
			return;
		}
		
		
		virtual string getBrand(){
			return obj_brand;
		}
		
		string getName(void){
			return obj_name;
		}
		
		double getPrice(void){
			return obj_price;
		}
};


class CPU:public Oem{
	private:
		string obj_sn;
		double obj_clock;
		int obj_cache;
		int obj_mem;
		
	public:
		// Constructors.
		CPU(){}
		// This constructor will take all 7 parameters.
		// then the base constructor will be called inside of
		// this constructor to assing base member variables.
		CPU(string param_name, string param_brand, double param_price, string param_sn, double param_clock, int param_cache, int param_mem)
		:Oem(param_name,param_brand,param_price) // This is how we call base class constructor inside derived class constructor.
		{
			// Base constructor.
			obj_sn = param_sn;
			obj_clock = param_clock;
			obj_cache = param_cache;
			obj_mem = param_mem;
		}
		
		// Methods.
		string getSerial(void){
			return obj_sn;
		}
		
		double getSpeed(void){
			return obj_clock;
		}
		
		double getCache(void){
			return obj_cache;
		}
		
		double getMem(void){
			return obj_mem;
		}
};


int main(void){
	// Object initialization.
	CPU c("i7","Intel",400,"7700K",4.2,8,62);
	
	// Output:
	c.setPrice();
	cout << "Name: " << c.getName() << endl;
	cout << "Brand: " << c.getBrand() << endl;
	cout << "Serial number: " << c.getSerial() << endl;
	cout << "Clock Speed: " << c.getSpeed() << "Ghz" << endl;
	cout << "Cache: " << c.getCache() << "mb" <<  endl;
	cout << "Memory width: " << c.getMem() << "mb" <<endl;
	cout << "Price: " << c.getPrice() << endl;
}
