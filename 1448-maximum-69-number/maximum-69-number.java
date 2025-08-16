class Solution {
    public int maximum69Number (int num) {
        int temp = num;
        int index = -1;   // store position of leftmost 6
        int position = 0; // digit position from right

        while (temp > 0) {
            if (temp % 10 == 6) {
                index = position; // update index (rightmost first, leftmost last)
            }
            temp /= 10;
            position++;
        }

        // if index == -1 → no 6 found, return num as it is
        if (index == -1) return num;

        // add (3 * 10^index) to turn that 6 into 9
        return num + (3 * (int)Math.pow(10, index));
    }
}
