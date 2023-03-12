//WAP in C++ to demonstrate the use of Default Constructor  
//WAP in C++ to demonstrate the use of Parametrized Constructor  
//WAP in C++ to demonstrate the use of Copy Constructor  

 class constructor {
    private:
    int x;
    int y;
    public:
    constructor() { //defult
    }
    
    constructor(int a) { // parametrized
        x=a;
    }
    
    constructor( constructor c1) { // copy constructor
        y = c1.x;
    }
 }

 int main(){
    return 0;
 }