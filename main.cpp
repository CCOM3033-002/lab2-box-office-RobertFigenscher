#include <iostream>
#include <iomanip>
#include <string>
using namespace std; 

int main()
{
 double adult, child, grossProfit, netProfit, distributorCut;
 string movieName;
 

 cout << "This program calculates the Gross and Net Box Office Profit and the Distributor's Profit of a movie playing in the theater" 
      << endl;
 
cout << "Please enter the name of the movie: "; 
getline(cin,movieName); 
cout << endl 
     << "Please enter the amount of adult tickets sold";
cin >> adult;
cout << endl
     << "Please enter the amount of child tickets sold"; 
cin >> child; 
cout << endl << endl;

grossProfit = adult * 10.0 + child * 6.0; 
netProfit = grossProfit * 0.2; 
distributorCut = grossProfit - netProfit;

cout << "Movie Name:" << '\"' << movieName << '\"' << endl; 
cout << "Adult Tickets Sold:" << adult << endl; 
cout << "Child Tickcets Sold:" << child << endl;
cout << setprecision(2) << fixed;
cout << "Gross Box Office Profit:" << "$"  << grossProfit << endl;
cout << "Net Box Office Profit:" << "$" << netProfit << endl;
cout << "Amount Paid To Distributor:" << "$" << distributorCut << endl;

return 0;
}

