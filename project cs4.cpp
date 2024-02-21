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

int main() {
    
    Food breakfastItem(1, "Pancakes", 300, 5.99);
    Stock breakfastStock(1, "breakfastItem", 50);

    cout << "Item: " << breakfastStock.getFood()<<breakfastItem.getName() << endl;
    cout << "Calories: " << breakfastStock.getFood()<<breakfastItem.getCalories() << endl;
    cout << "Price: $" << breakfastStock.getFood()<<breakfastItem.getPrice() << endl;
    cout << "Stock: " << breakfastStock.getStock() << endl;

    return 0;
}

