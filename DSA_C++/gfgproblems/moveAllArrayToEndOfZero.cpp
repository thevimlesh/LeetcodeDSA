class Solution{
public:
	void pushZerosToEnd(int arr[], int n) {
	    // code here
	    
	     int count = 0; // Count of non-zero elements

        // Traverse the array. If the element encountered is non-zero, then replace the element at index 'count' with this element
        for (int i = 0; i < n; i++) {
            if (arr[i] != 0) {
                arr[count] = arr[i];
                count++;
            }
        }

        // Now all non-zero elements have been shifted to the front and 'count' is set as the index of the first zero element
        // Make all the remaining elements 0
        while (count < n) {
            arr[count] = 0;
            count++;
        }
    }
};