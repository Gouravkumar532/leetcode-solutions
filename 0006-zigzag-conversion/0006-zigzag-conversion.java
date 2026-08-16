class Solution {
    public String convert(String s, int numRows) {

        if (numRows == 1 || numRows >= s.length()) {
            return s;
        }

        int[] arr = new int[s.length()];

        int k = 0;
        int direction = 1;

        arr[0] = 0;

        // Store the row number of each character
        for (int i = 1; i < s.length(); i++) {

            k = k + direction;
            arr[i] = k;

            if (k == numRows - 1) {
                direction = -1;
            }

            if (k == 0) {
                direction = 1;
            }
        }

        StringBuilder ans = new StringBuilder();

        // Read row by row
        for (int j = 0; j < numRows; j++) {

            for (int i = 0; i < s.length(); i++) {

                if (arr[i] == j) {
                    ans.append(s.charAt(i));
                }
            }
        }

        return ans.toString();
    }
}