#include "SaleLibrary.h"


void instructions(void)
{
	printf("------------------------------\n");
	printf("Genel Islemler\n");
	printf("1 - Satis Islemleri\n");
	printf("2 - Musteri Islemleri\n");
	printf("3 - Urun Islemleri\n");
	printf("4 - Musteri Analizleri\n");
	printf("5 - Urun Analizleri\n");
	printf("\n");
}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------


customer *newCustomer(int customerID, char *customerName, unsigned int customerType, double x_coord, double y_coord)
{
	customer *yeniDugum = malloc(sizeof(customer));
	
	yeniDugum->ID = customerID;
	strcpy(yeniDugum->name, customerName);
	yeniDugum->type = customerType;
	yeniDugum->x_coord = x_coord;
	yeniDugum->y_coord = y_coord;
	yeniDugum->nextCusPtr = NULL;

	return yeniDugum;
}


//--------------------------------------------------------------------------------------


void addCustomerToSystem(customer** First, int customerID, char *customerName, unsigned int customerType, double x_coord, double y_coord)
{
	
	customer *first = *First;
	
	customer *eklenecekDugum = newCustomer(customerID, customerName, customerType, x_coord, y_coord);
	if(first == NULL)
	{
		first = eklenecekDugum;
	}
	else
	{
		customer *temp = first;
		while(temp->nextCusPtr != NULL)
			temp = temp->nextCusPtr;
		temp->nextCusPtr = eklenecekDugum;
	}
}


//--------------------------------------------------------------------------------------


void addCustomer(customer **First, int customerID)
{
	customer *first = *First;

	char tempCustomerName[30]; unsigned int tempCustomerType; double tempX_coord; double tempY_coord;
	fflush(stdin);
	printf("Musteri Adi > "); 							gets(tempCustomerName);
	printf("Musteri Tip (bireysel:0 ticari:1) > "); 	scanf("%d",&tempCustomerType);
	printf("Musteri adresi x koordinati > "); 			scanf("%lf",&tempX_coord);
	printf("Musteri adresi y koordinati > "); 			scanf("%lf",&tempY_coord);
	
	customer *eklenecekDugum = newCustomer(customerID, tempCustomerName, tempCustomerType, tempX_coord, tempY_coord);

	if(first == NULL)
	{
		first = eklenecekDugum;
		return;
	}
	else
	{	
		customer *temp = first;
		while(temp->nextCusPtr != NULL)
			temp = temp->nextCusPtr;
		temp->nextCusPtr = eklenecekDugum;
	}
	printf("Sisteme basariyla musteri eklendi!\n");
}


//--------------------------------------------------------------------------------------


void printAllCustomer(customer **First)
{
	customer *temp = *First;
	
	printf("%-5s %-15s %-15s %-8s %-8s\n","ID","Name", "Customer Type", "X_Coord", "Y_Coord");
	while(temp != NULL)
	{
		printf("%-5d ", temp->ID);
		printf("%-15s ", temp->name);
		printf("%-15u ", temp->type);
		printf("%-8.2f ", temp->x_coord);
		printf("%-8.2f ", temp->y_coord);
		printf("\n");
		temp = temp->nextCusPtr;
	}
	printf("\n");
}


//--------------------------------------------------------------------------------------


int findCustomerID(customer **First, int customerID)
{
	customer *temp = *First;
	int state = 0;
	
	while(temp->nextCusPtr != NULL)
	{
		if(temp->ID == customerID)
		{
			printf("%-5s %-15s %-15s %-8s %-8s\n","ID","Name", "Customer Type", "X_Coord", "Y_Coord");
			printf("%-5d ", temp->ID);
			printf("%-15s ", temp->name);
			printf("%-15u ", temp->type);
			printf("%-8.2f ", temp->x_coord);
			printf("%-8.2f ", temp->y_coord);
			printf("\n");
			state = 1;
		}
		temp = temp->nextCusPtr;
	}
	return state;

}


//--------------------------------------------------------------------------------------


void findCustomerType(customer **First, unsigned int type)
{
	customer *temp = *First;
	
	printf("%-5s %-15s %-15s %-8s %-8s\n","ID","Name", "Customer Type", "X_Coord", "Y_Coord");
	while(temp != NULL)
	{
		if(temp->type == type)
		{
			printf("%-5d ", temp->ID);
			printf("%-15s ", temp->name);
			printf("%-15u ", temp->type);
			printf("%-8.2f ", temp->x_coord);
			printf("%-8.2f ", temp->y_coord);
			printf("\n");
		}
		temp = temp->nextCusPtr;	
	}
}


//--------------------------------------------------------------------------------------


double findCustomerCargo(customer **First, int customerID)
{
	customer *temp = *First;
	double tempCargo, x, y;
	
	while(temp != NULL)
	{
		if(temp->ID == customerID)
		{
			x = temp->x_coord;
			y = temp->y_coord;
		}
		temp = temp->nextCusPtr;	
	}
	tempCargo = sqrt(pow(x,2) + pow(y,2));
	return tempCargo;

}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------


