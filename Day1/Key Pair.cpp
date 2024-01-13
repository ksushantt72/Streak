//GFG Problem
//KeyPair

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//Copying code from GFG
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool Method1Naive(int arr[], int n ,int x){
	    
	    for(int i=0;i<n;i++){
	        for(int j=i+1;j<n;j++){
	            if(arr[i]+arr[j]==x){
	                return true;
	            }
	        }
	    }
	    return false;
	    
	}
	bool Method2Pointer(int arr[],int n, int x){
	    int low=0;
	    int high=n-1;
	    while(low<high){
	        if((arr[low]+arr[high])>x){
	            high--;
	        }
	        else if((arr[low]+arr[high])<x){
	            low++;
	        }
	        else if((arr[low]+arr[high])==x){
	            return true;
	        }
	    }
	    return false;
	    
	}
	
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    
	    //NaiveApproach
	   // Method1Naive(arr,n,x);
	   
	    //Two Pointer Approach
	    //First we wil sort the array in ascending order to get the sorted array
	   sort(arr,arr+n); 
	   return Method2Pointer(arr,n,x);
	    
	}
};