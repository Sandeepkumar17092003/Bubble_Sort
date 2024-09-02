// bubble sort :- Replace swap two adjacent elements if in wrong order.
//bubble sort takes " n-1 " passes for sorting all element

//wrost case in bubble sort it happens only when data/array/vector present in descending order

//total no swap in wrost case in bubble sort=n(n-1)/2

//Time complexity:- O(n(n-1)/2) Note:- Here we neglect the constant so time complexity is (n^2);

//space complexity :- O(1);


//Q[1] How to optimize the bubble sort in the case of nearly arrays?
//Ans:- you can optimize the code when there no swapping in any pass then there is no need to move forward.
//      it means your data is sorted you can break the loop. By using a flag 


// Stable and Unstable sort
// Stable sort:- does not disturb the order of element with same value.

// Unstable sort:- does disturb the order of element with the same value.


// Q[1] Bubble sort is stable or unstable?
// Ans:-ubble sort is stable.



#include<iostream>
#include<vector>
using namespace std;


//Bubble sort function
void bubblesort(vector<int> &v)
{
    int n=v.size();
    int flag=false;
    int cnt=0;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            flag=true;
            if(v[j]>v[j+1])
            {
                swap(v[j],v[j+1]);
                cnt++;
            }
        }
        if(!flag)    
            break;
    }
    return;
}

int main()
{
    int n;
    cout<<"Enter how many element in the array ";
    cin>>n;
    vector<int> v(n);
    
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
    }
    bubblesort(v);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}

