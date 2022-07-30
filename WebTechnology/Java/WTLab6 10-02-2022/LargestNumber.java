// Write a program in Java to find the largest among 3 user entered nos. through command line.
public class LargestNumber {
    public static void main(String[] args)
    {
        int a=Integer.parseInt(args[0]);
        int b=Integer.parseInt(args[1]);
        int c=Integer.parseInt(args[2]);
        int temp=a>b?a:b;
        int largest=c>temp?c:temp;  
        System.out.println("Largest number is: "+largest);  
    }
}
