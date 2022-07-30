import java.util.*;

class transpose {
    public static void main(String args[]) {
        // declaring
        int[][] arr = new int[3][3];
        int[][] arrt = new int[3][3];
        int[][] arrm = new int[3][3];
        System.out.println("Enter elements of Matrix : ");
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arr[i][j] = sc.nextInt();
            }
        }
        sc.close();
        // printing original
        System.out.println(" \nMatrix is : ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(arr[i][j] + " ");
            }
            System.out.println();
        }
        // transpose
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                arrt[i][j] = arr[j][i];
            }
        }
        // printing Transpose
        System.out.println(" \nTranspose is : ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(arrt[i][j] + " ");
            }
            System.out.println();
        } // multiplication
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                for (int k = 0; k < 3; k++) {
                    arrm[i][j] += arr[i][k] * arrt[k][j];
                }
            }
        }
        // printing multiplication
        System.out.println("\nMultiplication is : ");
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                System.out.print(arrm[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println();
    }
}
