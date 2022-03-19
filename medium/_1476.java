package medium;

public class _1476 {

    class SubrectangleQueries {

        int[][] rectangle; // store all elements of given values of rectangle

        public SubrectangleQueries(int[][] rectangle) {
            this.rectangle = rectangle;
        }
        
        public void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
            // change every elements in the range of col1 -> col2 and row1 -> row2
            for (int i = row1; i <= row2; i++) {
                for (int j = col1; j <= col2; j++ ) {
                    rectangle[i][j] = newValue;
                }
            }
        }
        
        public int getValue(int row, int col) {
            return rectangle[row][col];
        }

    }

    public static void main(String[] args) {
        _1476 m = new _1476();

        int[][] rectangle = {{1,2,1},{4,3,4},{3,2,1},{1,1,1}};

        SubrectangleQueries subRect =  m.new SubrectangleQueries(rectangle);

        System.out.println(subRect.getValue(0, 2));
        subRect.updateSubrectangle(0,0,3,2,5);
        System.out.println(subRect.getValue(0, 2));
        System.out.println(subRect.getValue(3, 1));
        subRect.updateSubrectangle(3,0,3,2,10);
        System.out.println(subRect.getValue(3, 1));
        System.out.println(subRect.getValue(0, 2));

    }
    
}

/*
Implement the class SubrectangleQueries which receives a rows x cols rectangle as a matrix of integers in the constructor and supports two methods:

1. updateSubrectangle(int row1, int col1, int row2, int col2, int newValue)

    Updates all values with newValue in the subrectangle whose upper left coordinate is (row1,col1) and bottom right coordinate is (row2,col2).

2. getValue(int row, int col)

    Returns the current value of the coordinate (row,col) from the rectangle.
*/
