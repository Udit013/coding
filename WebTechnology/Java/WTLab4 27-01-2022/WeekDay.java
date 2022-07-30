import java.util.*;

public class WeekDay {

    int returnWeekDay(int day) {
        return day % 7;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        WeekDay ob = new WeekDay();
        System.out.println("Enter day: ");
        int day = sc.nextInt();
        switch (ob.returnWeekDay(day)) {
            case 1:
                System.out.println("Monday");

                break;
            case 2:
                System.out.println("Tuesday");

                break;
            case 3:
                System.out.println("Wednesday");

                break;
            case 4:
                System.out.println("Thursday");

                break;
            case 5:
                System.out.println("Friday");

                break;
            case 6:
                System.out.println("Saturday");

                break;
            case 7:
                System.out.println("Sunday");

                break;

            default:
                break;

        }
        sc.close();
    }
}