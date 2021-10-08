#include "std_lib_facilities.h"
int main()
{
    double min = 0.0;
    double max = 0.0;
    double cmToM = 100;
    double current;
    double cmToInch = 2.54;
    double inchToFeet = 12;
    string unit = "";
    double sum = 0;
    vector<double> values = {};

    while (true)
    {
       cin >> current >> unit;
        cout << current << unit;
       /* if (unit == "cm")
        {
            current /= cmToM;
        }else{if (unit == "in")
        {
            current /= cmToM;
        }
        else
        {
            if (unit == "ft")
            {
                current /= cmToM;
            }
        }
    }
    else
    {
        current = 0;
        cout << "illegal expression";
    }*/
    bool checked = false;
    if (unit=="cm")
    {
        current /= cmToM;
        checked=true;
    }
    if (unit=="ft")
    {
        current *= inchToFeet*=cmToInch/=cmToM;
        checked=true;
    }
    if (unit=="in")
    {
        current *=cmToInch/=cmToM;
        checked=true;
    }
    if (unit=="m")
    {
        checked=true;
    }
    if (checked==false)
    {
        cout << "illegal expression";
        current=0;
    }
    
    
    


    values.push_back(current);
    sum += current;
    if (current > max)
    {
        max = current;
        cout << max << "is the largest number so far";
    }
    else if (current < min && current != 0)
    {
        min = current;
        cout << min << "is the smallest number so far";
    }
}
cout << "The largest number was " << max << "in meters" << '\n';
cout << "The smallest number was " << max << "in meters" << '\n';
cout << "the number of values was " << values.size();
cout << "the sum of the values in meters was " << sum;
sort(values.begin(), values.end());
for (int i = 0; i < values.size(); i++)
{
    cout << values[i];
}
return 0;
}
