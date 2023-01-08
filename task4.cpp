#include<iostream>
using namespace std;
float neededhours, days,numberofworkers;
float availabledays, availablehours, allproductivehours, hoursleft, additionalhours;

float timeEnough();
float timenotenough();

main()
{
    float result;
    
    cout<<"Enter total hours needed for the project: "<<endl;
    cin>>neededhours;

    cout<<"Enter the number of days the firm has: "<<endl;
    cin>>days;

    cout<<"Enter the number of workers on the project: "<<endl;
    cin>>numberofworkers;

    availabledays=days*0.9;
    availablehours=(availabledays*10);

    allproductivehours=numberofworkers*availablehours;

    if(allproductivehours>neededhours)
    {
       result= timeEnough();
       cout<<"Yes! "<<result<<" hours left.";
    }

    if(allproductivehours<neededhours)
    {
        result=timenotenough();
        cout<<"Not enough time "<<result<<" hours needed. ";

    }

}


float timeEnough()
{
    

    hoursleft=allproductivehours-neededhours;

    return hoursleft;

}

float timenotenough()
{

    additionalhours=neededhours-allproductivehours;
    return additionalhours;

}