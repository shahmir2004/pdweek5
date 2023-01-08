#include <iostream>
using namespace std;
char type;
float price;
float taxCalculator(char type, float price);
main()
{

    
    float tax;
    float finalprice;
    
    cout<<"Enter car price: "<<endl;
    cin>>price;

    cout<<"Enter car type: "<<endl;
    cin>>type;
   
    tax=taxCalculator(type, price);
    finalprice=price+tax;

    if(type=='M')
    {
       
        cout<<"The final price on a vehicle of type motorcycle, after adding tax is: "<<finalprice;
    }
    if(type=='E')
    {
        
        cout<<"The final price on a vehicle of type Electric, after adding tax is: "<<finalprice;
    }
    if(type=='S')
    {
        
        cout<<"The final price on a vehicle of type sedan, after adding tax is: "<<finalprice;
    }
    if(type=='V')
    {
        
        cout<<"The final price on a vehicle of type Van, after adding tax is: "<<finalprice;
    }
    if(type=='T')
    {
        
        cout<<"The final price on a vehicle of type truck, after adding tax is: "<<finalprice;
    }


}

float taxCalculator(char type, float price)
{
    float tax;

    if (type=='M')
    {
            tax=price*(0.06);
            return tax;
    }

     if (type=='E')
    {
            tax=price*(0.08);
            return tax;
    }
     if (type=='S')
    {
            tax=price*(0.1);
            return tax;
    }
     if (type=='V')
    {
            tax=price*(0.12);
            return tax;
    }
     if (type=='T')
    {
            tax=price*(0.15);
            return tax;
    }
    return 0;
}