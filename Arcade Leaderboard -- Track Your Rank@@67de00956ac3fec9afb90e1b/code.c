void trackPlayerRanks(int ranked[], int n, int player[], int m, int result[]) {
    int rank[n];
    int currentRank = 1;

    // Create dense ranks for the leaderboard
    rank[0] = currentRank;
    for (int i = 1; i < n; i++) {
        if (ranked[i] == ranked[i - 1]) {
            rank[i] = currentRank; // Same rank for equal scores
        } else {
            currentRank++; // Increase rank for different scores
            rank[i] = currentRank;
        }
    }

    // Find player's rank for each score
    int j = n - 1; // Pointer for leaderboard
    for (int i = 0; i < m; i++) {
        while (j >= 0 && player[i] >= ranked[j]) {
            j--; // Move up the leaderboard
        }
        if (j == -1) {
            result[i] = 1; // Player is at the top
        } else {
            result[i] = rank[j] + 1; // Player rank is below current rank
        }
    }
}
