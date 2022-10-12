
//Problem link : https://leetcode.com/problems/sliding-puzzle


// Consider each state in the board as a graph node, we just need to find out the min distance between start node and final target node "123450". 
//     Since it's a single point to single point questions, Dijkstra is not needed here. We can simply use BFS, and also count the level we passed.
//     Every time we swap 0 position in the String to find the next state. Use a hashTable to store the visited states.



unordered_map<int, vector<int>> moves{{0,{1,3}},{1,{0,2,4}},{2,{1,5}},{3,{0,4}},{4,{3,5,1}},{5,{4,2}}};
void dfs(string s, unordered_map<string, int>& m, int cur_zero, int swap_zero, int cur_move, int& min_moves) {
  swap(s[cur_zero], s[swap_zero]);
  if (s == "123450") min_moves = min(min_moves, cur_move);
  if (cur_move < min_moves && (m[s] == 0 || m[s] > cur_move)) {
    m[s] = cur_move;
    for (auto new_zero : moves[swap_zero]) dfs(s, m, swap_zero, new_zero, cur_move + 1, min_moves);
  }
}
int slidingPuzzle(vector<vector<int>>& b, int min_moves = INT_MAX) {
  string s = to_string(b[0][0]) + to_string(b[0][1]) + to_string(b[0][2]) 
    + to_string(b[1][0]) + to_string(b[1][1]) + to_string(b[1][2]);
  
  dfs(s, unordered_map<string, int>() = {}, s.find('0'), s.find('0'), 0, min_moves);
  return min_moves == INT_MAX ? -1 : min_moves;
}
