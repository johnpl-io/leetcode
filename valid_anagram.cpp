bool isAnagram(string s, string t) {
	int letters[26] = {0};

	constexpr int offset = 97;

	for(auto &i : s) {
	++letters[i-offset];


	
	}

	for(auto &i :t) {
		--letters[i-offset];
	}
	for(auto &x : letters) {
		if(x!=0)
			return false;
	}
	return true;
}

//idea create an array of letters (ascii lowercase) add and subtract them given s and t check if one is not 0 
