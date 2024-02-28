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
    
    
    menu(int id, string a, int ml, int sl, int cl)
        {ID=id;
        adrress=a; 
        menulist=ml;
        stocklist=sl;
         customer=cl;
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
    
    Food breakfastItem(1, "Pancakes", 300, 5.99);
    Stock breakfastStock(2, "breakfastItem", 50);
    customer breakfastItem(3, "Latifa", 0512345);
    menu breakfastItem(4, "frenchToast", 7);
    branch breakfastItem(5, "Almajmaah", "breakfast", 50, 8);
    
    cout << "Item: " << breakfastStock.getFood()<<breakfastItem.getName() << endl;
    cout << "Calories: " << breakfastStock.getFood()<<breakfastItem.getCalories() << endl;
    cout << "Price: $" << breakfastStock.getFood()<<breakfastItem.getPrice() << endl;
    cout << "Stock: " << breakfastStock.getStock() << endl;

    return 0;
}

