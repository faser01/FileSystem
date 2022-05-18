// Персон6альный шаблон С++
#include < iostream>
#include <fstream>
#include <string>//файловый поток библиотека позволяющая работать с классами взаимодействуя с файлами
//классы описания групп обьектов которые содержат в себе поля и методы
using namespace std;

									/*ошибки открытия файлов для записи
									неверный путь
									неверный формат
									если файл открыт
									пустая строка
									нет доступа*/
bool statistic(string& str) {
	ofstream out;
	out.open("statistics.txt", ios::app); //iostream::appoe
	if (out.is_open()) {//запись данных в файл
		out << str << " " << str.length() << endl;// указатель указыает на длину слова
		out.close();
		return 0;
	}
	out.close();// на всякий случай 
	return -1;
}
void PrintFaile();
void clear();
int main() {
	setlocale(LC_ALL, "Russian");
		int n;
		/*string path = "file.txt";// путь к файлу

//запись в файл
		//конструктор класса это метод который выполняеться когда создаеться метод класса
		ofstream out;//(path)
		out.open(path, ios::out);//файл создаеться если ег даже нет
		if (out.is_open()) {
			cout << " файл открыт для записи\n";
			//out << "Hello World!" << endl;
			for (int i = 0; i < 1; i++) {
				string str;
				cout << "Введите строку:\n";
				getline(cin, str);
				out << str << "\n";
				cout << "запись помещена в файл\n";
				//out << "bay\n";//добавление записи в файл. + перенос на другую строчку.
			}
		}
		else
			cout << "ошибка открытия\n";

		out.close();//закрытие файла




		ifstream in;// чтение из файла
		in.open(path);  //открытие существующего файла
		if (in.is_open()) {
			cout << " Файл открыт для чтения!\n" << endl;
			string str;// одна переменная
			//первый способ, где мы берём посимвольно.					

			char sym;

			while (in.get(sym))								//метод get обладает типом bool get();
				str += sym;//переменная для хранения 
			cout << str << endl;//вывод в консоль
			//второй способ где мы берем пословно


			while (!in.eof()) {
				string str;				//end of faile !пока мы не в конце файла
				str = " ";							//string str; второй способ  что бы не повторялось последнее значение.(исправление)
				in >> str;
				cout << str << endl;
			}

			string tmp;
			while (getline(in, tmp))
				str += tmp+"\n";						//записываем строки из файла в переменную
				cout << str << endl;//либо эскейп последовательность
			
		}
		else
			cout << "ошибка открытия\n";

		in.close();//закрытие файла


		//remove("file.txt");//функция удаления файла
		if (remove("file.txt") == 0)				//второй способ удаления, более практичный
			cout << "Файл удалён!" << endl;//проверка на удаления файла
		else
			cout << "Ошибка удаления файла!" << endl;*/


			//Задача 1
		cout << "Задача 1\nВведите слово: ";
		int answer;
		do{
			cout << "выберите действие\n";
			cout << "ввод слова\n";
			cout << "вывод содержимого\n";
			cout << "очистка\n";
			cout << "завершение\n";
			cout << "ввод->\n";
			cin >> answer;
			string str;
			switch (switch_on)
			{
			default:
				break;
			}
			case 1:
				cout<< 
			case 2:

			case 3:
				clear();
				cout << "файл очищен\n";
				break;
			case 4:
				cout << "завершение работы\n";
				break;


		string word;//переменная для хранения 
		cin >> word;// запись в файл
		cin.ignore();
		cout << statistic(word) << endl;


		//задача 2

						

	

	return 0;
}
void PrintFaile() {
	ifstream in;
	in.open("statistics.txt");
	if (in.is_open()) {
		char sym;
		while (in.get(sym))
			cout << sym;
	}
	else
		cout << "ошибка открытия файла\n";
}

void clear() {
	ofstream out;
	out.open("statistics.txt");
	out.close();

}