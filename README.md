# STL-in-Cplusplus
This repository consists of questions and assignment solution that I solved in "STL in C++" online classes of Saurabh Shukla sir.

**************************************

### Assignment 1 | Templates
1. Define a function template which takes two arguments of same types and return the greater value.
2. Define a function template to print values of an array of any type
3. Define a function template to sort an array of any type
4. Define a class template, array, such that an instance of the class can store homogeneousdata. Define constructor to initialize the size of the array. Also define member function toinsert an item in the array, retrieve an item from specified index, count number of elements in the array, edit an item, delete an item and search an item. Implement array in such a way that the elements stored are always in the left blocks without any block leaving empty in between.
5. Define a class template Hash which takes two template parameters. Instance of the class can
store pair of data, each of any type. Define functions to retrieve first and second value of the
pair.

*********************************************
### Assignment 2 | Array

1. Create an array of int type with size 5. Print array elements from left to right.
2. Create an array of int type with size 10. Input numbers from user and store in the array.Print only odd numbers stored in the array from left to right.
3. Create an array of Complex type with size 3. Print the sum of all the complex number.
4. Create an array of float type with size 5.Input 5 numbers from user and store in the array.
Print them in reverse order.

**********************************************

### Assignment 3 | Vector

a. Create a vector for int type values and store any 4 numbers in it. Print squares of vector elements using range-for loop.
b. Complete the following program as directed in the comments
```
#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
//Create a vector for int type values and an iterator

//Store element 10 using push_back method in vector v1

//Store element 20 at the beginning of the vector v1 using insert function

//Store element 30 four time, just after first element of the vector v1 using insert function

//Create three int variables with values 11,12,13; now store them at 3rd position in the vector v1 using insert function

//print values of vector v1

//Create another vector v2 for int type values

//copy last 5 elements of v1 into v2 (last element of v1 should be first element of v2)

//print v2 vector elements

//Erase second element of vector v2

//print v2 vector elements

//Erase 4th, 5th and 6th element of vector v1

//print values of vector v1

```
***********************************************
### Assignment 4 | More on vectors

a. Complete the following program as directed in the comments
```
#include<conio.h>
#include<iostream>
#include<vector>
using namespace std;
int main()
{
//Create a vector vec for containing int vectors

//Create three int vectors and initialize them with some values during declaration

//Store vector v1 in vector vec using push_back method

//Store vector v2 and v3 at the end of vector vec using insert function in single call.

//Print each vector elements in vector vec in a separate line

```
************************************************

### Assignment 5 | List

1. Complete the program as directed in the comments.
```
#include<conio.h>
#include<list>
#include<iostream>
using namespace std;
int main()
{
//Create a list of int values

//Store element 10 in the list 11 using push_back method

//Store element 20 in the list 11 using push_front method

//Store element 30 in the list after first element using insert function

//Store elements 22,44,33 in the list after second element using insert function

//Print list elements using range-for loop

//Edit second last element of the list with new element value 25

//Print list elements using for loop

//print first value of list 11 using front method

//Erase first element of the list using pop_front method

//Erase last element of the list using pop_back method

//Print list elements using for loop

//Erase all elements of the list except first and last element using erase method

//Print list elements using for loop

```

*********************************************
### Assignment 6 | forward_list

1. Complete the program as directed in the comments.
```
#include<conio.h>
#include<forward_list>
#include<iostream>
using namespace std;
int main()
{
//Create a forward_list 11 of int values
forward_list <int> 11;
//Store element 10 in the list 11 using push_front method

//Store element 20 in the list before first element using emplace_front method

//Store element 30 after first element 20 using emplace_after method

//Store elements 22 in the list after second element using insert_after method

//Find number of elements in the list. Create int variable length to store length of the list

//Print list elements using range-for loop

//Store element 35 as last element

//Print list elements using for loop

//Edit second last element of the list with new element value 75

//print first value of list 11 using front method

//Erase first element of the list using pop_front method

//Erase all elements except first element using erase_after method

//Print list elements using for loop

//Assign 6 elements 20,40,60,80,100,120 in the forward_list object 11

//Erase second element using erase_after

//Remove value 100 using remove method

//Print list elements using for loop

//Reverse list 11 using reverse method

//Print list elements using for loop

}
```
**********************************************
### Assignment 7 | deque

