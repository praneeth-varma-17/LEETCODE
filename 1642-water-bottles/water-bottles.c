int numWaterBottles(int b, int e) {
    int total = b;
    int empty = b;

    while (empty >= e) {
        int new_bottles = empty / e;
        total += new_bottles;
        empty = new_bottles + (empty % e);
    }

    return total;
}
