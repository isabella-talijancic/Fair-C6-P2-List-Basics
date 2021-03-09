//C6 P2 List Basics

#include <iostream> 
#include <list> 
#include <iterator>

using namespace std;

const int MAX_ITEMS = 9;

//function for printing the elements in a list 
void showList(list <int> numList) 
{ 
	list<int>::iterator iter; 
	for(iter = numList.begin(); iter != numList.end(); ++iter) 
		cout << *iter << ", " ; 
	cout << '\n'; 
}

int main() 
{
	cout << "* * List Basics * *\n";
	//Allocate an integer list	
	list<int> numList;
	for (int load_Idx = 0; load_Idx <= MAX_ITEMS; load_Idx++)
	{
		//Initalize the list with a for-loop - double or triple idx
		numList.push_back(load_Idx * 2);
	}

	cout << "\n\nAllocated & Initialized List : "; 
	showList(numList);

	//Display the first and last number in the list
	cout << "\nFirst number in List : " << numList.front();
	cout << "\nLast number in List : " << numList.back();
	
	//Add two++ numbers to the end of list
	cout << "\n\nAdd two numbers at end : ";
	numList.push_back(333);
	numList.push_back(444);
	showList(numList);
  
	//Add two++ numbers to the front of the list
	cout << "\nAdd two numbers at front : ";
	numList.push_front(222);
	numList.push_front(111);
	showList(numList);
  
	//Remove the first & last numbers from the list
	cout << "\nRemove the number at front and end : ";
	numList.pop_front();
	numList.pop_back();
	showList(numList);

	//Sort the new list
	cout << "\nSort the list in order : ";
	numList.sort();
	showList(numList);

	//Display the list in reverse order.
	cout << "\nReverse the order of list : ";
	numList.reverse();
	showList(numList);
	
	cout << "\n\n* * End of Program * *";
	return 0; 
}