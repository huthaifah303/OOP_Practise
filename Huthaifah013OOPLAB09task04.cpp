#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack
{
private:
    T* items;
    int capacity;
    int top;

public:
    Stack(int cap)
    {
        capacity = cap;
        top = 0;
        items = new T[capacity];
    }

    ~Stack()
    {
        delete[] items;
        items = nullptr;
    }

    bool isEmpty()
    {
        return top == 0;
    }

    bool isFull()
    {
        return top == capacity;
    }

    int size()
    {
        return top;
    }

    void push(T value)
    {
        if (isFull())
        {
            cout << "Stack is full, cannot push " << value << endl;
            return;
        }
        items[top] = value;
        top++;
    }

    T pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        top--;
        return items[top];
    }

    T peek()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
            return T();
        }
        return items[top - 1];
    }
};

int main()
{
    Stack<int> intStack(3);
    intStack.push(5);
    intStack.push(6);
    intStack.push(8);
    intStack.push(9); 

    cout << "Popping:";
    while (!intStack.isEmpty())
    {
        cout << " " << intStack.pop();
    }
    cout << endl;
    string word = "KARACHI";
    int len = word.length();
    Stack<char> charStack(len);

    for (int i = 0; i < len; i++)
    {
        charStack.push(word[i]);
    }

    cout << "KARACHI reversed: ";
    while (!charStack.isEmpty())
    {
        cout << charStack.pop();
    }
    cout << endl;

    Stack<string> history(5);
    history.push("google.com");
    history.push("github.com");
    history.push("gutech.edu.pk");

    cout << "Current page: " << history.peek() << endl;
    history.pop();
    cout << "After Back: " << history.peek() << endl;

    return 0;
}