product *newProduct(int productID, char *productName, unsigned int productType, double price)
{
	product *yeniDugum = malloc(sizeof(product));

	yeniDugum->ID = productID;
	strcpy(yeniDugum->name, productName);
	yeniDugum->type = productType;
	yeniDugum->price = price;
	yeniDugum->nextProPtr = NULL;

	return yeniDugum;
}


//--------------------------------------------------------------------------------------


void addProductToSystem(product** First, int productID, char *productName, unsigned int productType, double price)
{
	product *first = *First;
	
	product *eklenecekDugum = newProduct(productID, productName, productType, price);
	
	if(first == NULL)
	{
		first = eklenecekDugum;
	}
	else
	{
		product *temp = first;
		while(temp->nextProPtr != NULL)
			temp = temp->nextProPtr;
		temp->nextProPtr = eklenecekDugum;
	}
}


//--------------------------------------------------------------------------------------


void addProduct(product **First, int productID)
{
	product *first = *First;
	
	char tempProductName[30]; unsigned int tempProductType; double tempCustomerPrice;
	fflush(stdin);
	printf("Urun Adi > "); 							gets(tempProductName);
	printf("Urun Tipi (meyve:1 sebze:2 et:3) > "); 	scanf("%d",&tempProductType);
	printf("Urunun ucreti > "); 			scanf("%lf",&tempCustomerPrice);	
	
	product *eklenecekDugum = newProduct(productID, tempProductName, tempProductType, tempCustomerPrice);

	if(first == NULL)
	{
		first = eklenecekDugum;
		return;
	}
	else
	{
		product *temp = first;
		while(temp->nextProPtr != NULL)
			temp = temp->nextProPtr;
		
		temp->nextProPtr = eklenecekDugum;
	}
	printf("Sisteme basariyla urun eklendi!\n");
}


void printAllProduct(product **First)
{
	product *temp = *First;
	
	printf("%-5s %-15s %-15s %-8s\n","ID","Name", "Product Type", "Price");
	while(temp != NULL)
	{
		printf("%-5d ", temp->ID);
		printf("%-15s ", temp->name);
		printf("%-15u ", temp->type);
		printf("%-8.2f ", temp->price);
		printf("\n");
		temp = temp->nextProPtr;
	}
	printf("\n");
}


//--------------------------------------------------------------------------------------


int findProductID(product **First, int productID)
{
	product *temp = *First;
	int state = 0;
	
	while(temp->nextProPtr != NULL)
	{
		if(temp->ID == productID)
		{
			printf("%-5s %-15s %-15s %-8s\n","ID","Name", "Product Type", "Price");
			printf("%-5d ", temp->ID);
			printf("%-15s ", temp->name);
			printf("%-15u ", temp->type);
			printf("%-8.2f ", temp->price);
			printf("\n");
			state = 1;
		}
		temp = temp->nextProPtr;	
	}
	return state;
}


double findProductPrice(product **First, int productID)
{
	product *temp = *First;
	int price = 0;
	
	while(temp->nextProPtr != NULL)
	{
		if(temp->ID == productID)
		{
			price = temp->price;
		}
		temp = temp->nextProPtr;	
	}
	return price;
}


//--------------------------------------------------------------------------------------


void findProductType(product **First, unsigned int productType)
{
	product *temp = *First;
	
	printf("%-5s %-15s %-15s %-8s\n","ID","Name", "Product Type", "Price");
	while(temp != NULL)
	{
		if(temp->type == productType)
		{
			printf("%-5d ", temp->ID);
			printf("%-15s ", temp->name);
			printf("%-15u ", temp->type);
			printf("%-8.2f ", temp->price);
			printf("\n");
		}
		temp = temp->nextProPtr;	
	}
}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------


purchased *newPurchased(int purchasedID, int invoiceID, int customerID, int productID, double cost)
{
	purchased *yeniDugum = malloc(sizeof(purchased));
	
	yeniDugum->ID = purchasedID;
	yeniDugum->invoice_ID = invoiceID;
	yeniDugum->customer_ID = customerID;
	yeniDugum->product_ID = productID;
	yeniDugum->cost = cost;
	yeniDugum->nextPurchasedPtr = NULL;

	return yeniDugum;
}


void addPurchasedToSystem(purchased** First, int purchasedID, int invoiceID, int customerID, int productID, double cost)
{
	purchased *first = *First;

	purchased *eklenecekDugum = newPurchased(purchasedID, invoiceID, customerID, productID, cost);
	if(first == NULL)
	{
		first = eklenecekDugum;
	}
	else
	{
		purchased *temp = first;
		while(temp->nextPurchasedPtr != NULL)
			temp = temp->nextPurchasedPtr;
		temp->nextPurchasedPtr = eklenecekDugum;
	}
}


//--------------------------------------------------------------------------------------


