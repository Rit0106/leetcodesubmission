class Solution {
public:
    int getMinSwaps(string num, int k) {
        //remember this question as time laga tha kaafi sikhne  m
         string original = num;

        // Step 1: Generate the k-th next lexicographical permutation
        for (int i = 0; i < k; i++) {
            next_permutation(num.begin(), num.end());
        }

        int swaps = 0;

        // Step 2: Count the number of adjacent swaps needed
        for (int i = 0; i < num.size(); i++) {
            if (original[i] != num[i]) {
                int j = i;

                // Find the position in original where num[i] is located
                while (original[j] != num[i]) {
                    j++;
                }

                // Bring the character to the i-th position using adjacent swaps
                while (j > i) {
                    swap(original[j], original[j - 1]);
                    swaps++;
                    j--;
                }
            }
        }

        return swaps;
    }
};