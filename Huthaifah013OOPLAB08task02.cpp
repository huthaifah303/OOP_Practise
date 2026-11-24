#include <iostream>
using namespace std;

class Student
{
private:
    int rollNo;
    int marks;

public:
    Student(int r, int m)
    {
        rollNo = r;
        marks = m;
    }

    bool operator>(Student obj)
    {
        return marks > obj.marks;
    }
};

int main()
{
    Student S1(97, 45);
    Student S2(93, 43);

    if (S1 > S2)
    {
        cout << "Student 1 has obtained higher marks." << endl;
    }
    else
    {
        cout << "Student 2 has obtained higher marks." << endl;
    }

    return 0;
}
