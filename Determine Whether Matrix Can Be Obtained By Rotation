Determine Whether Matrix Can Be Obtained By Rotation

class Solution {
    public boolean findRotation(int[][] mat, int[][] target) {
       // to rotate 4 times
        for(int i =0;i<4;i++){
            mat = convert(mat);
            if(check(mat,target) == true)
                return true;
        }
        return false;
    }
   // this function check it the matrix same as target
    public static boolean check(int[][] mat,int[][] target){
        for(int i =0;i<mat.length;i++){
            for(int j=0;j<mat[i].length;j++){
                if(mat[i][j]!=target[i][j])return false;
            }
        }
        return true;
    }
     // this function rotate the mtatrix whenever called
    public static int[][] convert(int[][] mat){
        int [][] arr = new int[mat.length][mat[0].length];
        for(int i =0;i<mat.length;i++){
            for(int j=0;j<mat[0].length;j++){
                arr[mat[0].length-j-1][i] = mat[i][j];
            }
        }
        return arr;
    }
}
