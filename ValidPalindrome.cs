/*
Problem: https://leetcode.com/problems/valid-palindrome/

Explanation: we just need to compare the head (start) char with the tail char (end): if they are different, it's not a palindrome. Additionally, before comparing them we also need to make sure that we are skipping chars that are not a letter, it's possible to use the IsLetterOrDigit() method.
*/

public bool IsPalindrome(string s) {
    if (String.IsNullOrEmpty(s)) return true;

    int head = 0, tail = s.Count() - 1;

    char cHead, cTail;

    while (head < tail)
    {
        cHead = s[head];
        cTail = s[tail];

        if (!Char.IsLetterOrDigit(cHead))
            head++;
        else if (!Char.IsLetterOrDigit(cTail))
            tail--;
        else
        {
            if (Char.ToLower(cHead) != Char.ToLower(cTail)) return false;
            head++;
            tail--;
        }
    }

    return true;
}
