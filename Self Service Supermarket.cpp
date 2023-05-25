#include <iostream>
#include <string>
#include<fstream>
using namespace std ;

#define Product_Count 50 // provided 50 indexes in an array to write down 50 product maximum

struct Product // struct for product details
{
	string Product_Name ;
	string Product_Code ;
	string Product_Price ;
	string Product_Catogory ;	
};

struct Location // struct for product location details
{
	string Section_Name ;
	string Aisle_Number ;
	string Shelf_Number ;
	
};

struct FullList 
{
	Product details ;
	Location data ;
	
} ProductList[Product_Count] ; 


// All the functions prototype
void AddNewProduct (int );

void AddNewProductLocation (int ) ;

void UpdateProduct();
 
void SearchProduct();

void SearchProductLocation();

void displayProduct (int);

void DeleteProduct();


int main()
{
	int choice, counter = 0 ;
	
    ofstream file("Self service Supermarket.txt", ios::app);
    file.is_open();
    file <<	"\n\n========================  SUPERMARKET SYSTEM  ========================\n\n";
    file.close();
    
	
	// Loop for displaying the menu 
	do
	{
		cout<<"========================\n   SUPERMARKET SYSTEM \n========================\n" ;
		cout << "1. Add new product/location." << endl ;
		cout << "2. Update product/location details." << endl ;
		cout << "3. Delete product/location records." << endl ;
		cout << "4. Search product details." << endl ;
		cout << "5. Search location detils." << endl ;
		cout << "6. Display product/location list." << endl ;
		cout << "7. Quit." << endl ;
		
		cout << "\nEnter your choice: " ;
		cin >> choice ;
		
		switch(choice)
		{
			case 1 :
				// write all function names that are related to add product and location with the variable ( counter ) as an argument 
				AddNewProduct (counter) ;
				AddNewProductLocation (counter) ;
				counter++ ;
				
			break ;
			
			case 2 :
		    	// write the function name that is related to update a product/location with no argument 
                
                UpdateProduct();
				
		    break ;
		    
		    case 3 :
		    	// write the function name that is related to delete a product/location with no argument 
		         
		         DeleteProduct() ;
		    		
		    break ;
		    
		    case 4 :
		    	// write the function name that is related to search a product detail with no argument
                
                SearchProduct() ;
                
		    break ;
		    
		    case 5 :
		    	// write the function name that is related to search a location detail with no argument
                
			  SearchProductLocation() ;
                
		    break ;
		    
		    case 6 :
		    // write the function name that is related to display a product/location detail with the variable ( counter ) as an argument
		    	   displayProduct (counter);
		    break ;
		    
		    case 7 :
		    	  cout << "Program Terminated" ;
		    
		    break ;
		    
		    default :
		    	cout << "Input error, try again! \n" << endl ;
		    	
		}
		
	}while(choice != 7) ;
	
	return 0 ;

}


// Function for adding a new product to the system 
void AddNewProduct (int counter)
{
	
    ofstream file("Self service Supermarket.txt", ios::app);
    if (file.is_open())
	{
	cout<<"========================\n  ADDING NEW PRODUCT  \n========================\n" ;
	
	cout << "Enter the product name : ";
	cin >> ProductList[counter].details.Product_Name;
	
	cout << "Enter the product code : ";
	cin  >> ProductList[counter].details.Product_Code ;
	
	cout << "Enter the product price : ";
	cin  >> ProductList[counter].details.Product_Price ;
	
	cout << "Enter the product catogory : ";
	cin  >> ProductList[counter].details.Product_Catogory ;
	
	
        file << endl << "========================\n   NEW PRODUCT  \n========================\n" << endl 
		<< "Product name : " << ProductList[counter].details.Product_Name << endl 
		<< "Product code : " << ProductList[counter].details.Product_Code << endl
        << "Product price : " << ProductList[counter].details.Product_Price << endl 
		<< "Product catogory : " << ProductList[counter].details.Product_Catogory << endl;
        file.close();
        cout << "\nProduct details added successfully!\n";
    }
    else
        cout << "Unable to open file.\n";

}
// Function for adding a new product location to the system 
void AddNewProductLocation (int counter)
{
		
    ofstream file("Self service Supermarket.txt", ios::app);
    if (file.is_open())
	{
    cout<<"========================\n  ADDING NEW LOCATION  \n========================\n" ;
    
    cout << "Enter the section name : " ;
    cin >> ProductList[counter].data.Section_Name ;
    
    cout << "Enter aisle number: " ;
    cin >> ProductList[counter].data.Aisle_Number ;
    
    cout << "Enter the shelf number: " ;
    cin >> ProductList[counter].data.Shelf_Number ;
    
    	
        file << endl << "========================\n   NEW LOCATION  \n========================\n" << endl 
		<< "Section name : " << ProductList[counter].data.Section_Name << endl 
		<< "Aisle number: "  << ProductList[counter].data.Aisle_Number << endl 
		<< "Shelf number: "  << ProductList[counter].data.Shelf_Number << endl;
        file.close();
        cout << "\nLocation details added successfully!\n";
    }
    else
        cout << "Unable to open file.\n";
}


