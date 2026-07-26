class Solution {
    public int kthSmallest(int[][] matrix, int k) {
        int n = matrix.length;

        // Min Heap: {value, row, col}
        PriorityQueue<int[]> pq = new PriorityQueue<>(
            (a, b) -> a[0] - b[0]
        );

        // Push the first element of each row
        for (int i = 0; i < n; i++) {
            pq.offer(new int[]{matrix[i][0], i, 0});
        }

        // Remove the smallest k-1 elements
        while (--k > 0) {
            int[] cur = pq.poll();

            int row = cur[1];
            int col = cur[2];

            // Push the next element from the same row
            if (col + 1 < n) {
                pq.offer(new int[]{matrix[row][col + 1], row, col + 1});
            }
        }

        return pq.peek()[0];
    }
}