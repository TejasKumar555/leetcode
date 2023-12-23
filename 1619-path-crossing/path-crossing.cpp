class Solution {
public:
   bool isPathCrossing(string path) {
    int x = 0, y = 0;
    unordered_set<string> visited;
    visited.insert("0,0");

    for (char direction : path) {
        if (direction == 'N') y++;
        else if (direction == 'S') y--;
        else if (direction == 'E') x++;
        else if (direction == 'W') x--;

        // Check if the current position has been visited before
        string currentPos = to_string(x) + "," + to_string(y);
        if (visited.count(currentPos)) {
            return true;
        }

        // Add the current position to the set of visited points
        visited.insert(currentPos);
    }

    // If no crossing is found, return false
    return false;
}

};