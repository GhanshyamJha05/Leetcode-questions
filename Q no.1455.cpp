class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
    int index = 1;
    int pos = 0;

    while (pos < sentence.size()) {
        if (sentence.substr(pos, searchWord.size()) == searchWord &&
            (pos == 0 || sentence[pos - 1] == ' ')) {
            return index;
        }
        while (pos < sentence.size() && sentence[pos] != ' ') pos++;
        pos++;
        index++;
    }
    return -1;
}
};
