
import java.util.Scanner;
class carinvest{
     double total_Miles;
     double coastPerGallon;
     double AverageFee;//milage
     double TollPerDay;
     int totalCar;
     double totalCost;
    //  double milage;

     carinvest()
     {
          Scanner input=new Scanner(System.in);
          System.out.println("Total number of car: ");
          totalCar=input.nextInt();
          System.out.println("Ente rto miles travel : ");
          total_Miles=input.nextDouble();
          System.out.println("Enter Gas cost per Gallon : ");
          coastPerGallon=input.nextDouble();
          System.out.println("Enter AverageFee milage : ");
         AverageFee=input.nextDouble();
         System.out.println("Enter TollPerDay : ");
         TollPerDay=input.nextDouble();
        //  input.close();
          totalCost=(((total_Miles*AverageFee)/coastPerGallon)+TollPerDay)*totalCar;
        //   return totalCost;
     }
}

class carssaving extends carinvest{
        double totalsaving;
        int maxPersoninCar;
        carssaving()
        {
            // if (totalCost == 0) {
            //     totalcost();
            // }
            double percarcost=totalCost/totalCar;
            Scanner input=new Scanner(System.in);
            System.out.println("Enter maximum nuber of people in car : ");
            maxPersoninCar=input.nextInt();
            int totalgroup=(totalCar+maxPersoninCar-1)/maxPersoninCar;
            totalsaving=percarcost*totalgroup;
            input.close();
            // return totalsaving;
        }
}

public class main{
    public static void main(String[] args) {
        carssaving c1=new carssaving();
        System.out.println("Total saving is : "+c1.totalsaving);
        System.out.println("Total Cost is : "+c1.totalCost);
        // System.out.println("Total cost of car is: "+c1.totalcost());

        // System.out.println("total saving: "+c1.totalSave());
    }
}