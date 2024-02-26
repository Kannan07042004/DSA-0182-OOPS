#include<iostream>
using namespace std;
class GradeCalculator 
{
public:
    char grade(int tm) 
	{
        float p=(static_cast<float>(tm)/100)*100;
    	cout<<"Total percentage is: "<<p<<"%"<<endl;
        if(p>=85)
            return 'A';
        else if(p>=80)
            return 'A-';
        else if(p>=70)
            return 'B';
        else if(p>=65)
            return 'B-';
        else if(p>=55)
            return 'C';
        else if(p>=33)
            return 'D';
        else
            return 'F';
    }
};
int main() 
{
    int cam,mte,cam1,iam,ete;
    cout<<"Enter class attendance marks (out of 10): ";
    cin>>cam;
    cout<<"Enter midterm exam marks (out of 20): ";
    cin>>mte;
    cout<<"Enter class assignment marks (out of 10): ";
    cin>>cam1;
    cout<<"Enter internal assessment marks of course instructor (out of 10): ";
    cin>>iam;
    cout<<"Enter end-term exam marks (out of 50): ";
    cin>>ete;
    int tm=cam+mte+cam1+iam+ete;
    GradeCalculator calculator;
    char grade = calculator.grade(tm);
    cout<<"Grade is: "<<grade<<endl;
    cout<<"Total mark is: "<<tm<<endl;
    return 0;
}

