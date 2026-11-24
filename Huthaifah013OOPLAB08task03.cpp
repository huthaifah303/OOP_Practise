#include <iostream>
using namespace std;

class Assessment
{
public:
    virtual void calculateMarks() = 0;
};

class Quiz : public Assessment
{
private:
    int marks;

public:
    Quiz(int m)
    {
        marks = m;
    }

    void calculateMarks() override
    {
        cout << "Quiz Marks: " << marks << endl;
    }
};

class Assignment : public Assessment
{
private:
    int marks;

public:
    Assignment(int m)
    {
        marks = m;
    }

    void calculateMarks() override
    {
        cout << "Assignment Marks: " << marks << endl;
    }
};

class Marks
{
private:
    int value;

public:
    Marks(int v)
    {
        value = v;
    }

    Marks operator+(Marks obj)
    {
        return Marks(value + obj.value);
    }

    void display()
    {
        cout << "Total Assessment Marks: " << value << endl;
    }
};

int main()
{
    Quiz Q(15);
    Assignment A(25);

    Q.calculateMarks();
    A.calculateMarks();

    Marks M1(15);
    Marks M2(25);

    Marks total = M1 + M2;

    total.display();

    return 0;
}
