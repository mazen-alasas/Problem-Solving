class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int index = -1, smallestDistance = 10e6;
        for(int i = 0; i < points.size(); i++) {
            if(points[i][0] == x || points[i][1] == y) {
                int currentDistance = abs(points[i][0] - x) + abs(points[i][1] - y);
                if(currentDistance < smallestDistance) {
                    smallestDistance = currentDistance;
                    index = i;
                }
            }
        }
        return index;
    }
};
