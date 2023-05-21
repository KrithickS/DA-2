#include <iostream>

using namespace std;

#define MAX_SIZE 100

class Stack {

private:

    int arr[MAX_SIZE];

    int top;

public:

    Stack() {

        top = -1;

    }

    void push(int element) {

        if (top >= MAX_SIZE - 1) {

            cout << "Stack Overflow. Cannot push element.\n";

        } else {

            arr[++top] = element;

            cout << "Pushed element: " << element << endl;

        }

    }

    void pop() {

        if (top < 0) {

            cout << "Stack is empty. Cannot pop element.\n";

        } else {

            cout << "Popped element: " << arr[top--] << endl;

        }

    }

    bool isEmpty() {

        return (top < 0);

    }

};

int main() {

    Stack stack;

    int choice, element;

    while (true) {

        cout << "\nStack Operations:\n";

        cout << "1. Push\n";

        cout << "2. Pop\n";

        cout << "3. Exit\n";

        cout << "Enter your choice: ";

        cin >> choice;

        switch (choice) {

            case 1:

                cout << "Enter element to push: ";

                cin >> element;

                stack.push(element);

                break;

            case 2:

                stack.pop();

                break;

            case 3:

                exit(0);

            default:

                cout << "Invalid choice. Please try again.\n";

        }

    }

    return 0;

}
