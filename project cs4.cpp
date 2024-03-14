// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>


using namespace std;

class Food {

    int ID;
    string name;
    int calories;
    double price;

public:
    
    Food(int id, string n, int cal, double p)
    {ID=id; 
    name=n;
    calories=cal;
    price=p;
    }
    
    int getID() 
    { return ID; }
    string getName() 
    { return name; }
    int getCalories() 
    { return calories; }
    double getPrice() 
    { return price; }

    
    void setID(int id)
    { ID = id; }
    void setName( string n)
    { name = n; }
    void setCalories(int cal) 
    { calories = cal; }
    void setPrice(double p)
    { price = p; }
};
class FoodNode {
	public:
		double data;
		FoodNode*next;
	};
class FoodList {
	public:
		FoodList(void) { head = NULL;}
		~FoodList(void); bool isEmpty() {return head == NULL;}
		FoodNode*insertNode( int index, double x);
		int FindNode( double x);
		int DeletNode(double x);
		void displayList(void);
		private:
			FoodNode*head;
};


class Stock {

    int ID;
    string food;
    int stocks;

public:
    
    
    Stock(int id, string f, int s)
        {ID=id;
        food=f; 
        stocks=s;
        }

    
    int getID() 
    { return ID; }
    string getFood() 
    { return food; }
    int getStock() 
    { return stocks; }

    
    void setID(int id)
    { ID = id; }
    void setFood(string f) 
    { food = f; }
    void setStock(int s)
    { stocks = s; }
};
class StockNode {
	public:
		double data;
		StockNode*next;
	};
class StockList {
	public:
		StockList(void) { head = NULL;}
		~StockList(void); bool isEmpty() {return head == NULL;}
		StockNode*insertNode( int index, double x);
		int FindNode( double x);
		int DeletNode(double x);
		void displayList(void);
		private:
			StockNode*head;
};




class Customer {

    int ID;
    string name;
    int phone;
    
public:
    
    
 Customer(int id, string n, int p)
        {ID=id;
        name=n; 
        phone=p;
        }

    
    int getID() 
    { return ID; }
    string getname() 
    { return name; }
    int getphone() 
    { return phone; }

    
    void setID(int id)
    { ID = id; }
    void setname(string n) 
    { name = n; }
    void setphone(int p)
    { phone = p; }
};
class CustomerNode {
	public:
		double data;
		CustomerNode*next;
	};
class CustomerList {
	public:
		CustomerList(void) { head = NULL;}
		~CustomerList(void); bool isEmpty() {return head == NULL;}
		CustomerNode*insertNode( int index, double x);
		int FindNode( double x);
		int DeletNode(double x);
		void displayList(void);
		private:
			CustomerNode*head;
};





class Menu {

    int ID;
    string name;
    int FoodList;

public:
    
    
    Menu(int id, string n, int fl)
        {ID=id;
        name=n; 
        FoodList=fl;
        }

    
    int getID() 
    { return ID; }
    string getname() 
    { return name; }
    int getFoodList() 
    { return FoodList; }

    
    void setID(int id)
    { ID = id; }
    void setname(string n) 
    { name = n; }

};
class MenuNode {
	public:
		double data;
		MenuNode*next;
	};
class MenuList {
	public:
		MenuList(void) { head = NULL;}
		~MenuList(void); bool isEmpty() {return head == NULL;}
		MenuNode*insertNode( int index, double x);
		int FindNode( double x);
		int DeletNode(double x);
		void displayList(void);
		private:
			MenuNode*head;
};





class Branch {

    int ID;
    string address;
    int MenuList;
    int StockList;
    int CustomerList;

public:
    
    Branch(int id, string a, int ml, int sl, int cl)
        {
        ID=id;
        address=a; 
        MenuList=ml;
        StockList=sl;
        CustomerList=cl;
        }

    
    int getID() 
    { return ID; }
    string getaddress() 
    { return address; }
    int getMenuList() 
    { return MenuList; }
     int getStockList() 
    { return StockList; }
    int getCustomerList() 
    { return CustomerList; }


    
    void setID(int id)
    { ID = id; }
    void setaddress(string a) 
    { address = a; }
    
};
class BranchNode {
	public:
		double data;
		BranchNode*next;
	};
class BranchList {
	public:
		BranchList(void) { head = NULL;}
		~BranchList(void); bool isEmpty() {return head == NULL;}
		BranchNode*insertNode( int index, double x);
		int FindNode( double x);
		int DeletNode(double x);
		void displayList(void);
		private:
			BranchNode*head;
};




int main() {
    
    
    cout << "Food name: " << food1.getName() << "\n Price: $" << food1.getPrice() << endl;
    cout << "\tStock of " << stock1.getFood() << ": " << stock1.getStock() << endl;
    cout << "Customer name: " << customer1.getname() << "\t, Phone: " << customer1.getphone() << endl;
    cout << "Menu name: " << menu1.getname() << "\n Number of food items: " << menu1.getfoodlist() << endl;
    cout << "Branch address: " << branch1.getaddress() << endl;
    
    
    
    
    LinkList CustomerList;
    
    LinkList FoodList;
    
    LinkList StockList;
    
    LinkList MenuList;
    
    LinkList BranchList;
   
    
    return 0;
}
