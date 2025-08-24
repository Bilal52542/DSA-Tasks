#include<bits/stdc++.h>
using namespace std;
class Box{
    int* weight;
    public:
    Box(){weight=new int(0);}
    Box(int w){weight=new int(w);}
    ~Box(){
        delete weight;
    }
    Box(class Box &b){
        weight= new int(*b.weight); 
    }
    Box& operator=(class Box &b){
        delete weight;
        weight=new int(*b.weight);
        return *this;
    }
    void setWeight(int w){*weight=w;}
    int getWeight(){return *weight;}
    void print(int i){
        cout<<"Weight of box "<<i<<" is : "<<*weight<<" kgs" <<endl;
        cout<<endl;
    }
};
int main(){
    cout<<"Deep Copy : "<<endl;
    Box box1(10);
    Box box2=box1; // uses copy constructor
    Box box3;
    box3=box1; // copies uses = operator 

    box1.print(1);
    box2.print(2);
    box3.print(3);
    
    cout<<"Changing weight of 1"<<endl;
    box1.setWeight(420); //box1 weight changed to 420
    box1.print(1);
    box2.print(2); // doesnt change weight of box2,box3
    box3.print(3);
    // shows that all have different locations (deep copy)
    
    cout<<"Shallow Copy : "<<'\n'<<endl;

   
    box1.print(1);
    box3.print(3);

    box3.setWeight(0777); //box3 weight changed to 777

    box1.print(1);
    box3.print(3);

    

    box1.print(1);
    box2.print(2);
    box3.print(3);

    // // implment deep shallow copy
    return 0;
}