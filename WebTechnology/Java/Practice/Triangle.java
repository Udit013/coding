import java.util.*;

class NoTriangleFormException extends Exception{

    public NoTriangleFormException(String s){
        super(s);
    }

}

public class Triangle{
    public int a,b,c;

    Triangle(int a,int b,int c){
        this.a=a;
        this.b=b;
        this.c=c;
    }

    public double Find_Area(){
        double area;
        double s;
        s=(a+b+c)/2;
        area= Math.sqrt(s*(s-a)*(s-b)*(s-c));
        return area;
    }

    public int Find_Perimeter(){
        int peri;
        peri=a+b+c;
        return peri;
    }

    public static void main(String[]args) throws Exception {
        Scanner sc= new Scanner(System.in);
        int a,b,c;
        System.out.println("ENter first side of triangle: ");
        a=sc.nextInt();
        System.out.println("\nENter second side of triangle: ");
        b=sc.nextInt();
        System.out.println("\nENter third side of triangle: ");
        c=sc.nextInt();
        
        Triangle obj=new Triangle(a,b,c);
        try{
            if((a+b)<c || (b+c)<a || (a+c)<b){
                throw new NoTriangleFormException("Invalid input");
            }
            else{
                System.out.println("the area of triangle is: "+ obj.Find_Area());
                System.out.println("the perimeter is : " +obj.Find_Perimeter());
            }
        }
        catch(NoTriangleFormException m){
            System.out.println(m);

        }
    }
}
