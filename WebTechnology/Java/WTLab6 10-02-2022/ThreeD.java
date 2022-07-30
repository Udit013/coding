// A plastic manufacturer sells plastic in different shapes like 2D sheet
// and 3D box. The cost of sheet is Rs 40/ per square ft. and the cost of
// box is Rs 60/ per cubic ft. Implement it in Java to calculate the cost
// of plastic as per the dimensions given by the user where 3D inherits
// from 2D.

class TwoD{
    double length;
    double breadth;
    int price = 40;

    TwoD(double l, double b){
        length = l;
        breadth = b;
    }

    double returnArea(){
        return length*breadth;
    }

    double return2Dprice(){
        return returnArea()*price;
    }
}

public class ThreeD extends TwoD{
    double height;
    int price = 60;

    ThreeD(double l, double b, double h){
        super(l, b);
        height = h;
    }

    double returnVolume(){
        return super.length*super.breadth*height;
    }

    double return3Dprice(){
        return returnVolume()*price;
    }

    public static void main(String[] args){
        TwoD twoD = new TwoD(3, 5);
        System.out.println("Dimensions 2d = " + twoD.returnArea());
        System.out.println("Price 2d = " + twoD.return2Dprice());

        ThreeD threeD = new ThreeD(5, 5, 6);
        System.out.println("Dimensions 3d = " + threeD.returnVolume());
        System.out.println("Price 3d = " + threeD.return3Dprice());


    }

}
