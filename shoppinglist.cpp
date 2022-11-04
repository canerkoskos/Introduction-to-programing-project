/* Caner KOSKOS 1306180059 */
/* Shopping List Planner */
#include <iostream>
#include <vector>
using namespace std;

class shoppingList {
public:   
    
    string listname;
    string productname;
    vector<string> food;
    vector<string> drink;
    vector<string> cleaning;
    vector<string> furniture;
    vector<string> hardware;

    vector<string> foodA;
    vector<string> drinkA;
    vector<string> cleaningA;
    vector<string> furnitureA;
    vector<string> hardwareA;

};

int main()
{
    int listCount = 0;
    int a,c=0,i=0;
    
    string listName;
    string productName;
    int productCount = 0;
    string productAmount;
    
    shoppingList list[50];
    
    while (i == 0) {
        int mark = 0;
        int del = 0;
        cout << "MAIN MANU" << endl;
        cout << "(1) for making list" << endl;
        cout << "(2) for showing lists" << endl;
        cout << "(3) for deleting product" << endl;
        cout << "(4) for marking product" << endl;
        cout << "(5) for exit " << endl;

        cin >> a;
        switch (a)
        {
        case 1:
            
            cout << "enter the list name" << endl;
            cin >> listName;
            list[listCount].listname = listName;
            cout << "enter the count of product" << endl;
            cin >> productCount;
            for (int i = 0; i < productCount; i++) {
                int num=0;
                cout << "enter the product title" << endl;
                cout << "(1) for food " << endl;
                cout << "(2) for drink" << endl;
                cout << "(3) for cleaning" << endl;
                cout << "(4) for furniture " << endl;
                cout << "(5) for hardware" << endl;
                cin >> num;
                cout << "enter the product name" << endl;
                cin >> productName;
                list[listCount].productname = productName;
                cout << "enter the amount of product" << endl;
                cin >> productAmount;
                switch (num)
                {
                case 1:
                    list[listCount].food.push_back(productName);
                    list[listCount].foodA.push_back(productAmount);
                    c++;
                    break;
                case 2:
                    list[listCount].drink.push_back(productName);
                    list[listCount].drinkA.push_back(productAmount);
                    break;
                case 3:
                    list[listCount].cleaning.push_back(productName);
                    list[listCount].cleaningA.push_back(productAmount);
                    break;
                case 4:
                    list[listCount].furniture.push_back(productName);
                    list[listCount].furnitureA.push_back(productAmount);
                    break;
                case 5:
                    list[listCount].hardware.push_back(productName);
                    list[listCount].hardwareA.push_back(productAmount);
                    break;
                default:
                    cout << "Enter a value between 1 and 5" << endl;
                }
            }
            listCount++;
            break;
        case 2:
            if (listCount == 0) {
                cout << "There is no list to show" << endl;
            }
            else {
                for (int j = 0; j < listCount;j++) {

                    cout << "$  " << list[j].listname << "  $" << endl;
                    cout << "*Food*" << endl;
                    for (int i = 0; i < list[j].food.size(); i++) {
                        cout << list[j].food[i] <<" "<<list[j].foodA[i]<< endl;
                    }
                    cout << "*Drink*" << endl;
                    for (int i = 0; i < list[j].drink.size(); i++) {
                        cout << list[j].drink[i] << " " << list[j].drinkA[i] << endl;
                    }
                    cout << "*Cleaning*" << endl;
                    for (int i = 0; i < list[j].cleaning.size(); i++) {
                        cout << list[j].cleaning[i] << " " << list[j].cleaningA[i] << endl;
                    }
                    cout << "*Furniture*" << endl;
                    for (int i = 0; i < list[j].furniture.size(); i++) {
                        cout << list[j].furniture[i] << " " << list[j].furnitureA[i] << endl;
                    }
                    cout << "*Hardware*" << endl;
                    for (int i = 0; i < list[j].hardware.size(); i++) {
                        cout << list[j].hardware[i] << " " << list[j].hardwareA[i] << endl;
                    }
                }
            }
            break;
        case 3:
            if (listCount == 0) {
                cout << "There is no list to delete product"<<endl;
            }
            else {
                cout << "How many product would you like to delete ?" << endl;
                cin >> del;
                for (int i = 0; i < del; i++) {
                    int b = 0;
                    int sayac = 0;
                    string productname;
                    cout << "enter the list name" << endl;
                    cin >> listName;
                    while (sayac == 0) {
                        for (int c = 0; c < listCount; c++) {
                            if (list[c].listname == listName) {
                                sayac = 1;
                            }
                        }
                        if (sayac == 0) {
                            cout << "There is no list named " << listName << endl;
                            cout << "enter the list name" << endl;
                            cin >> listName;
                        }
                    }
                    sayac = 0;
                    cout << "enter the product title" << endl;
                    cout << "(1) for food " << endl;
                    cout << "(2) for drink" << endl;
                    cout << "(3) for cleaning" << endl;
                    cout << "(4) for furniture " << endl;
                    cout << "(5) for hardware" << endl;
                    cin >> b;
                    cout << "enter the product name" << endl;
                    cin >> productname;
                    while (sayac == 0) {
                        for (int c = 0; c < listCount; c++) {
                            if (list[c].productname == productname) {
                                sayac = 1;
                            }
                        }
                        if (sayac == 0) {
                            cout << "There is no product named " << productname << endl;
                            cout << "enter the product name" << endl;
                            cin >> productname;
                        }
                    }
                   
                    for (int c = 0; c < listCount; c++) {
                        if (list[c].listname == listName) {
                            switch (b)
                            {
                            case 1:

                                for (int a = 0; a < list[c].food.size(); a++) {

                                    if (list[c].food[a] == productname) {
                                        list[c].food.erase(list[c].food.begin() + a);
                                        list[c].foodA.erase(list[c].foodA.begin() + a);
                                    }
                                }

                                break;
                            case 2:
                                for (int a = 0; a < list[c].drink.size(); a++) {

                                    if (list[c].drink[a] == productname) {
                                        list[c].drink.erase(list[c].drink.begin() + a);
                                        list[c].drinkA.erase(list[c].drinkA.begin() + a);
                                    }
                                }
                                break;
                            case 3:
                                for (int a = 0; a < list[c].cleaning.size(); a++) {

                                    if (list[c].cleaning[a] == productname) {
                                        list[c].cleaning.erase(list[c].cleaning.begin() + a);
                                        list[c].cleaningA.erase(list[c].cleaningA.begin() + a);
                                    }
                                }
                                break;
                            case 4:
                                for (int a = 0; a < list[c].furniture.size(); a++) {

                                    if (list[c].furniture[a] == productname) {
                                        list[c].furniture.erase(list[c].furniture.begin() + a);
                                        list[c].furnitureA.erase(list[c].furnitureA.begin() + a);
                                    }                                   
                               }
                                break;
                            case 5:
                                for (int a = 0; a < list[c].hardware.size(); a++) {

                                    if (list[c].hardware[a] == productname) {
                                        list[c].hardware.erase(list[c].hardware.begin() + a);
                                        list[c].hardwareA.erase(list[c].hardwareA.begin() + a);
                                    }                           
                                }
                                break;
                            default:
                                cout << "Enter a value between 1 and 5" << endl;
                            }
                        }
                    }
                }

            }
            break;
        case 4:
            if (listCount == 0) {
                cout << "There is no list to mark product" << endl;
            }
            else {
                cout << "How many product would you like to mark ?" << endl;
                cin >> mark;
                for (int i = 0; i < mark; i++) {
                    int sayac = 0;
                    int b = 0;
                    string productname;
                    cout << "enter the list name" << endl;
                    cin >> listName;
                    while (sayac==0) {
                        for (int c = 0; c < listCount; c++) {
                            if (list[c].listname == listName) {
                                sayac = 1;
                            }                           
                        }
                        if (sayac == 0) {
                            cout << "There is no list named " << listName << endl;
                            cout << "enter the list name" << endl;
                            cin >> listName;
                        }
                    }
                    sayac = 0;
                    cout << "enter the product title" << endl;
                    cout << "(1) for food " << endl;
                    cout << "(2) for drink" << endl;
                    cout << "(3) for cleaning" << endl;
                    cout << "(4) for furniture " << endl;
                    cout << "(5) for hardware" << endl;
                    cin >> b;
                    cout << "enter the product name" << endl;
                    cin >> productname;
                    while (sayac == 0) {
                        for (int c = 0; c < listCount; c++) {
                            if (list[c].productname == productname) {
                                sayac = 1;
                            }
                        }
                        if (sayac == 0) {
                            cout << "There is no product named " << productname << endl;
                            cout << "enter the product name" << endl;
                            cin >> productname;
                        }
                    }

                    for (int c = 0; c < listCount; c++) {
                        if (list[c].listname == listName) {
                            switch (b)
                            {
                            case 1:

                                for (int a = 0; a < list[c].food.size(); a++) {

                                    if (list[c].food[a] == productname) {                                      
                                        list[c].foodA[a]+=(" Purchased");                                        
                                    }
                                }

                                break;
                            case 2:
                                for (int a = 0; a < list[c].drink.size(); a++) {

                                    if (list[c].drink[a] == productname) {                                      
                                        list[c].drinkA[a] += (" Purchased");
                                    }
                                }
                                break;
                            case 3:
                                for (int a = 0; a < list[c].cleaning.size(); a++) {

                                    if (list[c].cleaning[a] == productname) {
                                        list[c].cleaningA[a] += (" Purchased");
                                    }
                                }
                                break;
                            case 4:
                                for (int a = 0; a < list[c].furniture.size(); a++) {

                                    if (list[c].furniture[a] == productname) {
                                        list[c].furnitureA[a] += (" Purchased");
                                    }
                                }
                                break;
                            case 5:
                                for (int a = 0; a < list[c].hardware.size(); a++) {

                                    if (list[c].hardware[a] == productname) {
                                        list[c].hardwareA[a] += (" Purchased");
                                    }
                                }
                                break;
                            default:
                                cout << "Enter a value between 1 and 5" << endl;
                            }
                        }                      
                    }
                }
            }
            break;
        case 5:
            cout << "press any key to exit" << endl;
            i = 1;
            break;
        default:
            cout << "Enter a value between 1 and 5" << endl;
        }
    }
   
    return 0;
}

