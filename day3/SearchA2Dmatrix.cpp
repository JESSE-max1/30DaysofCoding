/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.
*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int n = matrix.size();
        int m= matrix[0].size();
        int low = 0;
        int high = (n*m)-1;
        while(low<=high){
            int mid = (low + (high-low)/2);
            if(matrix[mid/m][mid%m] == target)
                return true;
            if(matrix[mid/m][mid%m] <target)
                low=mid+1;
            else
                high = mid-1;
        }
        return false;

    }
};

/*Integers in each row are sorted in ascending from left to right.
Integers in each column are sorted in ascending from top to bottom.
 */

 class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(!matrix.size()) return false;
        int n = matrix.size();
        int m = matrix[0].size();
        int smallest = matrix[0][0];
        int largest = matrix[n-1][m-1];
        if(target<smallest || target >largest) return false;
        int i=0,j=m-1;
        while(i<n && j>=0){
            if(matrix[i][j] == target) return true;
            if(matrix[i][j] < target) i++;
            else j--;
        }
        return false;
    }
};
