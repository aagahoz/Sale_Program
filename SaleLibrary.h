#ifndef SaleLibrary_h_
#define SaleLibrary_h_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Customer {
	int ID;
	char name[50];
	unsigned int type: 1;
	double x_coord;
	double y_coord;
	struct customer *nextCusPtr;
}customer;

typedef struct Product {
	int ID;
	char name[50];
	unsigned int type: 4;
	double price;
	struct product *nextProPtr;
}product;

typedef struct Purchased {
	int ID;
	int invoice_ID;
	int customer_ID;
	int product_ID;
	double cost;
	struct purchased *nextPurchasedPtr;
}purchased;

void instructions(void);

customer *newCustomer(int customerID, char *customerName, unsigned int type, double x_coord, double y_coord);
void addCustomerToSystem(customer** First, int customerID, char *name, unsigned int customerType, double x_coord, double y_coord);
void printAllCustomer(customer **First);
void addCustomer(customer **First, int customerID); 
int findCustomerID(customer **First, int customerID);
void findCustomerType(customer **First, unsigned int type);
double findCustomerCargo(customer **First, int customerID);

product *newProduct(int productID, char *productName, unsigned int productType, double price);
void addProductToSystem(product** First, int ID, char *productName, unsigned int type, double price);
void printAllProduct(product **First);
void addProduct(product **First, int productID);
int findProductID(product **First, int productID);
double findProductPrice(product **First, int productID);
void findProductType(product **First, unsigned int productType);

purchased *newPurchased(int purchasedID, int invoiceID, int customerID, int productID, double cost);
void addPurchasedToSystem(purchased** First, int purchasedID, int invoiceID, int customerID, int productID, double cost);
void printAllPurchased(product **First);
double calculateInvoice(double product, int amount, double cargo);

void purchasedProductsForCustomer(purchased **First1, product **First2, int customerID);
double calculateAllInvoiceForCustomer(purchased **firstPurchased, int customerID);
double calculateAllInvoiceForAllCustomers(purchased **firstPurchased, int customerID);
double calculateCargoPriceForAllCustomers(customer **firstCustomer);

double calculateSalesForProduct(purchased **firstPurchased, int productID);
int *findProductsToTypes(product **firstProduct, int productType);							       
double calculateSalesForProductType(purchased **firstPurchased, int *typeIDs, int productType);
double calculateSalesForAllProducts(purchased **firstPurchased);						

#endif
