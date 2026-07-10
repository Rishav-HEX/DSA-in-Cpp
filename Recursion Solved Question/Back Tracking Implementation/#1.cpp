/*
So Basically Back Tracking me hota ye hai ki Hum Har Node Par Decision Lete hai, Agar Relevent laga toh Accept ya Fir Back jaake Again Decision lena padega. 

Ab Agar maan lo Hume ek Set Diya hua hai eg:- {1,2} Toh Iske Subsets Print karne hai toh simply hum sabse phele ek Null Set banayenge aur usme Element Push karenge aur Check karenge ki Ye Jo New set Hoga Wo Kya Required output hai ya nahi. Agar hai toh toh lega nahi toh Nahi Lega/ Push karega. Toh isme ek Tree Banti hai,

		        {}
(for 1)	       /  \
	         yes   no
	         {1}    {}	
(fro 2)	    /  \   /   \
	     yes   no yes   no
	   {1,2}  {1} {2}   {}

So Bacially Hume is Tree Ko hi implement karna hai.{Note:- Ye Tree Data Structure nahi hai ye sirf ek Visualisation hai}


*/

//Now we will implement the above logic in C++ using Recursion and Backtracking.
#include <iostream>
#include <vector>
using namespace std;

void Solve(vector <int>& ds , vector <int>& arr , int index){
    if (index == arr.size()){
        for(auto x : ds){
            cout << "{" << x << "}" << " , " ;
        }
        return ;
    }
//yes to Take Element From the arr
ds.push_back(arr[index]);
// Explorig the Full Left tree , matlab khali lena hai Element ko
Solve(ds , arr , index+1);
// ab saare Elements Ko wapis Remove Karega pop operation jisse ab ds khali ho jaayega
ds.pop_back();
// Not Take
Solve(ds , arr , index+1);
}