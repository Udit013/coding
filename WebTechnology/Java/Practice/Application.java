import java.util.*;

import Calculator.*;

public class Application {
    public static void main(String[]args){
        Scanner sc=new Scanner(System.in);
        int n;
        System.out.println("ENter the no of terms: ");
        n=sc.nextInt();
        double sum=0;
        for(int i=1;i<=n;i++){
            Numberr obj=new Numberr(i);
            sum+=1.0/obj.findCube();
            System.out.println("the sum is: "+ sum);
        }
        sc.close();
    }
}
