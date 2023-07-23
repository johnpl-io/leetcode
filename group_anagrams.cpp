vector<vector<string>> groupAnagrams(vector<strings> &strs) {
	unordered_map<string, vector<string>> anagramGroups;
	for(const auto &str : strs) {
		string key = str;
		sort(key.begin(), key.end());
		anagramGroups[key].push_back(str);

	}

	vector<vector<string>> ans;
	for(const auto &pair : anagramGroups) {
		ans.push_back(pair.second);
	}

	return ans;


}
// first use a map to create anagrams by sorting the words and hashing them and to a vector of strings
// next loop through the unordered map and vector of strings to the ans 



