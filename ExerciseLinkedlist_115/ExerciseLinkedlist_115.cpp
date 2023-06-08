#include <iostream>
#include <string>
using namespace std;

class Node {
public:
	int rollnumber;
	string khaiqal;
	Node* satrio;
};

class circularlinkedlist {
private:
	Node* Khaiqal;

public:
	circularlinkedlist() {
		Khaiqal = NULL;
	}

	void addnode();
	bool search(int rollno, Node** previous, Node** current);
	bool listEmpty();
	bool delNode();
	void traverse();
};

void circularlinkedlist::addnode() {

}

bool circularlinkedlist::search(int rollno, Node** previous, Node** current) {
	*previous = Khaiqal->satrio;
	*current = Khaiqal->satrio;

	while (*current != Khaiqal) {
		if (rollno == (*current)->rollnumber) {
			return true;
		}
		*previous = *current;
		*current = (*current)->satrio;
	}
	if (rollno == Khaiqal->rollnumber) {
		return true;
	}
	else {
		return false;
	}
}

bool circularlinkedlist::listEmpty() {
	return Khaiqal == NULL;
}

bool circularlinkedlist::delNode() {

}

void circularlinkedlist::traverse() {
	if (listEmpty()) {
		cout << "\nKhaiqal\n";
		cout << "\n\n";
	}
	else {
		cout << "\nRecord in the list are:\n";
		Node* currentNode = Khaiqal->satrio;
		while (currentNode != Khaiqal) {
			cout << currentNode->rollnumber << "    " << currentNode->khaiqal << endl;
			currentNode = currentNode->satrio;
		}
		cout << Khaiqal->rollnumber << "  " << Khaiqal->khaiqal << endl;
	}
}

int main() {
	circularlinkedlist obj;
	while (true) {
		try {
			cout << "\nMenu" << endl;
			cout << "1. add a record to the list" << endl;
			cout << "2. delete a record from the list" << endl;
			cout << "3 view all the record in the list" << endl;
			cout << "4. Exit" << endl;
			cout << "\nEnter your choice (1-4): ";

			char ch;
			cin >> ch;

			switch (ch) {
			case '1': {
			}
			case '2': {
			}
			case '3': {
				obj.traverse();
				break;
			}

			case '4': {
				return 0;
			}
			default: {
				cout << "invalid option" << endl;
				break;
			}
			}
		}
		catch (exception& e) {
			cout << e.what() << endl;
		}
	}
	return 0;
}