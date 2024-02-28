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

class customer {

    int ID;
    string name;
    int phone;

public:
    
    
 customer(int id, string n, int p)
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

class menu {

    int ID;
    string name;
    int foodlist;

public:
    
    
    menu(int id, string n, int fl)
        {ID=id;
        name=n; 
        foodlist=fl;
        }

    
    int getID() 
    { return ID; }
    string getname() 
    { return name; }
    int getfoodlist() 
    { return foodlist; }

    
    void setID(int id)
    { ID = id; }
    void setname(string n) 
    { name = n; }

};

class branch {

    int ID;
    string address;
    int menulist;
    int stocklist;
    int customerlist;

public:
    
    
    branch(int id, string a, int ml, int sl, int cl)
        {ID=id;
        adrress=a; 
        menulist=ml;
        stocklist=sl;
         customerlist=cl;
        }

    
    int getID() 
    { return ID; }
    string getaddress() 
    { return address; }
    int getmenulist() 
    { return menulist; }
     int getstocklist() 
    { return stocklist; }
    int customerlist() 
    { return customerlist; }


    
    void setID(int id)
    { ID = id; }
    void setaddress(string a) 
    { address = a; }
    
};

int main() {
    // Example usage
    Food apple;
    apple.setID(1);
    apple.setName("Apple");
    apple.setCalories(95);
    apple.setPrice(1.0);

    Stock appleStock;
    appleStock.setID(1);
    appleStock.setFood(&apple);
    appleStock.setStock(100);

    Customer john;
    john.setID(1);
    john.setName("John Doe");
    john.setPhone("123-456-7890");

    Menu lunchMenu;
    lunchMenu.setID(1);
    lunchMenu.setName("Lunch");

    Branch mainBranch;
    mainBranch.setID(1);
    mainBranch.setAddress("123 Main St");

    return 0;
}
