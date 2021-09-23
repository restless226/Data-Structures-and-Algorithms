///*
//PROBLEM STATEMENT:
//You are given a set of N types of rectangular 3-D boxes,
//where the ith box has height h, width w and length l.
//Your task is to create a stack of boxes which is as tall as possible,
//but you can only stack a box on top of another box
//if the dimensions of the 2-D base of the lower box are each strictly larger
//than those of the 2-D base of the higher box.
//Of course, you can rotate a box so that any side functions as its base.
//It is also allowable to use multiple instances of the same type of box.
//You task is to complete the function maxHeight
//which returns the height of the highest possible stack so formed.
//
//NOTE:
//Base of the lower box should be strictly larger
//than that of the new box we're going to place.
//This is in terms of both length and width, not just in terms of area.
//So, two boxes with same base cannot be placed one over the other.
//*/
//
///*
//PREREQUISITE: LIS
//
//We cant compare on basis of area
//We have to compare their dimensions which comprise base area
//
//Our purpose for rotation is to generate new cuboid configuration
//Repeating a cuboid by 180 degree will not give a new configuration
//
//For any box with unique dimensions, max 3 unique configurations are possible
//If given N boxes, then considering rotation max of 3N unique boxes are possible
//First box placed should have HIGHEST BASE AREA,
//so that we can stack max no of boxes above it, and so on...
//
//Even if two/more configurations have same height, we don't care
//We just want to maximize the height
//Also, no of boxes used for maximum height does not matter
//*/
//
///*
//STEPS IN SOLVING:
//1.Produce all rotations, hence all box instances are created
//2.We need to make a Pyramid like structure.
//  Hence, sort the boxes based on Base Area (decreasing order preferred)
//
//NOTE: A pyramid should be "STRICTLY DECREASING" both in terms of Base Area and (l and w)
//(l1 < l2 and w1 < w2) -> (l1 * l2) < (w1 * w2)
//However, B1 < B2 does not imply that (l1 < l2 or w1 < w2)
//because, one dimension may be very large than the other;
//but both the dimensions must be less.
//
//3.Out of the sorted sequence of the boxes, we will be skipping some of the boxes,
//  to form Longest Decreasing Subsequence (LDS) both in terms of Base Area and (l and w).
//
//[NOTE]** :
//Finding "highest stack" is same as finding LIS/LDS
//Here we are finding LIS (from top to bottom)
//*/
//
//#include <bits/stdc++.h>
//
//#define int long long
//using namespace std;
//
//struct Box {
//    int height;
//    int width;
//    int length;
//};
//
//void printBox(struct Box box[], int n) {
//    cout << "\nheight   " << "width     " << "length\n";
//    for (int i = 0; i < n; ++i) {
//        cout << box[i].height << "          " << box[i].width << "          " << box[i].length << '\n';
//    }
//    cout << '\n';
//}
//
//bool cmp(struct Box b1, struct Box b2) {
//    return (b1.length * b1.width > b2.length * b2.width) ? true : false;    // [NOTE]: minor change
////    return (b1.length > b2.length && b1.width > b2.width) ? true : false;
//}
//
//int lis(struct Box box[], int n) {
//    //STEP-3: Find LIS
//    int dp[3 * n];
//
//    for (int i = 0; i < 3 * n; i++) {
//        dp[i] = box[i].height;
//    }
//
//    for (int i = 0; i < 3 * n; i++) {
//        for (int j = 0; j < i; j++) {
//            if (box[i].length < box[j].length
//                && box[i].width < box[j].width
//                && dp[i] < dp[j] + box[i].height) {
//                dp[i] = dp[j] + box[i].height;
//            }
//        }
//    }
//
//    int ans = 0;
//    for (int i = 0; i < 3 * n; i++) {
//        ans = max(ans, dp[i]);
//    }
//    return ans;
//}
//
//int solve(int height[], int width[], int length[], int n) {
//
//    // STEP-1:Make an array of box (to store -> h, w, l)
//    struct Box box[3 * n];   // store  all 3 orientations
//
//    int index = 0;
//    for (int i = 0; i < n; ++i) {
//        box[index].height = height[i];
//        box[index].width = max(width[i], length[i]);
//        box[index].length = min(width[i], length[i]);
//        index += 1;
//
//        box[index].height = length[i];
//        box[index].width = max(height[i], width[i]);
//        box[index].length = min(height[i], width[i]);
//        index += 1;
//
//        box[index].height = width[i];
//        box[index].width = max(length[i], height[i]);
//        box[index].length = min(length[i], height[i]);
//        index += 1;
//
//    }
//
//
//    cout << "\nBOX BEFORE SORTING...\n";
//    printBox(box, 3 * n);
//
//    // STEP-2: Sort in DSC order of height
//    sort(box, box + 3 * n, cmp);
//
//    cout << "\nBOX AFTER SORTING...\n";
//    printBox(box, 3 * n);
//
//    return lis(box, n);
//}
//
//int32_t main() {
//    cin.tie(nullptr);
//    cout.tie(nullptr);
//    ios_base::sync_with_stdio(false);
//
//    int t;
//    cin >> t;
//    int n;
//
//    while (t--) {
//        cin >> n;
//        int height[n];
//        int width[n];
//        int length[n];
//
//        for (int i = 0; i < n; i++) {
//            cin >> height[i];
//        }
//
//        for (int i = 0; i < n; i++) {
//            cin >> width[i];
//        }
//
//        for (int i = 0; i < n; i++) {
//            cin >> length[i];
//        }
//
//        cout << "\nheight of the highest possible stack formed is : " << solve(height, width, length, n);
//    }
//
//    return 0;
//}
//
///*
//INPUT:
//3
//3
//10 4 4
//12 6 5
//32 7 6
//4
//4 1 4 10
//6 2 5 12
//7 3 6 32
//5
//9 9 5 2 8
//8 4 5 4 6
//2 3 7 5 4
//
//OUTPUT:
//height of the highest possible stack formed is :
//BOX BEFORE SORTING...
//
//height   width     length
//10          32          12
//32          12          10
//12          32          10
//4          7          6
//7          6          4
//6          7          4
//4          6          5
//6          5          4
//5          6          4
//
//
//BOX AFTER SORTING...
//
//height   width     length
//10          32          12
//12          32          10
//32          12          10
//4          7          6
//4          6          5
//6          7          4
//7          6          4
//5          6          4
//6          5          4
//
//564 1 4 10
//height of the highest possible stack formed is :
//BOX BEFORE SORTING...
//
//height   width     length
//4          7          6
//7          6          4
//6          7          4
//1          3          2
//3          2          1
//2          3          1
//4          6          5
//6          5          4
//5          6          4
//10          32          12
//32          12          10
//12          32          10
//
//
//BOX AFTER SORTING...
//
//
//height   width     length
//10          32          12
//12          32          10
//32          12          10
//4          7          6
//4          6          5
//6          7          4
//7          6          4
//5          6          4
//6          5          4
//1          3          2
//2          3          1
//3          2          1
//
//609 9 5 2 8
//height of the highest possible stack formed is :
//BOX BEFORE SORTING...
//
//height   width     length
//9          8          2
//2          9          8
//8          9          2
//9          4          3
//3          9          4
//4          9          3
//5          7          5
//7          5          5
//5          7          5
//2          5          4
//5          4          2
//4          5          2
//8          6          4
//4          8          6
//6          8          4
//
//
//BOX AFTER SORTING...
//
//height   width     length
//2          9          8
//4          8          6
//3          9          4
//5          7          5
//5          7          5
//6          8          4
//4          9          3
//7          5          5
//8          6          4
//2          5          4
//8          9          2
//9          8          2
//9          4          3
//4          5          2
//5          4          2
//
//28
//*/