1. Complete the program as directed in the comments.
```
#include<iostream>
#include<conio.h>
#include<vector>
#include<deque>
#include<algorithm>
using namespace std;
void reverse Deque(deque<int> &d);
vector<int> deque ToVector(deque<int> d);
int main()
{
// Create a deque d1 to contain int type values

//push first 5 multiples of 10 in a sequence onto the deque

//display all the elements of deque

//remove the front element of the deque

//display all the elements of deque

//insert an element 60 at the end of the deque

//display all the elements of deque

//Insert an element 35 after 30

//display all the elements of deque

//Reverse queue elements
reverse Deque(d1);

//display all the elements of deque

//copy deque data into a vector
vector<int> v=deque ToVector(d1);
//display vector values

//display all the elements of deque

getch();
}

vector<int> deque ToVector(deque<int> d)
{
//code here
}

void reverse Deque(deque<int> &d)
{
//code here
}
```
**********************************************

### Assignment 8 | stack

1. Complete the program as directed in the comments.
```
#include<iostream>
#include<conio.h>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
stack<int,vector<int>> reverse Stack(stack<int, vector<int>> s);
vector<int>stackToVector(stack<int,vector<int>> &s);
int main()
{

//Create a stack s1 to store int type values,implemented with the help of vectors
  
//push first 5 multiples of 10 in a sequence onto the Stack
  
//display top value of the stack
  
//remove the top element of the stack
  
//display top value of the stack
  
//Reverse stack elements
s1=reverseStack(s1);
  
//display top value of the stack
  
//copy stack data into a vector
vector<int> v-stackToVector(s1);
  
//display vector values
//display top value of the stack
  
getch();
}
  
vector<int> stackToVector(stack<int,vector<int>> &s)
{
//code here
}
  
stack<int,vector<int>> reverse Stack(stack<int, vector<int>>s)
{
//code hereI
}
```
********************************************

### Assignment 9 | queue

1. Complete the program as directed in the comments.
```
#include<iostream>
#include<conio.h>
#include<vector>
#include<queue>
#include<stack>
#include<list>
#include<algorithm>
using namespace std;

queue<int,list<int>> reverseQueue (queue<int,list<int>> q);

vector<int> queue ToVector(queue<int, list<int>> q);

int main()
{
// Create a queue q1 using list of int values

//push first 5 multiples of 10 in a sequence onto the queue

//display front and back values of the queue

//remove the front element of the queue

//display front and back values of the queue

//Reverse queue elements
q1=reverseQueue(q1);

//display front and back values of the queue

//copy queue data into a vector
vector<int> v=queueToVector(q1);

//display vector values

//display front and back values of the queue
getch();
}

vector<int> queue ToVector(queue<int,list<int>> q)
{
//code here
}

queue<int,list<int>> reverseQueue(queue<int,list<int>> q)
{
//code here
}
```
**********************************************

### Assignment 10 | priority_queue

1. Complete the program as directed in the comments.
```
#include<iostream>
#include<conio.h>
#include<vector>
#include<queue>
using namespace std;
struct Batsman
{
int totalRuns;
int highestScore;
int totalMatches;
  
Batsman(int r,int, int m):total Runs(r), highestScore (s), totalMatches(m){}
void showData() { cout<<"\nTotal runs: "<<totalRuns<<"\nHighest Score:
"<<highestScore<<"\nTotal Matches: "<<totalMatches;}
};
  
struct compareScore{
bool operator()(Batsman const& b1, Batsman const& b2){
return b1.highestScore < b2.highestScore;
}
void priorityQueueToVector(priority_queue<Batsman, vector<Batsman>,compareScore>pq,vector<Batsman>&vec);

int main()
{
// Create a priority_queue to store Batsman type values according to highest score Batsman
Rahul(2510,121,44), Rohit(3111,147,72), Virat(1088,89,20), Shikhar(1920, 182,31), Pankaj(890,54,22);
  
//Store Batsman data in the priority_queue
  
//display the highest scorer batsman's data
  
//copy priority_queue data into a vector
vector<Batsman> v;
priorityQueueToVector(pq,v);
//display vector values
getch();
}
void priorityQueueToVector(priority_queue<Batsman, vector<Batsman>,compareScore> pq,vector<Batsman>&vec)
{
//code here
}
  ```
