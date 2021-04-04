#include "SaleLibrary.h"


int main() {

// 	musteri verileri
	int customerID = 1, customerID1 = 1, customerID2 = 2, customerID3 = 3, customerID4 = 4, customerID5 = 5;
	char nameCustomer1[20] = "Ali Karaman", nameCustomer2[20] = "Zehra Cilek", nameCustomer3[20] = "Mehmet Derin";
	char nameCustomer4[20] = "Veli Ortanca", nameCustomer5[20] = "Menekse Serin";
	unsigned int typeCustomer1 = 1, typeCustomer2 = 0, typeCustomer3 = 0, typeCustomer4 = 1, typeCustomer5 = 1;
	double x_coord1 = 16.8, x_coord2 = 12.4, x_coord3 = 10.55, x_coord4 = 5.1, x_coord5 = 2;
	double y_coord1 = 10, y_coord2 = 6.9, y_coord3 = 15.4, y_coord4 = 1.2, y_coord5 = 7.9;
	
	customer *firstCustomer = malloc(sizeof(customer));

	firstCustomer = newCustomer(customerID1, nameCustomer1, typeCustomer1, x_coord1, y_coord1); customerID++;
	addCustomerToSystem(&firstCustomer, customerID2, nameCustomer2, typeCustomer2, x_coord2, y_coord2); customerID++;
	addCustomerToSystem(&firstCustomer, customerID3, nameCustomer3, typeCustomer3, x_coord3, y_coord3); customerID++;
	addCustomerToSystem(&firstCustomer, customerID4, nameCustomer4, typeCustomer4, x_coord4, y_coord4); customerID++;
	addCustomerToSystem(&firstCustomer, customerID5, nameCustomer5, typeCustomer5, x_coord5, y_coord5); customerID++;
	
	
// 	urun verileri
	int productID = 1, productID1 = 1, productID2 = 2, productID3 = 3, productID4= 4, productID5 = 5, productID6 = 6, productID7 = 7;
	char nameProduct1[20] = "Portakal Sikma", nameProduct2[20] = "Muz Yerli", nameProduct3[20] = "Sogan", nameProduct4[20] = "Pirasa";
	char nameProduct5[20] = "Lahana", nameProduct6[20] = "Limon", nameProduct7[20] = "Hamsi";
	unsigned int typeProduct1 = 1, typeProduct2 = 1, typeProduct3 = 2, typeProduct4 = 2, typeProduct5 = 2, typeProduct6 = 1, typeProduct7 = 3;
	double price1 = 5.99, price2 = 12.95, price3 = 7.45, price4 = 3.95, price5 = 5.95, price6 = 7.45, price7 = 15;
	
	product *firstProduct = malloc(sizeof(product));

	firstProduct = newProduct(productID1, nameProduct1, typeProduct1, price1); productID++;
	addProductToSystem(&firstProduct, productID2, nameProduct2, typeProduct2, price2); productID++;
	addProductToSystem(&firstProduct, productID3, nameProduct3, typeProduct3, price3); productID++;
	addProductToSystem(&firstProduct, productID4, nameProduct4, typeProduct4, price4); productID++;
	addProductToSystem(&firstProduct, productID5, nameProduct5, typeProduct5, price5); productID++;
	addProductToSystem(&firstProduct, productID6, nameProduct6, typeProduct6, price4); productID++;
	addProductToSystem(&firstProduct, productID7, nameProduct7, typeProduct7, price5); productID++;


//	fatura verileri
	int purchasedID = 1;
	int invoiceID = 1;
	double cost1 = 123.5, cost2 = 12.40, cost3 = 23.45, cost4 = 56.75, cost5 = 45.50;		double cost6 = 30.6, cost7 = 25.5, cost8 = 30.0, cost9 = 23.78, cost10 = 34.5;
	double cost11 = 567.0, cost12 = 45.0, cost13 = 32.0, cost14 = 40.95, cost15 = 34.5; 	double	cost16 = 71.2, cost17 = 63.3, cost18 = 17.3, cost19 = 29.4, cost20 = 20.05;

	product *firstPurchased = malloc(sizeof(product));

	firstPurchased = newPurchased(purchasedID, invoiceID, customerID5, productID7, cost1); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID5, productID2, cost2); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID5, productID3, cost3); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID5, productID4, cost4); purchasedID++;
	invoiceID++;
	
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID1, productID1, cost5); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID1, productID2, cost6); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID1, productID5, cost7); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID1, productID5, cost8); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID1, productID3, cost9); purchasedID++;
	invoiceID++;

	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID3, productID5, cost10); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID3, productID1, cost11); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID3, productID2, cost12); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID3, productID7, cost13); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID3, productID6, cost14); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID3, productID2, cost15); purchasedID++;
	invoiceID++;

	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID5, productID6, cost16); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID5, productID3, cost17); purchasedID++;
	invoiceID++;
		
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID4, productID2, cost18); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID4, productID7, cost19); purchasedID++;
	addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, customerID4, productID3, cost20); purchasedID++;
	invoiceID++;
	

	int tempCustomerType;	int tempProductType;	int tempCustomerID;	int tempProductID;	double tempProductPrice;	double tempCargo;	int tempAmount;	double tempInvoice;	int newPurchased;
	double totalAmountForCustomer;	double totalAmountForAllCustomers;	double totalCargoPriceForAllCustomers;	double totalSalesForProduct;	double totalSalesForProductType;	double totalSalesForAllProducts;
	int *IDsForType = NULL;	int stateCustomer = 0;	int newCustomer = 1;	int stateProduct = 0;	int newProduct = 1;	int islem;	int altIslem;
	while(1==1)
	{
		instructions();
		printf("Islemi Giriniz: ");
		scanf("%d", &islem);
		system("CLS");
		switch(islem)
		{
			case 0:
				system("PAUSE");
				return;
				break;
			case 1:
				printf("Satis islemi secildi\n\n");
				printf("** Yeni satis icin `1`\n** Tum faturalarin bilgisini almak icin `2`\n** Menuye donmek icin `0`\nGiriniz >  ");
				scanf("%d",&altIslem);
				if(altIslem == 1)
				{
					printf("Yeni satis islemi secildi\n");
					
					while (newCustomer)
					{
						printf("Musteri ID Giriniz > ");
						scanf("%d",&tempCustomerID);
						stateCustomer = findCustomerID(&firstCustomer, tempCustomerID);
						if(stateCustomer)
						{
							newCustomer = 0;
							break;
						}
						else if(!stateCustomer)
						{
							printf("Aradiginiz musteri sistemde kayitli degildir.\n");
							printf("Sisteme yeni musteri kaydetmek icin `1`\nBaska bir ID girmek icin `2`\nMenuye donmek icin `0`\nGiriniz > ");
							scanf("%d", &newCustomer);
						}
						if(newCustomer == 0)
						{
							stateCustomer = 0;
							break;
						}
						else if(newCustomer == 2)
						{
							printf("Yeniden ID girilecek\n");
						}
						else if(newCustomer == 1)
						{	
							addCustomer(&firstCustomer, customerID);
							stateCustomer = 1;
							break;
						}
						else
							printf("Hatali giris!\n");
					}
					basla:
					if(stateCustomer)
					{	
						while(newProduct)
						{
							printf("Urun ID Giriniz > ");
							scanf("%d",&tempProductID);
							stateProduct = findProductID(&firstProduct, tempProductID);
							if(stateProduct)
							{
								newProduct = 0;
							}
							if(!stateProduct)
							{
								printf("Aradiginiz urun sistemde kayitli degildir.\n");
								printf("Baska bir urun almak icin `1`\nMenuye donmek icin `0`\nGiriniz > ");
								scanf("%d", &newProduct);
							}
							if(newProduct == 1)
							{
								printf("Baska bir urun girilecek!\n");
							}
							if(newProduct == 0)
								stateProduct;
								break;
						}
					}
					if(stateProduct)
					{
						printf("Urunun miktar bilgisini giriniz > ");
						scanf("%d", &tempAmount);
						tempCargo = findCustomerCargo(&firstCustomer, tempCustomerID);
						tempProductPrice = findProductPrice(&firstProduct, tempProductID);
						tempInvoice = calculateInvoice(tempProductPrice, tempAmount, tempCargo);
					}
					addPurchasedToSystem(&firstPurchased, purchasedID, invoiceID, tempCustomerID, tempProductID, tempInvoice); 
					printf("%-15s %-15s %-15s %-12s %-15s\n","Purchased ID","Invoice ID", "Customer ID", "Product ID", "Cost"); 
					printf("%-15d ", purchasedID); printf("%-15d ", invoiceID);  printf("%-15d ", tempCustomerID);   printf("%-10d ", tempProductID);  printf("%-15.2f ",tempInvoice);	printf("\n");
					purchasedID++;
					printf("Ayni musteri icin yeni bir urun daha eklemek icin `1`\nSatin alma islemini sonlandirmak icin `0`\nGiriniz > ");
					scanf("%d", &newPurchased);
					if(newPurchased == 1)
					{
						newProduct = 1;
						goto basla;
					}
					stateCustomer = 0; newCustomer= 1; stateProduct = 0; newProduct = 1;
					invoiceID++;
				}
				else if(altIslem == 2)
				{
					printf("Tum faturalar bastirildi!\n");
					system("CLS");
					printAllPurchased(&firstPurchased);
				}
				else if(altIslem == 0)
				{
					break;
				}
				else
					printf("Hatali Giris!");	
				break;
			
				
				
			case 2:
				printf("Musteri islemleri secildi\n\n");
				printf("** Tum musterilerin bilgisini almak icin `1`\n** Musteri tipine gore musterilerin bilgisini almak icin `2`\n** Musteri ID `sine gore musteri bilgisi almak icin `3`\n** Musteri eklemek icin `4`\n** Menuye donmek icin `0`\nGiriniz >  ");
				scanf("%d",&altIslem);
				if(altIslem == 1)
				{
					printf("Tum musteriler bastirildi!\n");
					system("CLS");
					printAllCustomer(&firstCustomer);
				}
				else if(altIslem == 2)
				{
					printf("Musteri Tipine gore bilgi verilecek!\n");
					printf("Musteri tipi (bireysel:`0` ticari:`1`) Giriniz > ");
					scanf("%d",&tempCustomerType);
					findCustomerType(&firstCustomer, tempCustomerType);
				}
				else if(altIslem == 3)
				{
					printf("Musteri ID`sine gore bilgi verilecek!\n");
					printf("ID Giriniz > ");
					scanf("%d",&tempCustomerID);
					stateCustomer = findCustomerID(&firstCustomer,tempCustomerID);
					newCustomer = 0;
					if(!stateCustomer)
					{
						printf("Aradiginiz musteri sistemde kayitli degildir.\n");
						printf("Sisteme yeni musteri kaydetmek icin `1`\nMenuye donmek icin `0`\nGiriniz > ");
						scanf("%d", &newCustomer);
					}
					if(newCustomer)
						addCustomer(&firstCustomer, customerID);
					stateCustomer = 0; newCustomer = 0;
				}
				else if(altIslem == 4)
				{
					printf("Musteri eklemek icin istenilen bilgileri giriniz!\n");
					addCustomer(&firstCustomer, customerID);
					customerID++;
				}
				else if(altIslem == 0)
				{
					break;
				}
				else
					printf("Hatali Giris!\n\n");	
				break;
			
				
						
			case 3:
				printf("Urun islemleri secildi\n\n");
				printf("** Tum urunlerin bilgisini almak icin `1`\n** Urun tipine gore urun bilgisini almak icin `2`\n** Urun ID `sine gore urun bilgisi almak icin `3`\n** Urun eklemek icin `4`\n** Menuye donmek icin `0`\nGiriniz >  ");
				scanf("%d",&altIslem);
				if(altIslem == 1)
				{
					printf("Tum urunler bastirildi!\n");
					system("CLS");
					printAllProduct(&firstProduct);
				}
				else if(altIslem == 2)
				{
					printf("Urun Tipine gore bilgi verilecek!\n");
					printf("Urun tipi (meyve:`1` sebze:`2` et:`3`) Giriniz > ");
					scanf("%d",&tempProductType);
					findProductType(&firstProduct, tempProductType);
				}
				else if(altIslem == 3)
				{
					printf("Urun ID`sine gore bilgi verilecek!\n");
					printf("ID Giriniz > ");
					scanf("%d",&tempProductID);
					findProductID(&firstProduct,tempProductID);
				}
				else if(altIslem == 4)
				{
					printf("Urun eklemek icin istenilen bilgileri giriniz!\n");
					addProduct(&firstProduct, productID);
					productID++;
				}
				else if(altIslem == 0)
				{
					break;
				}
				else
					printf("Hatali Giris!\n\n");	
				break;
			
				
				
			case 4:
				printf("Musteri analizleri secildi\n\n");
				printf("** Bir musterinin satin aldigi urunleri almak icin `1`\n** Bir musterinin satin aldigi toplam tutari almak icin `2`\n** Tum musterilerin satin aldigi urunlerin toplam tutarini almak icin `3`\n** Musterilerin kargo ucretini almak icin `4`\n** Menuye donmek icin `0`\nGiriniz > ");
				scanf("%d",&altIslem);
				if(altIslem == 1)
				{
					printf("Musteri ID sini giriniz > ");
					scanf("%d", &tempCustomerID);
					purchasedProductsForCustomer(&firstPurchased, &firstProduct, tempCustomerID);
					/////////
				}
				else if(altIslem == 2)
				{
					printf("Musteri ID sini giriniz > ");
					scanf("%d", &tempCustomerID);
					totalAmountForCustomer = calculateAllInvoiceForCustomer(&firstPurchased, tempCustomerID);
					printf("Musterinin toplam alisveris tutari : %.2f TL`dir.\n", totalAmountForCustomer);
				}
				else if(altIslem == 3)
				{
					totalAmountForAllCustomers = calculateAllInvoiceForAllCustomers(&firstPurchased, tempCustomerID);
					printf("Tum musterilerin aldigi urunlerin toplam tutari: %.2f\n", totalAmountForAllCustomers);
				}
				else if(altIslem == 4)
				{
					totalCargoPriceForAllCustomers = calculateCargoPriceForAllCustomers(&firstCustomer);
					printf("Tum musterilerin kargo ucretleri toplam tutari: %.2f\n", totalCargoPriceForAllCustomers);				}
				else if(altIslem == 0)
				{
					break;
				}
				else
					printf("Hatali Giris!\n\n");	
				break;
						
				
				
			case 5:
				printf("Urun analizleri secildi\n\n");
				printf("** Bir urunun toplam satis tutarini almak icin `1`\n** Bir urun tipinin toplam satis tutarini almak icin `2`\n** Tum urunlerin toplam satis tutarini almak icin `3`\n** Menuye donmek icin `0`\nGiriniz > ");
				scanf("%d", &altIslem);
				
				if(altIslem == 1)
				{
					printf("Urun ID sini giriniz > ");
					scanf("%d", &tempProductID);
					totalSalesForProduct = calculateSalesForProduct(&firstPurchased, tempProductID);
					printf("Urunun toplam satis tutari %.2f\n",totalSalesForProduct);
				}
				else if(altIslem == 2)
				{
					printf("Urun tipini giriniz > ");
					scanf("%d", &tempProductType);
					IDsForType = findProductsToTypes(&firstProduct, tempProductType);
					totalSalesForProductType = calculateSalesForProductType(&firstPurchased, IDsForType);
					printf("Urunun tipinin toplam satis tutari %.2f\n",totalSalesForProductType);
				}
				else if(altIslem == 3)
				{
					totalSalesForAllProducts = calculateSalesForAllProducts(&firstPurchased);
					printf("Tum urunlerin toplam satis tutari: %.2f\n", totalSalesForAllProducts);
				}
				else if(altIslem == 0)
				{
					break;
				}
				else
					printf("Hatali Giris!\n\n");	
				break;
			default:
				printf("Hatali Islem\n\n");
		}
	}
	return 0;
}
