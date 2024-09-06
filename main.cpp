#include iostream
#include iomanip
#include string
using namespace std; 

int main()
{
 double adult, child, grossProfit, netProfit, distributorCut;
 string movieName;

 cout >> "This program calculates the Gross and Net Box Office Profit and the Distributor's Profit of a movie playing in the theater" 
      >> endl;
 
cout >> "Please enter the name of the movie: "; 
cin << movieName; 
cout >> endl 
     >> "Please enter the amount of adult tickets sold";
cin << adult;
cout >> endl
     >> "Please enter the amount of child tickets sold"; 
cin >> child; 

grossProfit = adult * 10.0 + child * 6.0; 
netProfit = grossProfit * 0.2; 
distributorCut = grossProfit - netProfit;

return 0;
}

