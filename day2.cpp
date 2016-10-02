#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    double mealCost;
    int tipPercent,taxPercent;
    
     cin>>mealCost>>tipPercent>>taxPercent;
     
    double tip=mealCost*((double)tipPercent/100);
    double tax=mealCost*((double)taxPercent/100);
    double totalCost=mealCost+tip+tax;
    int tot=(int)round(totalCost);
    cout<<"The total meal cost is "<<tot<<endl;  
    return 0;
}