// function to update the product/location details
void UpdateProduct( )
{
   int position ;
   int choice ;
   cout << "Enter the position to edit: " ;
   cin >> position ;
   
   cout << "1. Product name\n 2. Product Code\n 3. Product price\n 4. Product catogory\n 5. Section name\n 6. Aisle number\n 7. Shelf number" << endl ;
   
   cout << "Enter your choice: " ;
   cin >> choice ;
   
   switch(choice)
   {
   	  case 1 :
   	  	 cout << "Enter Product name that you want to replace: "; 
   	  	 cin >> ProductList[position - 1].details.Product_Name ;
   	  	 
   	  	 break ; 
   	  	 
   	  case 2 :
   	  	 cout << "Enter Product code that you want to replace: "; 
   	  	 cin >> ProductList[position - 1].details.Product_Code ;
   	  	 
   	  	 break ;
   	  	 
   	  case 3 :
   	  	 cout << "Enter Product price that you want to replace: ";
   	  	 cin >> ProductList[position - 1].details.Product_Price ;
   	  	 
   	  	 break ;
   	  	 
   	  case 4 :
   	  	 cout << "Enter Product catogory that you want to replace: "; 
   	  	 cin >> ProductList[position - 1].details.Product_Catogory ;
   	  	 
   	  	 break ;
   	  	 
   	   case 5 :
   	  	 cout << "Enter Section name that you want to replace: ";
   	  	 cin >> ProductList[position - 1].data.Section_Name ;
   	  	 
   	  	 break ;
   	  	 
   	   case 6 :
   	  	 cout << "Enter Aisle number that you want to replace: "; 
   	  	 cin >> ProductList[position - 1].data.Aisle_Number ;
   	  	 
   	  	 break ;
   	  	 
   	  	case 7 :
   	  	 cout << "Enter Shelf number that you want to replace: "; 
   	  	 cin >> ProductList[position - 1].data.Shelf_Number ;
   	  	 
   	  	 break ;
   	  	 
   	  	 default :
   	  	 	cout << "INVALID ENTRY!" ;
   	  	
   }
   
   if(choice >= 1 && choice <= 7)
   {
        	cout << "-------The product/location data after updating-------" << endl ;
         	cout << "Product name: " << ProductList[position - 1].details.Product_Name << endl ;
			cout << "Product code: " << ProductList[position - 1].details.Product_Code << endl ;
			cout << "Product price: " << ProductList[position - 1].details.Product_Price << endl ;
			cout << "Product catogory: " << ProductList[position - 1].details.Product_Catogory << endl ;
			cout << "Section name: " << ProductList[position - 1].data.Section_Name << endl ;
			cout << "Aisle name: " << ProductList[position - 1].data.Aisle_Number << endl ;
			cout << "Shelf number: " << ProductList[position - 1].data.Shelf_Number << endl ;
   }
   
   else
   cout << "INVALID ENTRY! CAN NOT UPDATE!" ;
}


// function to search the Location with a certain product data
void SearchProductLocation()
{
    string name ;
    cout << "Enter the product name: " ;
    cin >> name ;
    
    bool found = false ;
    for(int i = 0 ; i < Product_Count ; i++)
    {
    	if(name == ProductList[i].details.Product_Name)
    	{
    		if(!found)
    		{
    			cout << "\nProduct that has the name (" << name << "): \n" << endl ;
    			found = true ;
			}
			
			cout << "Product name: " << ProductList[i].details.Product_Name << endl ;
			cout << "Product code: " << ProductList[i].details.Product_Code << endl ;
			cout << "Product price: " << ProductList[i].details.Product_Price << endl ;
			cout << "Product catogory: " << ProductList[i].details.Product_Catogory << endl ;
			cout << "Section name: " << ProductList[i].data.Section_Name << endl ;
			cout << "Aisle name: " << ProductList[i].data.Aisle_Number << endl ;
			cout << "Shelf number: " << ProductList[i].data.Shelf_Number << endl ;
			
		}
		
	}
	
	if(!found)
	{
		cout << "\nNo products found with the name " << name << ".\n" << endl ;
	}
}

