class Solution {
    public int findClosest(int x, int y, int z) {
        return (Math.abs(x-z)==Math.abs(y-z)?0:(Math.min(Math.abs(x-z),Math.abs(y-z))==Math.abs(x-z)?1:2));
    }
}