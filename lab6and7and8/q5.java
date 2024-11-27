import java.util.Scanner;

class cartrip{
    int totalmiles;
    int gasolineused;
    double tripmilage;
    static double totaltripmilage=0;
    static int totalcar=0;
    cartrip(Scanner input)
    {
        System.out.println("eneter total miles travel : ");
        totalmiles=input.nextInt();
        System.out.println("enter gasoline used : ");
        gasolineused=input.nextInt();
        tripmilage=totalmiles/gasolineused;
        totaltripmilage+=tripmilage;
        totalcar++;
    }
    void milagepertrip()
    {
        System.out.println("Print mialge "+tripmilage);
    }
}

// class Allcarmilage extends  cartrip{
//     double overallmilage;
//     Allcarmilage(Scanner input)
//     {
//          overallmilage=totaltripmilage/totalcar;
//     }

// }

public class q5{
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        cartrip car1=new cartrip(input);
        cartrip car2=new cartrip(input);
        // Allcarmilage ml=new Allcarmilage(input);
        car1.milagepertrip();
        car2.milagepertrip();
        // System.out.println(ml.overallmilage);
        input.close();
    }
}