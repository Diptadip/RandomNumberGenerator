#include<iostream>
using namespace std;

int randomNumberGen(int*,int*);

int main(){
    int lb,ub;
    do{
        cout<<"Enter lower bound and upper bound: "<<flush;
        cin>>lb>>ub;
    }while(lb>ub && cout<<"Lower bound cannot be greater than upper bound, Enter again...\n");
    int num=randomNumberGen(&lb,&ub);
    cout<<"Number generated is: "<<num<<endl;
}

int randomNumberGen(int* lb,int* ub){
    int i; //garbage value is not so garbage
    i%=*ub; //making i at most equal to upper bound
    i+=*lb; // making i at least equal to lower bound
    return i;
}