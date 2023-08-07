#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Address
{
public:
	Address(std::string& city, std::string& street, int& home, int& apartment) {
		city_ = city;
		street_ = street;
		home_ = home;
		apartment_ = apartment;
	};

	std::string get_output_address() { return city_ + ", " + street_ + ", " + std::to_string(home_) + ", " + std::to_string(apartment_); }
	std::string get_city() { return city_; }

private:
	std::string city_; // Город
	std::string street_; // Улица
	int home_; // Номер дома
	int apartment_; // Номер квартиры
};

void sort(Address **addresses, int size) {
	// Сортировка массива пузырьком
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - i - 1; j++) {
			char a = addresses[j]->get_city()[0];
			char b = addresses[j + 1]->get_city()[0];
			if (a > b) {
				// меняем элементы местами
				Address * temp = addresses[j];
				addresses[j] = addresses[j + 1];
				addresses[j + 1] = temp;
			}
		}
	}
}

int main()
{
	setlocale(LC_ALL, "Russian");
	std::ifstream flie_read("in.txt");
	if (!flie_read.is_open())
	{
		std::cout << "File 'in.txt' not open!\n";
		return 0;
	}

	// Получаем размер первого массива
	int size_arr;
	flie_read >> size_arr;

	if (size_arr > 0)
	{
		Address** address = new Address*[size_arr];

		for (size_t i = 0; i < size_arr; i++)
		{
			std::string city; // Город
			std::string street; // Улица
			int home; // Номер дома
			int apartment; // Номер квартиры

			flie_read >> city;
			flie_read >> street;
			flie_read >> home;
			flie_read >> apartment;

			address[i] = new Address(city, street, home, apartment);
		}

		sort(address, size_arr); // Сортируем масссив

		std::ofstream flie_write("out.txt");

		flie_write << size_arr << std::endl;

		for (size_t i = 0; i < size_arr; i++)
		{
			flie_write << address[i]->get_output_address() << std::endl;
		}

		flie_write.close();

		for (size_t i = 0; i < size_arr; i++)
		{
			delete address[i];
		}
		delete[] address;

	}
	flie_read.close();

	return 0;
}
