//Herry Aziz Msewa, T21-03-14871, (CSDFE)
#include <iostream>
using namespace std;

struct employee {
    int employeeNumber;
    float employeeCompensation;
};

struct node {
    employee data;
    node *next;
};

int main() {
    node *head = NULL;
    node *temp = NULL;

    for (int i = 0; i < 3; i++) {
        node *newNode = new node();
        cout << "Enter the employee number for employee " << i + 1 << ": ";
        cin >> newNode->data.employeeNumber;
        cout << "Enter the employee compensation for employee " << i + 1 << ": ";
        cin >> newNode->data.employeeCompensation;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
        } else {
            temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    cout << "Data of all employees:" << endl;
    temp = head;
    while (temp != NULL) {
        cout << "Employee number: " << temp->data.employeeNumber << endl;
        cout << "Employee compensation: " << temp->data.employeeCompensation << endl;
        temp = temp->next;
    }
    return 0;
}
