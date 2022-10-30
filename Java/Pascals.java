class Pascals {
    public List<List<Integer>> generate(int numRows) {
        List<List<Integer>> res = new ArrayList<List<Integer>>();
		List<Integer> row, pre = null;
		for (int i = 0; i < numRows; ++i) {
			row = new ArrayList<Integer>();
			for (int j = 0; j <= i; ++j){
				if (j == 0 || j == i)
					row.add(1);
				else
					row.add(pre.get(j - 1) + pre.get(j));
            }
			pre = row;
			res.add(row);
		} 
		return res;
    }

    // function to find the elemment at a given row and column
    public int getElement(int row, int col) {
        if (row < 0 || col < 0 || col > row)
            return -1;//if row or column is negative or column is greater than row
        if (col == 0 || col == row)
            return 1;//if column is 0 or column is equal to row
        return getElement(row - 1, col - 1) + getElement(row - 1, col);
        //if column is neither 0 nor equal to row return the sum of the element at row-1 and column-1 and the element at row-1 and column
    }

    //function to print nth row of pascal's triangle
    public void printRow(int row) {
        for (int i = 0; i <= row; i++)
            System.out.print(getElement(row, i) + " ");
        System.out.println();
    }
}