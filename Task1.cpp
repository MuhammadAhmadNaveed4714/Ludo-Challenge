//#include<iostream>
//#include<fstream>
//#include<string>
//using namespace std;
////Function to check if user is registered
//bool isregistered(string username, string password) {
//	ifstream file("registered.txt");
//	string line, uname, pass;
//	getline(file, line);//ignore first line
//	while (file >> uname >> pass) {
//		if (uname == username && pass == password) {
//			return true;
//		}
//	}
//	return false;
//}
////Function to add record
//void addrecord(string username) {
//	string message, recipient;
//	cout << "Enter message : ";
//	cin >> message;
//	cout << "Enter recipient's name : ";
//	cin >> recipient;
//	ofstream file("userrecords.txt", ios::app);
//	file << username << " " << message << " " << recipient << endl;
//}
//Function to view all records
//void viewrecords(string username) {
//	ifstream file("userrecords.txt");
//	string line, uname, message, recipient;
//	while (file >> uname >> message >> recipient) {
//		if (uname == username) {
//			cout << "Message : " << message << ",Recipient : " << recipient << endl;
//		}
//	}
//}
//int main() {
//	string username, password;
//	cout << "\nEnter username : ";
//	cin >> username;
//	cout << "\nEnter password : ";
//	cin >> password;
//	if (isregistered(username, password)) {
//		cout << "\nLogin successful!";
//		int choice = 0;
//		while (true) {
//			cout << "\nMenu : ";
//			cout << "\n1-Add recipient : ";
//			cout << "\n2-View all records : ";
//			cout << "\n3-Exit";
//			cout << "\nEnter choice : ";
//			cin >> choice;
//			switch (choice) {
//			case 1:
//				addrecord(username);
//				break;
//			case 2:
//				viewrecords(username);
//				break;
//			case 3:
//				return 0;
//			}
//		}
//	}
//	else {
//		cout << "\nInvalid information!";
//	}
//	return 0;
//}
