// More Clean code then previous, same complexity. Time: O(n*m) & Space: O(1).
class Solution {
    public boolean isPalindrome(String s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s.charAt(i) != s.charAt(j)) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    public String firstPalindrome(String[] words) {
        String firstPalindrome = "";
        for (String s : words) {
            if (isPalindrome(s)) {
                firstPalindrome = s;
                break;
            }

        }
        return firstPalindrome;
    }
}