/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include<iostream>
#include<string.h>

using namespace std;

class FlightInfo
{
    private:
        int FlightNumber;
        char *Destination;
        float Distance;
        float Fuel;

    public:

        // constructor initilizing the private variables
        FlightInfo()
        {
            FlightNumber = 0;
            Destination = new char[30];
            Distance = 0.0;
            Fuel = 0.0;
        }

        void feedInfo() // takes user input
        {
            char destination_arr[30];

            cout<<"Enter the flight number = ";
            cin>>FlightNumber;

            cout<<"Enter the destination = ";
            cin>>destination_arr;

            strcpy(Destination,destination_arr); // copies the input destination to the array

            cout<<"Enter the distance travelled = ";
            cin>>Distance;

            calFuel();
        }

        void calFuel() // calculates fuel based on distance travelled
        {
            if(Distance <= 1000)
            {
                Fuel = 500;
            }
            else if((Distance > 1000) & (Distance <= 2000))
            {
                Fuel=1100;
            }
            else if(Distance > 2000)
            {
                Fuel = 2200;
            }
        }

        void showInfo() // displays flight data
        {
            cout<<endl;
            cout<<endl;
            cout<<"---------------Flight details---------------"<<endl;
            cout<<"Flight number = "<<FlightNumber<<endl;
            cout<<"Destination   = "<<Destination<<endl;
            cout<<"Distance      = "<<Distance<<endl;
            cout<<"Fuel          = "<<Fuel<<endl;
        }

        float getFuel()
        {
            return Fuel; // returns fuel cost
        }
};

int main()
{
    FlightInfo myFlight; 
    myFlight.feedInfo(); // input 
    myFlight.showInfo(); // output
    return 0;
}