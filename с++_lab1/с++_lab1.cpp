#include <iostream>
#include <ctime>
#include <iomanip> 
#include <string>
using namespace std;


struct datas
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
};

struct object
{
	string name;
	unsigned int quantity;
	unsigned int price;
	string producer;
	datas warehouseReceipts;
};
struct car
{
	string marka;
	string producer;
	string type;
	datas created;
	datas registration;
};





void task_1()
{
	unsigned const int QUANTITY_OF_CARS = 5;
	object car[QUANTITY_OF_CARS];
	string nemeOfCars[QUANTITY_OF_CARS] = { "honda", "pasat", "toyota", "kia", "mazda" };


	for (int i = 0; i < QUANTITY_OF_CARS; i++)
	{
		car[i].name = "Model No 1.";
		car[i].quantity = rand() % 100 + 1;
		car[i].price = rand() % 20000 + 20000;
		car[i].producer = nemeOfCars[i];
		car[i].warehouseReceipts.day = rand() % 28 + 1;
		car[i].warehouseReceipts.month = rand() % 12 + 1;
		car[i].warehouseReceipts.year = 2020;
	}

	double averPrice = 0;
	for (int i = 0; i < QUANTITY_OF_CARS; i++) averPrice += car[i].price;
	averPrice /= QUANTITY_OF_CARS;

	for (int i = 0; i < QUANTITY_OF_CARS; i++)
	{
		if (car[i].price >= averPrice)
		{
			cout << "name: " << (car[i].name) << endl;
			cout << "quantity: " << (car[i].quantity) << endl;
			cout << "price: " << (car[i].price) << endl;
			cout << "producer: " << (car[i].producer) << endl;
			cout << "data: " << (car[i].warehouseReceipts.day) << "/" << car[i].warehouseReceipts.month << "/" << car[i].warehouseReceipts.year << endl;
			cout << "averprice: " << averPrice << endl;
			cout << endl;
		}
	}
}

void task_2()
{
	unsigned const int QUANTITY_OF_CARS = 5;
	car car_o[QUANTITY_OF_CARS];
	string producerOfCars[QUANTITY_OF_CARS] = { "kitai", "russia", "ukraina", "yaponia", "germania" };
	string markaOfCars[QUANTITY_OF_CARS] = { "Honda", "Ford", "Toyota", "Kia", "Mazda" };
	string typeOfCars[QUANTITY_OF_CARS] = { "legkova", "pikap", "cabriolet", "cupe", "minibus" };

	for (int i = 0; i < QUANTITY_OF_CARS; i++)
	{
		car_o[i].marka = markaOfCars[rand() % QUANTITY_OF_CARS];
		car_o[i].type = typeOfCars[rand() % QUANTITY_OF_CARS];
		car_o[i].producer = producerOfCars[rand() % QUANTITY_OF_CARS];

		car_o[i].created.day = rand() % 28 + 1;
		car_o[i].created.month = rand() % 12 + 1;
		car_o[i].created.year = rand() % 100 + 1950;

		car_o[i].registration.day = car_o[i].created.day;
		car_o[i].registration.month = car_o[i].created.month;
		car_o[i].registration.year = car_o[i].created.year;
	}

	for (int i = 0; i < QUANTITY_OF_CARS; i++)
	{
		if ((car_o[i].marka == "Ford") && (car_o[i].registration.year < 2000))
		{
			cout << "name: " << (car_o[i].marka) << endl;
			cout << "quantity: " << (car_o[i].type) << endl;
			cout << "price: " << (car_o[i].producer) << endl;

			cout << "data of create: " << (car_o[i].created.day) << "/" << car_o[i].created.month << "/" << car_o[i].created.year << endl;
			cout << "data of regestration: " << (car_o[i].registration.day) << "/" << car_o[i].registration.month << "/" << car_o[i].registration.year << endl;
			cout << endl;

		}
	}

}

void main()
{
	srand(time(NULL));

	cout << "chose the task 1-2: ";
	int numOfTask;
	cin >> numOfTask;
	switch (numOfTask)
	{
	case 1:
		task_1();
		break;
	case 2:
		task_2();
		break;
	default:
		cout << "task not found! trai again!" << endl;
		main();
		break;
	}

	system("pause");
}