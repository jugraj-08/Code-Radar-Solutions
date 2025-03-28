void trackScores(int scores[], int n, int result[]) {
    int highest = scores[0];
    int lowest = scores[0];
    int highCount = 0;
    int lowCount = 0;

    for (int i = 1; i < n; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            highCount++;
        }
        if (scores[i] < lowest) {
            lowest = scores[i];
            lowCount++;
        }
    }

    result[0] = highCount;
    result[1] = lowCount;
}
