#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
        int m=matrix.size();
        int n=matrix[0].size();
        int totalElement=m*n;
        int count=0;

        int startingRow=0;
        int endingCol=n-1;
        int endingRow=m-1;
        int startingCol=0;

//count<total element isiliye le rhe hain
//kyukii jab 8<9 ka case chalega tab
//9th element push hoga and count uske baad update hoga 
//that means count <9 but still 9 elements
//are pushed because pushing condition comes
//before the count updation condition 

        while(count<totalElement){
            //We will Print Starting Row firstly
            for(int i=startingCol;i<=endingCol && count<totalElement;i++){
                ans.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            
            //We will Print Ending column firstly
            for(int i=startingRow;i<=endingRow && count<totalElement;i++){
                ans.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            
            //Now we will print Ending Row
            for(int i=endingCol;i>=startingCol && count<totalElement;i--){
                ans.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            
            //Now we will Print Starting Column 
            for(int i=endingRow;i>=startingRow && count<totalElement;i--){
                ans.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return ans;
    }
};
