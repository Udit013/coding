import java.util.*;

public class TransposeMultiplication {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a[][] = new int[10][10];
        int b[][] = new int[10][10];
        int mul[][] = new int[10][10];
        int m, n, i, j, k;

        System.out.println("Enter order of matrix A: ");
        m = sc.nextInt();
        n = sc.nextInt();
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= n; j++) {
                System.out.println("Enter value of a[" + i + "][" + j + "]: ");
                a[i][j] = sc.nextInt();
                b[j][i] = a[i][j];
            }
        }
        System.out.println("\nMultiplication of matrix with its transpose:\n");
        for (i = 1; i <= m; i++) {
            for (j = 1; j <= m; j++) {
                mul[i][j] = 0;
                for (k = 1; k <= n; k++)
                    mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
                System.out.print(mul[i][j] + " ");
            }
            System.out.println("\n");
        }
    }
}
