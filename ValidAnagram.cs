/*
Problem link: https://leetcode.com/problems/valid-anagram/

Brief explanation: create a 26 size int array as buckets for each letter in alphabet. Increment the bucket value with each char of string s and decrement with each char of string t. If they are anagrams, all buckets should remain with initial value, which is zero by default.
*/

public bool IsAnagram(string s, string t) {
    if (s.Count() != t.Count()) return false;

    var alphabetArray = new int[26];

    for (int i = 0; i < s.Count(); i++)
    {
        alphabetArray[s[i] - 'a']++;
        alphabetArray[t[i] - 'a']--;
    }

    foreach (var num in alphabetArray)
    {
        if (num != 0) return false;
    }
    
    return true;
}
