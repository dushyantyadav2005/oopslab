
import java.util.Scanner;

class Date{
    int month;
    int day;
    int year;
    Date(Scanner input)
    {
        System.out.println("enter month : ");
        month=input.nextInt();
        System.out.println("enter Day : ");
        day=input.nextInt();
        System.out.println("enter year : ");
        year=input.nextInt();
    }
    void setday(Scanner input)
    {
        System.out.println("enter day : ");
        day=input.nextInt();
    }
    void setmonth(Scanner input)
    {
        System.out.println("enter month : ");
        month=input.nextInt();
    }
    void setyear(Scanner input)
    {
        System.out.println("enter year : ");
        year=input.nextInt();
    }

    void getter()
    {
        System.out.println("Your day : "+day);
        System.out.println("Your month : "+month);
        System.out.println("Your year : "+year);

        System.out.println(day+"/"+month+"/"+year);
    }
}

public class q4 {
    public static void main(String[] args) {
        Scanner input=new Scanner(System.in);
        Date date=new Date(input);
        date.setday(input);
        date.getter();
    }
}
