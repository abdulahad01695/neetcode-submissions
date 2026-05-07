class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        // 🔹 PART 1: 27 hash sets
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> boxes(9);

        // 🔹 PART 2: traverse the board
        for (int i = 0; i < 9; i++) {
            for (int j = 0; j < 9; j++) {

                char num = board[i][j];

                // 🔹 PART 3: skip empty cells
                if (num == '.') continue;

                // 🔹 PART 4: find box index
                int boxIndex = (i / 3) * 3 + (j / 3);

                // 🔹 PART 5: duplicate check
                if (rows[i].count(num) ||
                    cols[j].count(num) ||
                    boxes[boxIndex].count(num)) {
                    return false;
                }

                // 🔹 PART 6: insert into all three
                rows[i].insert(num);
                cols[j].insert(num);
                boxes[boxIndex].insert(num);
            }
        }

        // 🔹 PART 7: no duplicates found
        return true;
    }
};