void printAllPurchased(product **First)
{
	purchased *temp = *First;
	
	printf("%-15s %-15s %-15s %-12s %-15s\n","Purchased ID","Invoice ID", "Customer ID", "Product ID", "Cost");
	while(temp != NULL)
	{
		printf("%-15d ", temp->ID);
		printf("%-15d ", temp->invoice_ID);
		printf("%-15d ", temp->customer_ID);
		printf("%-10d ", temp->product_ID);
		printf("%-15.2f ", temp->cost);
		printf("\n");
		temp = temp->nextPurchasedPtr;
	}
	printf("\n");
}


//--------------------------------------------------------------------------------------


double calculateInvoice(double product, int amount, double cargo)
{
	return product*amount + cargo;
}


//--------------------------------------------------------------------------------------


void purchasedProductsForCustomer(purchased **First1, product **First2, int customerID)
{
	purchased *temp1 = *First1;
	product *temp2 = *First2;
	int tempI;
	int *productIDs = malloc(sizeof(int));
	int i = 0;
	
	while(temp1 != NULL)
	{
		if(temp1->customer_ID == customerID)
		{
			productIDs[i] = temp1->product_ID;
			i++;
		}
		temp1 = temp1->nextPurchasedPtr;		
	}
	tempI = i;
	printf("Toplamda %d urun alinmistir\n", i);
	printf("%-15s %-15s %-15s %-18s\n","ID","Name", "Type", "Price");
	while(temp2 != NULL)
	{
		for (i = 0; i<=tempI; i++)
		{	
			if(temp2->ID == productIDs[i])
			{
				printf("%-15d ", temp2->ID);
				printf("%-15s ", temp2->name);
				printf("%-15d ", temp2->type);
				printf("%-18.2f ", temp2->price);
				printf("\n");
			}
		}
		temp2 = temp2->nextProPtr;		
	}
	free(productIDs);	
}


//--------------------------------------------------------------------------------------


double calculateAllInvoiceForCustomer(purchased **firstPurchased, int customerID)
{
	purchased *temp = *firstPurchased;
	double tempTotalPriceforCustomer = 0;
	
	while(temp != NULL)
	{
		if(temp->customer_ID == customerID)
		{
			tempTotalPriceforCustomer += temp->cost;
		}
		temp = temp->nextPurchasedPtr;		
	}
	return tempTotalPriceforCustomer;
}


//--------------------------------------------------------------------------------------


double calculateAllInvoiceForAllCustomers(purchased **firstPurchased, int customerID)
{
	purchased *temp = *firstPurchased;
	double tempTotalPriceForAllCustomers = 0;
	
	while (temp != NULL)
	{
		tempTotalPriceForAllCustomers += temp->cost;	
		temp = temp->nextPurchasedPtr;
	}
	return tempTotalPriceForAllCustomers;
}


//--------------------------------------------------------------------------------------


double calculateCargoPriceForAllCustomers(customer **firstCustomer)
{
	customer *temp = *firstCustomer;	
	double tempCargoPriceForAllCustomers = 0;
	
	while(temp != NULL)
	{
		
		tempCargoPriceForAllCustomers += sqrt(pow(temp->x_coord, 2) + pow(temp->y_coord, 2));
		temp = temp->nextCusPtr;		
	}
	
	return tempCargoPriceForAllCustomers;
}


//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------------------------------------------------------------------------------------


double calculateSalesForProduct(purchased **firstPurchased, int productID)
{
	purchased *temp = *firstPurchased;
	double tempTotalSalesForProduct = 0;
	
	while(temp != NULL)
	{
		if (temp->product_ID == productID)
		{
			tempTotalSalesForProduct += temp->cost;
		}
		temp = temp->nextPurchasedPtr;
	}
	return tempTotalSalesForProduct;
}


//--------------------------------------------------------------------------------------


int *findProductsToTypes(product **firstProduct, int productType)
{
	product *temp = *firstProduct;
	int *tempProductIDs = malloc(sizeof(int));
	int i = 0;
	
	while(temp != NULL)
	{
		if(productType == temp->type)
		{
			tempProductIDs[i] = temp->ID;
			i++;
		}
		temp = temp->nextProPtr;
	}
	return tempProductIDs;
}


//--------------------------------------------------------------------------------------


double calculateSalesForProductType(purchased **firstPurchased, int *typeIDs, int productType){
	
	purchased *temp = *firstPurchased;
	double tempTotalSalesForProductType = 0;
	int i;
	
	while(temp != NULL)
	{
		for (i=0;  typeIDs[i] != NULL; i++)
		{
			if(temp->product_ID == typeIDs[i])
			{
				tempTotalSalesForProductType += temp->cost;
			}
		}		
		temp = temp->nextPurchasedPtr;
	}
	return tempTotalSalesForProductType;
}


//--------------------------------------------------------------------------------------


double calculateSalesForAllProducts(purchased **firstPurchased)
{
	purchased *temp = *firstPurchased;
	double tempTotalSalesForAllProducts = 0;
	
	while (temp != NULL)
	{
		tempTotalSalesForAllProducts += temp->cost;
		temp = temp->nextPurchasedPtr;
	}
	return tempTotalSalesForAllProducts;
}



