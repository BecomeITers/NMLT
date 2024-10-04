#include <iostream>
#include"student.h"
using namespace std;
void DoiTen(student& student) {
    student.name = "Long";
}
int main()
{
    student student1("23152058");
    //student1.id = "23162058";
    student1.name = "Nguyen Nhat Nam";
    student1.faculty = "CNTT";
    student1.year = 2023;
    DoiTen(student1);
    student1.ShowInfo();
}

