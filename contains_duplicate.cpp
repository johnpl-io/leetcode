bool containsDuplicate(vector <int> &nums) {
	std::unordered_set <int> uset;


	for(auto x : nums) {
	if(uset.find(x) == uset.end()) {
		uset.insert(x);
		continue;
	}
	return true;


	
	}
	return false;


}

//IDEA: Create a hash table of integers insert an integer into the table if it is all ready there return true as there is a duplicate
//else false
