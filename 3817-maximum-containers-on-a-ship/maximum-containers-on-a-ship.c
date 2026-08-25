int maxContainers(int n, int w, int maxWeight) {
    int deck_capacity = n * n;
    int weight_capacity = maxWeight / w;
    return deck_capacity < weight_capacity ? deck_capacity : weight_capacity;
}
