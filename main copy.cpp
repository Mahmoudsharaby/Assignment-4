#include <iostream>
#include "linkedlist.h"
#include <vector>
using namespace std;
void insertAfter(int x, int y, vector<int> &num1)
{
    for(int i=0;i<num1.capacity();i++)
    {
        if(num1[i]==x)
        {
            
            num1.insert(num1.begin()+num1.at(i),y);
        }
        else
            continue;
    }
}
int main()
{
    vector<int> num;
    int n;
    int x;
    int y;
    int z;
    cout << "Enter the number of elements:";
    cin >> n;
    for(int i=0;i<n;i++)
    {
        cout << "Enter a number:";
        cin >> x;
        num.push_back(x);
    }
    cout << "the number to insert after:";
    cin >> y;
    cout << "Enter the number you want to insert:";
    cin >> z;
    insertAfter(y,z,num);
    cout << "=================" << endl;
    linkedlist p;
    p.addnode(10);
    p.addnode(20);
    p.addnode(30);
    cout << "Display before adding the vector array:" << endl;
    p.display();
    cout << "==========" << endl;
    p.addvectortolist(num);
    cout <<"Display after adding the vector array:" << endl;
    p.display();
    cout << "==========" << endl;
    cout<< "The sum of the linkedlist:" << p.sum()<< endl;
    
    
}
