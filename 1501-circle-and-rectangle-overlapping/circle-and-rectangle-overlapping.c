#include <stdbool.h>

bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
    // Clamp xCenter to the range [x1, x2] to find the closest X coordinate
    int closestX = (xCenter < x1) ? x1 : (xCenter > x2) ? x2 : xCenter;
    
    // Clamp yCenter to the range [y1, y2] to find the closest Y coordinate
    int closestY = (yCenter < y1) ? y1 : (yCenter > y2) ? y2 : yCenter;
    
    // Calculate the distance vector from the circle's center to this closest point
    int dx = xCenter - closestX;
    int dy = yCenter - closestY;
    
    // Check if the squared distance is less than or equal to the squared radius
    return (dx * dx + dy * dy) <= (radius * radius);
}
