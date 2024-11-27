
import java.util.Scanner;

class invoice{
    private String number;
    private String description;
     private int quantity;
     private double price;
     static double totalAmount = 0.0;
     invoice(){
        Scanner input=new Scanner(System.in);
        System.out.println("Enter item number: ");
        number=input.nextLine();
        System.out.println("Enter description of item : ");
        description=input.nextLine();
        System.out.println("Enter quantity of product : ");
        quantity=input.nextInt();
        System.out.println("Enter quantity of price : ");
        price=input.nextDouble();
        if(quantity>=0)
        {
            // return 0.0;
            totalAmount+=(quantity*price);
        }
     }
     public double getInvoiceAmount()
     {
        if(quantity<=0)
        {
            return 0.0;
        }
        return quantity*price;
     }
     public String getnumber()
     {
            return number;
     }
     public String getdescription()
     {
        return description;
     }
     public int getquantity()
     {
        
        return quantity;
     }
     public double getprice()
     {
        return price;
     }
     public void setnumber()
     {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter item number: ");
        number=input.nextLine();
     }
     public void setdescription()
     {
        Scanner input=new Scanner(System.in);
        System.out.println("Enter item description: ");
        description=input.nextLine();
     }
     public void setquantity()
     {
        if(quantity>0)
        {
            totalAmount-=(quantity*price);
        }
        Scanner input=new Scanner(System.in);
        System.out.println("Enter item Quantity: ");
        quantity=input.nextInt();
        if(quantity>0)
        {
            totalAmount+=(quantity*price);
        }
     }
     public void setprice()
     {
        if(quantity>0)
        {
            totalAmount-=(quantity*price);
        }
        Scanner input=new Scanner(System.in);
        System.out.println("Enter item price: ");
        price=input.nextDouble();
        if(quantity>0)
        {
            totalAmount+=(quantity*price);
        }
     }
}

public class mallinvoice {
    public static void main(String[] args) {
        invoice icream=new invoice();
        System.out.println(invoice.totalAmount);
        invoice kulfi=new invoice();
        System.out.println(invoice.totalAmount);
    }
}
