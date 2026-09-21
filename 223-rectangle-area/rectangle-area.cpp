class Solution {
public:

    int area(int x1, int y1, int x2, int y2) {
        int L = x2 - x1;
        int B = y2 - y1;
        return L * B;
    }

    int computeArea(int ax1, int ay1, int ax2, int ay2,
                    int bx1, int by1, int bx2, int by2) {

        int area1 = area(ax1, ay1, ax2, ay2);
        int area2 = area(bx1, by1, bx2, by2);

        // area2 is completely inside area1
        if (ax1 <= bx1 && ay1 <= by1 &&
            ax2 >= bx2 && ay2 >= by2)
            return area1;

        // area1 is completely inside area2
        if (ax1 >= bx1 && ay1 >= by1 &&
            ax2 <= bx2 && ay2 <= by2)
            return area2;

        int x1 = max(ax1, bx1);
        int y1 = max(ay1, by1);
        int x2 = min(ax2, bx2);
        int y2 = min(ay2, by2);

        int common_area = 0;

        if (x1 < x2 && y1 < y2)
            common_area = area(x1, y1, x2, y2);

        return area1 + area2 - common_area;
    }
};