// ������6������ ������ �++
#include < iostream>
#include <fstream>
#include <string>//�������� ����� ���������� ����������� �������� � �������� �������������� � �������
//������ �������� ����� �������� ������� �������� � ���� ���� � ������
using namespace std;

									/*������ �������� ������ ��� ������
									�������� ����
									�������� ������
									���� ���� ������
									������ ������
									��� �������*/
bool statistic(string& str) {
	ofstream out;
	out.open("statistics.txt", ios::app); //iostream::appoe
	if (out.is_open()) {//������ ������ � ����
		out << str << " " << str.length() << endl;// ��������� �������� �� ����� �����
		out.close();
		return 0;
	}
	out.close();// �� ������ ������ 
	return -1;
}
void PrintFaile();
void clear();
int main() {
	setlocale(LC_ALL, "Russian");
		int n;
		/*string path = "file.txt";// ���� � �����

//������ � ����
		//����������� ������ ��� ����� ������� ������������ ����� ���������� ����� ������
		ofstream out;//(path)
		out.open(path, ios::out);//���� ���������� ���� �� ���� ���
		if (out.is_open()) {
			cout << " ���� ������ ��� ������\n";
			//out << "Hello World!" << endl;
			for (int i = 0; i < 1; i++) {
				string str;
				cout << "������� ������:\n";
				getline(cin, str);
				out << str << "\n";
				cout << "������ �������� � ����\n";
				//out << "bay\n";//���������� ������ � ����. + ������� �� ������ �������.
			}
		}
		else
			cout << "������ ��������\n";

		out.close();//�������� �����




		ifstream in;// ������ �� �����
		in.open(path);  //�������� ������������� �����
		if (in.is_open()) {
			cout << " ���� ������ ��� ������!\n" << endl;
			string str;// ���� ����������
			//������ ������, ��� �� ���� �����������.					

			char sym;

			while (in.get(sym))								//����� get �������� ����� bool get();
				str += sym;//���������� ��� �������� 
			cout << str << endl;//����� � �������
			//������ ������ ��� �� ����� ��������


			while (!in.eof()) {
				string str;				//end of faile !���� �� �� � ����� �����
				str = " ";							//string str; ������ ������  ��� �� �� ����������� ��������� ��������.(�����������)
				in >> str;
				cout << str << endl;
			}

			string tmp;
			while (getline(in, tmp))
				str += tmp+"\n";						//���������� ������ �� ����� � ����������
				cout << str << endl;//���� ������ ������������������
			
		}
		else
			cout << "������ ��������\n";

		in.close();//�������� �����


		//remove("file.txt");//������� �������� �����
		if (remove("file.txt") == 0)				//������ ������ ��������, ����� ����������
			cout << "���� �����!" << endl;//�������� �� �������� �����
		else
			cout << "������ �������� �����!" << endl;*/


			//������ 1
		cout << "������ 1\n������� �����: ";
		int answer;
		do{
			cout << "�������� ��������\n";
			cout << "���� �����\n";
			cout << "����� �����������\n";
			cout << "�������\n";
			cout << "����������\n";
			cout << "����->\n";
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
				cout << "���� ������\n";
				break;
			case 4:
				cout << "���������� ������\n";
				break;


		string word;//���������� ��� �������� 
		cin >> word;// ������ � ����
		cin.ignore();
		cout << statistic(word) << endl;


		//������ 2

						

	

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
		cout << "������ �������� �����\n";
}

void clear() {
	ofstream out;
	out.open("statistics.txt");
	out.close();

}