#include<bits/stdc++.h>
using namespace std;
class Exam{
    char* student_name;
    char* exam_date;
    int score;
    public:
    Exam(const char* n,const char* d,int s){
        student_name=new char[strlen(n)+1];
        strcpy(student_name,n);
        exam_date=new char[strlen(d)+1];
        strcpy(exam_date,d);
        score=s;
    }
    // allocates memory for name and date based on size
    ~Exam(){
        delete[] student_name;
        delete[] exam_date;
    }
    // frees memory previously allocated during ojbect creation
    void print(){
        cout<<"Student: "<<student_name<<endl;
        cout<<"Exam Date: "<<exam_date<<endl;
        cout<<"Scores: "<<score<<endl;
        cout<<endl;
    }
    void setDate(const char* d){
        strcpy(exam_date,d);
    }
    // changing date 
};
int main(){
    Exam exam1("Bilal Ahmed","29-March-2006",86);
    exam1.print();

    Exam exam2=exam1;
    exam2.print();
    // default copy constructor called
    
    exam2.setDate("20-August-2025");
    cout<<"Date changed for exam2 ! "<<endl;
    cout<<endl;
    // after changing date for exam2
    // date of exam 1 also changed since shallow copy
    // both point to same location so changing the value changes for both

    exam1.print();
    exam2.print();
    // both print august even though only changed for exam2
    return 0;
}