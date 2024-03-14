#include <iostream>
#include <vector>

using namespace std;

class Product {
private:
    string name;
    double price;
    double rating;
public:
    Product(string name, double price, double rating) : name(name), price(price), rating(rating) {}
    string getName() { return name; }
    double getPrice() { return price; }
    double getRating() { return rating; }
};

class Category {
private:
    string name;
    vector<Product> products;
public:
    Category(string name) : name(name) {}
    void addProduct(Product product) { products.push_back(product); }
    string getName() { return name; }
    vector<Product> getProducts() { return products; }
};

class Basket {
private:
    vector<Product> products;
public:
    void addProduct(Product product) { products.push_back(product); }
    vector<Product> getProducts() { return products; }
};

class User {
private:
    string login;
    string password;
    Basket basket;
public:
    User(string login, string password) : login(login), password(password) {}
    void addToBasket(Product product) { basket.addProduct(product); }
    string getLogin() { return login; }
    Basket getBasket() { return basket; }
};

int main() {
   
    Category category1("Бытовая техника");
    Category category2("Продукты питания");
    Category category3("Одежда");

  
    category1.addProduct(Product("Холодильник", 1000, 4.5));
    category1.addProduct(Product("Стиральная машина", 800, 4.2));
    category2.addProduct(Product("Молоко", 100, 4.8));
    category2.addProduct(Product("Хлеб", 50, 4.0));
    category3.addProduct(Product("Футболка", 300, 4.3));
    category3.addProduct(Product("Джинсы", 500, 4.6));

   
    User user1("user1", "password1");
    User user2("user2", "password2");

   
    user1.addToBasket(category1.getProducts()[0]);
    user1.addToBasket(category2.getProducts()[1]);
    user2.addToBasket(category3.getProducts()[0]);
    user2.addToBasket(category3.getProducts()[1]);

   
    cout << "Каталог продуктов:" << endl;
    for (Category category : {category1, category2, category3}) {
        cout << "Категория: " << category.getName() << endl;
        for (Product product : category.getProducts()) {
            cout << "  " << product.getName() << " - " << product.getPrice() << " руб. - рейтинг " << product.getRating() << endl;
        }
    }

    
    cout << "Покупки посетителей магазина:" << endl;
    for (User user : {user1, user2}) {
        cout << "Пользователь: " << user.getLogin() << endl;
        for (Product product : user.getBasket().getProducts()) {
            cout << "  " << product.getName() << " - " << product.getPrice() << " руб. - рейтинг " << product.getRating() << endl;
        }
    }

    return 0;
}