*****************************************************

### Assignment 11 | String

1. Complete the program as directed in the comments.
```
#include<iostream>
#include<conio.h>
#include<string>
using namespace std;

void string Reverse(string &s);
int countWords(string &s1);
void trim(string &s1);
void removeExtraSpaces(string &s1);
void splitString ToWords (string &s1, string words[]);
int main()
{
//Create a string object s1

//Assign a string "mysirg education services" into s1

//print string value using cout

//add " private limited" at the end of string s1 using concatenation operator

//print string value using cout

//Erase last word from the string s1 using position

//print string value using cout

//Erase a particular character from the string g from mysirg

//print string value using cout

//Erase services from the string s1 using iterators

//print string value using cout

//Append a character'.' (full stop) at the end of the string s1

//print string value using cout

//Re-initializing the string object with the same value but with extra spaces
s1=" mysirg education services private limited";

//Reverse a string
string Reverse(s1);

//print string value using cout

//Remove leading spaces from the string s1
trim(s1);

//print string value using cout

//count words in the string
int w-countWords(s1);
cout<<"Word count="<<w<<endl;

//Remove extra spaces between the words
remove ExtraSpaces(s1);

//print string value using cout

//print length of the string

//split string s1 into words
string words[w];
splitString ToWords(s1,words);

//print all the words stored in words array
for(int i=0;i<=4;i++)
cout<<i<<"-"<<words[i]<<endl;
getch();
}

void splitString ToWords (string &s1, string words[])
{
//code here
}

void remove ExtraSpaces(string &s1)
{
//code here
}

void trim(string &s1)
{
// code here
}

int countWords(string &s1)
{
//code here
}

void stringReverse(string &s)
{
// code here
}
```
*****************************************************
### Assignment 12 | SET

1. Complete the program as directed in the comments.
```
#include<conio.h>
#include<iostream>
#include<set>
using namespace std;
struct score
{
int runs;
int wickets;
score(int r,int w):runs (r), wickets(w){ }
};
struct compareRuns{
//define function call operator here
};
struct compareWickets{
//define function call operator here
};

void displayByRuns (set<score,compareRuns> &s);
void displayByWickets(set<score, compareWickets>&s);

int main()
{
//Create 4 score objects with dummy data

//Create set s1 object using comparator compareWickets

//Insert score objects in set s1

//display Scores starting from highest wickets to lowest wickets

// Create set s2 object using comparator compareRuns

//Insert score objects in set s1

//display Scores starting from lowest runs to highest runs

//Find and print scores only having centuries in the set of scores s2
getch();
}

void displayByRuns (set<score,compareRuns> &s)
{
//code here to print set elements
}
void display ByWickets(set<score,compareWickets> &s)
{
//code here to print set elements
}
```
************************************************
### Assignment 12 | SET

1. Complete the program as directed in the comments.
```
#include<iostream>
#include<conio.h>
#include<map>
#include<utility>
using namespace std;
  
pair<int, bool> findName(map<int,string>&m, string n);
int main()
{
//create a map object to store emp_id of int type and emp_name of string type

//add values to the map using [] operator. Emp_id=1 and emp_name="Rahul",
emp_id = 2 and emp_name="Arjun"

//add values to the map using insert function. Emp_id = 3 and emp_name = "Kapil"

//add values to the map using pair. Emp_id=4 and emp_name="Sameer"

//print map using explicit iterator

//print map elements using implicit iterators

//count element 2 in the map

//display the size of map

//add element using emplace method

//print map elements using implicit iterators

//find emp_name=="Sameer" in the map. Define a function findName which
//returns a pair of emp_id and bool value true if name found otherwise false.
pair<int, bool>pr = findName(m,"Sameer");
if(pr.second)
cout<<"Name found at key: "<<pr.first<<endl;
getch();
pair<int,bool> findName(map<int,string>&m, string n)
{
//code here
}
```
*******************************************************