// function to search the product with a certain location data
void SearchProduct()
{
   
    string location ;
    cout << "Enter the product shelf number: " ;
    cin >> location ;
    
    bool found = false ;
    for(int i = 0 ; i < Product_Count ; i++)
    {
    	if(location == ProductList[i].data.Shelf_Number)
    	{
    		if(!found)
    		{
    			cout << "\nProduct at shelf number (" << location << "): \n" << endl ;
    			found = true ;
			}
			
			cout << "Product name: " << ProductList[i].details.Product_Name << endl ;
			cout << "Product code: " << ProductList[i].details.Product_Code << endl ;
			cout << "Product price: " << ProductList[i].details.Product_Price << endl ;
			cout << "Product catogory: " << ProductList[i].details.Product_Catogory << endl ;
			cout << "Section name: " << ProductList[i].data.Section_Name << endl ;
			cout << "Aisle name: " << ProductList[i].data.Aisle_Number << endl ;
			cout << "Shelf number: " << ProductList[i].data.Shelf_Number << endl ;
			
		}
		
	}
	
	if(!found)
	{
		cout << "\nNo products found at shelf number " << location << ".\n" << endl ;
	}
}

// function for displaying all the product in the menu
void displayProduct (int counter)
{
 ofstream file("Self service Supermarket.txt", ios::app);
    if (file.is_open())
	{
    cout << "========================\n  ALL PRODUCT DETAILS  \n========================\n";

    for(int count=0; count<counter; count++)
{
cout << "=========== PRODUCT "<< count+1 <<" DETAILS ===========\n";
cout << "Product name: " << ProductList[count].details.Product_Name << "\n";
cout << "Product code: " << ProductList[count].details.Product_Code << "\n";
cout << "Product price: " << ProductList[count].details.Product_Price << "\n";
cout << "Product catogory: " << ProductList[count].details.Product_Catogory << "\n";
cout << "Section name: " << ProductList[count].data.Section_Name << "\n";
cout << "Aisle number: " << ProductList[count].data.Aisle_Number << "\n";
cout << "Shelf number: " << ProductList[count].data.Shelf_Number << "\n";

        file << endl << "========================\n  ALL PRODUCT DETAILS  \n========================\n" << endl 
		<< "Product name: " << ProductList[count].details.Product_Name << "\n" 
		<< "Product code: " << ProductList[count].details.Product_Code << "\n"
		<< "Product price: " << ProductList[count].details.Product_Price << "\n"
		<< "Product catogory: " << ProductList[count].details.Product_Catogory << "\n"
		<< "Section name: " << ProductList[count].data.Section_Name << "\n" 
		<< "Aisle number: " << ProductList[count].data.Aisle_Number << "\n"
		<< "Shelf number: " << ProductList[count].data.Shelf_Number << "\n";
        file.close();
}

    }
    else
        cout << "Unable to open file.\n";
}

// function for deleting a curtain product/location at a certain index
void DeleteProduct()
{
      	string ProductCD ;
      cout << "Enter the product code: " ;
      cin >> ProductCD ;
      cout << endl; 
      bool found = false;
      
      for(int i = 0 ; i < Product_Count ; i++)
      {
      	if(ProductCD == ProductList[i].details.Product_Code)
      	{
      		for(int j = i ; j < Product_Count ; j++)
      		{
			  ProductList[j].details.Product_Name.erase() ;
			  ProductList[j].details.Product_Code.erase();
			  ProductList[j].details.Product_Price.erase();
			  ProductList[j].details.Product_Catogory.erase();
			  ProductList[j].data.Section_Name.erase();
			  ProductList[j].data.Aisle_Number.erase();
			  ProductList[j].data.Shelf_Number.erase();
      
      		   found = true ;
         	}
      		    cout << "\n Product record has been deleted seccessfully!" << endl ;
      		
		}
		 
	  }
	  
	  if(!found)
	  {
	  	cout << "\n There is no product that holds the inserted code!" << endl ;
	  }
      
}
